using UnityEngine;
using System.Collections;

public class LevelPieceManager : MonoBehaviour {

	public LevelPiece startingLevelPiece;

	// level pieces to rotate
	public LevelPiece[] levelPieces;

	// how quickly the level pieces move
	public float levelPiecesMoveRate;

	// the currently active level pieces
	private LevelPiece[] activeLevelPieces;

	// Use this for initialization
	void Start () {
	
		activeLevelPieces = new LevelPiece[2];
		activeLevelPieces [0] = startingLevelPiece;
		activeLevelPieces [1] = GetRandomLevelPiece ();

		// assign level piece position to the ending position of the previous one
		activeLevelPieces [1].transform.position = 
			startingLevelPiece.gameObject.transform.FindChild ("EndLocation").position;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	private LevelPiece GetRandomLevelPiece() {
	
		
	}
}
