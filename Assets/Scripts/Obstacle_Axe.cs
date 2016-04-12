using UnityEngine;
using System.Collections;

public class Obstacle_Axe : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D collider) {
	
		Character gameCharacter;

		if (collider.gameObject.name == "Character") {
		
			gameCharacter = collider.gameObject.GetComponent<Character> ();
			if (gameCharacter != null) {
			
				gameCharacter.KillCharacter ();
			}
		}
	}
}
