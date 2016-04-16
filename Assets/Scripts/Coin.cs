using UnityEngine;
using System.Collections;

public class Coin : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}

	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D collider) {

		Character gameChar;
		if (collider.gameObject.name == "Character") {
		
			gameChar = collider.GetComponent<Character> ();
			if (gameChar != null) {
			
				if (!gameChar.isDead) {
				
					gameChar.coinCount += 1;

					// functionally, print() and Debug.Log() are identical, as
					// print is simply a wrapper around Debug.Log(). print here 
					// is a MonoBehavior function, so if your class does not inherit from
					// MonoBehavior you have to use Debug.Log since that belongs to 
					// UnityEngine.
					print (gameChar.coinCount);
					ActivateCoin (false);
				}
			}
		}
	}

	// disable or enable coin so we can recycle them as we recycle the 
	// level pieces
	public void ActivateCoin(bool bActivate) {
	
		SpriteRenderer renderer;
		BoxCollider2D collider;

		renderer = gameObject.GetComponent<SpriteRenderer> ();
		collider = gameObject.GetComponent<BoxCollider2D> ();

		renderer.enabled = bActivate;
		collider.enabled = bActivate;
	}
}
