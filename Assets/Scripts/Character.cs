using UnityEngine;
using System.Collections;

public class Character : MonoBehaviour {

	// parameters with [System.NonSerialized] will not show up in the list
	// of parameters in the editor and will not be serialized.

	[System.NonSerialized]
	public bool isJumping;

	[System.NonSerialized]
	public bool isDead;

	[System.NonSerialized]
	public int coinCount;

	[System.NonSerialized]
	public Vector3 restartLocation;

	private bool isFadeOut;

	SpriteRenderer gameCharacterSprite;

	Rigidbody2D characterRigidbody;

	Animator characterAnimator;

	// Use this for initialization
	void Start () {
	
		restartLocation = gameObject.transform.position;
		gameCharacterSprite = gameObject.GetComponent<SpriteRenderer> ();
		characterRigidbody = gameObject.GetComponent<Rigidbody2D> ();
		characterAnimator = gameObject.GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {

		// fade character frame by frame if isFadeOut is triggered
		if (isFadeOut) {
		
			if (gameCharacterSprite != null) {
			
				float currentAlpha = gameCharacterSprite.color.a;
				currentAlpha -= 0.0085f;

				if (currentAlpha < 0.01f) {
				
					currentAlpha = 0.0f;
				}

				// black of differing decreasing alphas
				Color newColorAlpha = new Color (1.0f, 1.0f, 1.0f, currentAlpha);
				// apply to character sprite
				gameCharacterSprite.color = newColorAlpha;
			}
		}
	}

	// process input
	public void ReceiveInput(float distance, Vector2 direction) {

		// make sure we have a reference to the character before attempting anything
		if (characterRigidbody != null && characterAnimator != null) {
		
			// reset x to 0. we really only care about the y here.
			direction.x = 0.0f;

			// jump
			if (direction.y > 0.0f && !isJumping) {
			
				// Mathf.Clamp ensures our distance never goes below the min or above
				// the max values.
				characterRigidbody.AddForce (direction * Mathf.Clamp (distance, 0, 200));
				// trigger jumpin animation
				characterAnimator.SetBool ("Jump", true);
				// set our condition check to prevent double, triple etc. jumping
				isJumping = true;
			
			// bring character down faster. If character is not in ther air, there is no harm
			// because the physics of the ground and his rigidbody will keep him from
			// falling off the board.
			} else if (direction.y < 0.0f) {

				// Notice the distance for down movement can be slightly higher than for jumping
				characterRigidbody.AddForce (direction * Mathf.Clamp (distance, 0, 250));
			}
		}
	}

	// called when the character collides with another object, for now only the ground.
	void OnCollisionEnter2D(Collision2D Col) {
	
		if (characterAnimator != null) {

			// reset animation to running
			characterAnimator.SetBool ("Jump", false);
			// reset physics to be able to receive jump swipes
			isJumping = false;
		}
	}

	// kill the character
	public void KillCharacter() {
	
		if (!isDead) {
		
			if (characterRigidbody != null) {
			
				// will apply random force with randomized x value between -512 and 512, and 512 for y.
				// Random.Range considers both values inclusive
				characterRigidbody.AddForce (new Vector2 (Random.Range (-1, 1), 1) * 512);
				isDead = true;
				// the consequences of this will be handled in Update() function
				isFadeOut = true;
			}
		}
	}

	public void ReviveCharacter() {
	
		Color resetColorAlpha = new Color (1.0f, 1.0f, 1.0f, 1.0f);

		// reset status values and character position
		gameObject.transform.position = restartLocation;
		isDead = false;
		isFadeOut = false;

		if (gameCharacterSprite != null) {
		
			// reset color of sprite renderer
			gameCharacterSprite.color = resetColorAlpha;
		}
	}
}
