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
	
		SpriteRenderer backgroundRenderer;
		GameObject backgroundObject;

		// for each scene background element set in inspector
		for (int i = 0; i < sceneBackgroundElement.Length; i++) {
		
			// create new game object
			backgroundObject = new GameObject ();

			// parent it, set its position and scale according to inspector settings
			backgroundObject.transform.SetParent(transform);
			backgroundObject.transform.position = sceneBackgroundElement [i].spriteLocation;
			backgroundObject.transform.localScale = sceneBackgroundElement [i].spriteScale;

			// keep reference to created new object and its start location
			sceneBackgroundElement[i].childObject = backgroundObject;
			sceneBackgroundElement[i].objectStartLocation = backgroundObject.transform.position;

			// create renderer and set sprite
			backgroundRenderer = backgroundObject.AddComponent<SpriteRenderer>();
			backgroundRenderer.sprite = sceneBackgroundElement [i].backgroundSprite;
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
