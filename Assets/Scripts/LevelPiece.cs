using UnityEngine;
using System.Collections;

public class LevelPiece : MonoBehaviour {

	public Coin[] coins;

	// Initial location of the level piece
	private Vector3 initialLocation;

	// Awake() gets called before start, so we can set this up
	// before Start() is called in the LevelPieceManager class
	void Awake () {
		
		initialLocation = transform.position;
	}
	
	// get initial location of the level piece
	public Vector3 GetInitialLocation() {
	
		return initialLocation;
	}

	// reset all children coins for reuse
	public void ResetAllChildrenCoins() {
	
		for (int i = 0; i < coins.Length; i++) {
		
			coins [i].ActivateCoin (true);
		}
	}
}
