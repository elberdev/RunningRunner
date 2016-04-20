using UnityEngine;
using System.Collections;

public class GameInfo : MonoBehaviour {

	// if game is running or at menu idle
	[System.NonSerialized]
	public bool isGameRunning;

	// menu UI objects
	private Transform removeAdsBackgroundScreen;
	private Transform purchaseSucceededScreen;
	private Transform purchaseFailedScreen;

	// reference to GameUI canvas
	public GameObject gameUI;

	public Canvas menuUI;

	// reference to character
	public Character gameCharacter;

	// reference to level manager
	public LevelPieceManager levelManager;

	// reference to our fading object
	public Transform fadeObject;

	// our fading object's texture
	private GUITexture fadeTexture;

	// game status
	private bool shouldRestartGame;

	// fade status
	private bool shouldFade;

	// character and level reset status
	private bool shouldRestartLevelAndCharacter;

	// Use this for initialization
	void Awake () {
	
		if (fadeObject != null) 
		{
			fadeObject.transform.position = new Vector3 (0.5f, 0.5f, 0.0f);
			fadeTexture = fadeObject.GetComponent<GUITexture> ();
			fadeTexture.pixelInset = new Rect (0.0f, 0.0f, Screen.width, Screen.height);

			RestartGame ();
		}
	}

	void Start() {
	
		if (menuUI != null) {
		
			removeAdsBackgroundScreen = menuUI.transform.Find ("RemoveAdsBackgroundScreen");
			purchaseSucceededScreen = menuUI.transform.Find ("PurchaseSucceededBackgroundScreen");
			purchaseFailedScreen = menuUI.transform.Find ("PurchaseFailedBackgroundScreen");
		}
	}
	
	// Update is called once per frame
	void Update () 
	{
		// if game is restarted, we fade to black, reset level and character
		// halfway through the transition and then fade back to transparent
		// so the user doesn't see any weirdness
		if (shouldRestartGame) {
		
			if (shouldFade) {
			
				FadeToBlack ();

				if (fadeTexture.color.a >= 0.95f) {
				
					shouldFade = false;
				}
			
			} else {
			
				FadeToNormal ();

				if (fadeTexture.color.a <= 0.5f) {
				
					if (shouldRestartLevelAndCharacter) {
					
						// restart level and character before fade is done
						RestartLevelAndCharacter();
					}

					if (fadeTexture.color.a <= 0.05f) {
					
						shouldRestartGame = false;
						fadeTexture.enabled = false;
					}
				}
			}
		}

	}

	public void PauseGame() {
	
		Time.timeScale = (Time.timeScale == 1) ? 0 : 1;
	}

	public void RestartGame() {

		// game cannot be paused
		if (Time.timeScale == 1) {
		
			fadeTexture.enabled = true;
			shouldRestartLevelAndCharacter = true;
			shouldRestartGame = true;
			shouldFade = true;

			HideRestartButton (true);
		}
	}

	private void RestartLevelAndCharacter() {

		shouldRestartLevelAndCharacter = false;

		if (gameCharacter != null) {
		
			gameCharacter.ReviveCharacter ();
		}

		if (levelManager != null) {
		
			levelManager.ResetLevelPieces (isGameRunning);
		}
	}

	// will lerp the alpha value of our fadeTexture to black
	private void FadeToBlack() {

		if (fadeTexture != null) {
		
			fadeTexture.color = Color.Lerp (fadeTexture.color, Color.black, 2.0f * Time.deltaTime);
		}
	}

	// lerp from black back to normal
	private void FadeToNormal() {

		if (fadeTexture != null) {
		
			fadeTexture.color = Color.Lerp (fadeTexture.color, Color.clear, 2.0f * Time.deltaTime);
		}
	}

	public void HideRestartButton(bool shouldHide) {

		if (gameUI != null) {
		
			gameUI.transform.Find ("RestartButton").gameObject.SetActive (!shouldHide);
		}
	}

	// show or hide purchase screen
	public void ShowPurchaseScreen(bool shouldShow) {
		
		if (removeAdsBackgroundScreen != null) {
		
			removeAdsBackgroundScreen.gameObject.SetActive (shouldShow);
		}
	}

	// show or hide success screen
	public void ShowSuccessScreen(bool shouldShow) {
	
		if (purchaseSucceededScreen != null) {
		
			purchaseSucceededScreen.gameObject.SetActive (shouldShow);
		}
	}

	// show or hide failure screen
	public void ShowFailScreen(bool shouldShow) {
	
		if (purchaseFailedScreen != null) {
		
			purchaseFailedScreen.gameObject.SetActive (shouldShow);
		}
	}

	public void GameStateButtonPressed(bool shouldRun) {
	
		isGameRunning = shouldRun;

		if (menuUI != null) {
		
			menuUI.gameObject.SetActive (!shouldRun);
		}

		if (gameUI != null) {
		
			gameUI.gameObject.SetActive (shouldRun);
		}

		RestartGame ();
	}
}
