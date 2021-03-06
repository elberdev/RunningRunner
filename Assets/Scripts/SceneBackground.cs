﻿using UnityEngine;
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
	public BackgroundElement[] sceneBackgroundElements;

	// Use this for initialization
	void Start () {
	
		SpriteRenderer backgroundRenderer;
		GameObject backgroundObject;

		// for each scene background element set in inspector
		for (int i = 0; i < sceneBackgroundElements.Length; i++) {
		
			// create new game object
			backgroundObject = new GameObject ();

			// parent it, set its position and scale according to inspector settings
			backgroundObject.transform.SetParent(transform);
			backgroundObject.transform.position = sceneBackgroundElements [i].spriteLocation;
			backgroundObject.transform.localScale = sceneBackgroundElements [i].spriteScale;

			// keep reference to created new object and its start location
			sceneBackgroundElements[i].childObject = backgroundObject;
			sceneBackgroundElements[i].objectStartLocation = backgroundObject.transform.position;

			// create renderer and set sprite
			backgroundRenderer = backgroundObject.AddComponent<SpriteRenderer>();
			backgroundRenderer.sprite = sceneBackgroundElements [i].backgroundSprite;
		}
	}
	
	// Update is called once per frame
	void Update () {
	
		for (int i = 0; i < sceneBackgroundElements.Length; i++) {
		
			// if the background element is supposed to move
			if (sceneBackgroundElements [i].movementSpeed > 0) {
			
				// get current location and offset it by movement speed based on bMoveBackwards
				Vector3 newSceneBackgroundLocation = sceneBackgroundElements[i].childObject.transform.position;
				newSceneBackgroundLocation.x += (sceneBackgroundElements [i].bMoveBackwards) 
					? -sceneBackgroundElements [i].movementSpeed * Time.deltaTime
					: sceneBackgroundElements [i].movementSpeed * Time.deltaTime;

				// set location based on movement speed offset
				sceneBackgroundElements[i].childObject.transform.position = newSceneBackgroundLocation;

				// if child object has moved further than the move distance have it move
				// the other way
				if (Vector3.Distance (sceneBackgroundElements [i].childObject.transform.position, 
					sceneBackgroundElements [i].objectStartLocation) >= sceneBackgroundElements [i].movementDistance) 
				{
					// change the direction of the scene background element
					sceneBackgroundElements[i].bMoveBackwards = !sceneBackgroundElements[i].bMoveBackwards;
				}

			}
		}
	}
}
