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

	public void ReceiveInput(float touchDistance, Vector2 touchDirection) {
	}
}
