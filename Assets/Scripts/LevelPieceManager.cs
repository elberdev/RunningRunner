using UnityEngine;
using System.Collections;

public class LevelPieceManager : MonoBehaviour {

	public LevelPiece startingLevelPiece;

	// level pieces to cycle through
	public LevelPiece[] levelPieces;

	// how quickly the level pieces move
	public float levelPiecesMoveRate;

	// the currently active level pieces
	private LevelPiece[] activeLevelPieces;

	// Use this for initialization
	void Start () {
	
		activeLevelPieces = new LevelPiece[2];
		activeLevelPieces [0] = startingLevelPiece;
		activeLevelPieces [1] = GetNextAvailableLevelPiece ();

		// assign level piece position to the ending position of the previous one
		activeLevelPieces [1].transform.position = 
			startingLevelPiece.gameObject.transform.FindChild ("EndingLocation").position;
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
			if (activeLevelPieces [i].transform.FindChild("EndingLocation").transform.position.x < transform.position.x) {
			
				// and it's the beginning piece
				if (activeLevelPieces [i] == startingLevelPiece) {
				
					// remove it from our reusable pieces
					activeLevelPieces [i].gameObject.SetActive (false);
				}

				// reset used piece location to initial spawn location
				activeLevelPieces [i].transform.position = activeLevelPieces [i].GetInitialLocation ();
				// get a new level piece that is not currently in use
				activeLevelPieces [i] = GetNextAvailableLevelPiece ();
				// set its location to the end location of the other active piece
				activeLevelPieces [i].transform.position = 
					FindOtherLevelPiece (activeLevelPieces [i]).gameObject
						.transform.FindChild ("EndingLocation").position;
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
	private LevelPiece GetNextAvailableLevelPiece() {
	
		LevelPiece returnPiece = null;
		while (returnPiece == null) {
		
			for (int i = 0; i < levelPieces.Length; i++) {
			
				if (!IsActivePiece (levelPieces [i])) {
				
					returnPiece = levelPieces [i];
				}
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
}
