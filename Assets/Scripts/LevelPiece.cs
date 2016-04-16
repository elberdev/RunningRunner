using UnityEngine;
using System.Collections;

public class LevelPiece : MonoBehaviour {

	// Initial location of the level piece
	private Vector3 initialLocation;

	// Use this for initialization
	void Awake () {
		
		initialLocation = transform.position;
	}
	
	// get initial location of the level piece
	public Vector3 GetInitialLocation() {
	
		return initialLocation;
	}
}
