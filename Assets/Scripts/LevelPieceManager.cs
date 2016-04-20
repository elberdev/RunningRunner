using UnityEngine;
using System.Collections;

public class LevelPieceManager : MonoBehaviour {

	[System.NonSerialized]
	// if the game is being played or in main menu
	public bool isGameRunning;

	// main menu level piece
	public LevelPiece idleLevelPiece;

	public LevelPiece startingLevelPiece;

	// level pieces to cycle through
	public LevelPiece[] levelPieces;

	// how quickly the level pieces move
	public float levelPiecesMoveRate;

	// the currently active level pieces
	private LevelPiece[] activeLevelPieces;

	// Use this for initialization
	void Start () {
	
		// bool values default to false, so when Start runs isGameRunning is false
		activeLevelPieces = new LevelPiece[2];
		ResetLevelPieces (isGameRunning);
	}

	void SetGamePieces() {

		activeLevelPieces [0] = startingLevelPiece;
		activeLevelPieces [1] = GetRandomLevelPiece ();
		activeLevelPieces [1].transform.position = activeLevelPieces [0].endLocation.position;
	}

	void SetIdlePieces() {

		activeLevelPieces [0] = startingLevelPiece;
		activeLevelPieces [1] = idleLevelPiece;
		activeLevelPieces[1].transform.position = activeLevelPieces[0].endLocation.position;
	}
	
	// Update is called once per frame
	void Update () {
	
		// loops through both active level pieces to move them together
		for (int i = 0; i < activeLevelPieces.Length; i++) {

			// adjust piece x location according to the move rate

			// get piece current location
			Vector3 newLocation = activeLevelPieces [i].transform.position;
			// update location based on time elapsed since last frame
			newLocation.x -= levelPiecesMoveRate * Time.deltaTime;
			// move to updated location
			activeLevelPieces [i].transform.position = newLocation;

			// if it has passed the bounds of the LevelPieceManager
			if (activeLevelPieces [i].endLocation.transform.position.x 
				< transform.position.x) {
			
				if (isGameRunning) {
				
					// and it's the beginning piece
					if (activeLevelPieces [i] == startingLevelPiece) {

						// remove it from our reusable pieces
						activeLevelPieces [i].gameObject.SetActive (false);
					}
					// reset used piece location to initial spawn location
					activeLevelPieces [i].transform.position = activeLevelPieces [i].GetInitialLocation ();
					// get a new level piece that is not currently in use
					activeLevelPieces [i] = GetRandomLevelPiece ();
					// set its location to the end location of the other active piece
					activeLevelPieces [i].transform.position = 
						FindOtherLevelPiece (activeLevelPieces [i]).endLocation.position;
					activeLevelPieces [i].ResetAllChildrenCoins ();
				
				} else {
				
					// if game is paused, recycle the two level pieces over and over
					LevelPiece nextLevelPiece = (i == 0) ? activeLevelPieces [1] : activeLevelPieces [0];
					activeLevelPieces [i].transform.position = nextLevelPiece.endLocation.position;
				}
			}
		}
	}

	// get the other LevelPiece from the levelPieces array
	private LevelPiece FindOtherLevelPiece(LevelPiece currentLevelPiece) {
	
		for (int i = 0; i < activeLevelPieces.Length; i++) {
		
			if (activeLevelPieces [i] != currentLevelPiece) {
			
				return activeLevelPieces [i];
			}
		}
		return null;
	}

	// get random LevelPiece from levelPieces array
	private LevelPiece GetRandomLevelPiece() {
	
		LevelPiece returnPiece = null;
		while (returnPiece == null) {

			int randomIndex = Mathf.RoundToInt(Random.Range (0, levelPieces.Length));

			if (!IsActivePiece(levelPieces[randomIndex])) {
			
				returnPiece = levelPieces [randomIndex];
				Debug.Log ("Level Piece " + randomIndex);
			}
		}
		return returnPiece;
	}

	private bool IsActivePiece (LevelPiece piece) {
	
		for (int i = 0; i < activeLevelPieces.Length; i++) {
		
			if (piece == activeLevelPieces [i]) {
			
				return true;
			}
		}
		return false;
	}

	// resets level pieces to beginning positions, resets coins, makes sure they're
	// all active and runs start function again.
	public void ResetLevelPieces(bool isRunning) {

		isGameRunning = isRunning;
		startingLevelPiece.transform.position = startingLevelPiece.GetInitialLocation ();
		startingLevelPiece.gameObject.SetActive (true);
		idleLevelPiece.gameObject.SetActive (!isGameRunning);

		for (int i = 0; i < levelPieces.Length; i++) {
		
			levelPieces [i].transform.position = levelPieces [i].GetInitialLocation ();
			levelPieces [i].ResetAllChildrenCoins ();
		}
			
		if (isGameRunning) {
		
			SetGamePieces ();
		
		} else {
		
			SetIdlePieces ();
		}
	}
}
