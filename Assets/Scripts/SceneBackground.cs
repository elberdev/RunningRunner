using UnityEngine;
using System.Collections;

public class SceneBackground : MonoBehaviour {

	// sctruct to hold data for background element
	// this line allows us to edit the struct's internal variables
	// in the editor
	[System.Serializable]
	public struct BackgroundElement {
	
		public Sprite backgroundSprite;
		public float movementSpeed;
		public float movementDistance;
		public Vector3 spriteLocation;
		public Vector3 spriteScale;

		[System.NonSerialized]
		public Vector3 objectStartLocation;
		[System.NonSerialized]
		public GameObject childObject;
		[System.NonSerialized]
		public bool bMoveBackwards;
	};

	// array to store backgrounds for scene
	public BackgroundElement[] sceneBackgroundElement;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
