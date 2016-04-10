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
	public int CoinCount;

	[System.NonSerialized]
	public Vector3 RestartLocation;

	private bool isFadeOut;

	SpriteRenderer GameCharacterSprite;

	Rigidbody2D CharacterRigidbody;

	Animator CharacterAnimator;

	// Use this for initialization
	void Start () {
	
		RestartLocation = gameObject.transform.position;
		GameCharacterSprite = gameObject.GetComponent<SpriteRenderer> ();
		CharacterRigidbody = gameObject.GetComponent<Rigidbody2D> ();
		CharacterAnimator = gameObject.GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	// process input
	public void ReceiveInput(float Distance, Vector2 Direction) {

		// make sure we have a reference to the character before attempting anything
		if (CharacterRigidbody != null && CharacterAnimator != null) {
		
			// reset x to 0. we really only care about the y here.
			Direction.x = 0.0f;

			// jump
			if (Direction.y > 0.0f && !isJumping) {
			
				// Mathf.Clamp ensures our distance never goes below the min or above
				// the max values.
				CharacterRigidbody.AddForce (Direction * Mathf.Clamp (Distance, 0, 200));
				// trigger jumpin animation
				CharacterAnimator.SetBool ("Jump", true);
				// set our condition check to prevent double, triple etc. jumping
				isJumping = true;
			
			// bring character down faster. If character is not in ther air, there is no harm
			// because the physics of the ground and his rigidbody will keep him from
			// falling off the board.
			} else if (Direction.y < 0.0f) {

				// Notice the distance for down movement can be slightly higher than for jumping
				CharacterRigidbody.AddForce (Direction * Mathf.Clamp (Distance, 0, 250));
			}
		}
	}

	// called when the character collides with another object, for now only the ground.
	void OnCollisionEnter2D(Collision2D Col) {
	
		if (CharacterAnimator != null) {

			// make sure running animation is triggered
			CharacterAnimator.SetBool ("Jump", false);
			// and we reset our condition check to receive the jump command
			isJumping = false;
		}
	}
}
