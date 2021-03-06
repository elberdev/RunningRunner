﻿using UnityEngine;
// we use this for level generation
using UnityEditor;
using System.Collections;

// inherits from EditorWindow instead of MonoBehavior
public class SpriteTiler : EditorWindow {

	// grid settings
	public float gridXSlider = 1;
	public float gridYSlider = 1;

	// sprites for the ground and dirt
	public Sprite tileGroundSprite;
	public Sprite tileDirtSprite;

	// name of game object that holds our tile assets
	public string tileSpriteRootGameObjectName = "Tiled Object";

	// this makes our function appear as a menu item in the editor under
	// the heading "RunningRunner"
	[MenuItem("RunningRunner/Sprite Tile")]
	public static void OpenSpriteTileWindow() {
	
		// this opens a new editor window! Cool bean, huh?!
		EditorWindow.GetWindow<SpriteTiler> (true, "Sprite Tiler");
	}

	// called to render GUI frames and elements
	void OnGUI() {
	
		// setting for the game object that holds our tiled objects
		// creates a text label
		GUILayout.Label ("Tile Level Object Name", EditorStyles.boldLabel);
		// sets a textField with a default value that can be used for the user to 
		// change the value of the variable at any time.
		tileSpriteRootGameObjectName = GUILayout.TextField (tileSpriteRootGameObjectName, 25);

		// slider for x grid value (left to right)
		GUILayout.Label("X: " + gridXSlider, EditorStyles.boldLabel);
		gridXSlider = GUILayout.HorizontalScrollbar (gridXSlider, 1.0f, 0.0f, 30.0f);
		gridXSlider = (int)gridXSlider;

		// slider for y grid value (up to down)
		GUILayout.Label("Y: " + gridYSlider, EditorStyles.boldLabel);
		gridYSlider = GUILayout.HorizontalScrollbar (gridYSlider, 1.0f, 0.0f, 30.0f);
		gridYSlider = (int)gridYSlider;

		// file chosen to be our ground sprite
		GUILayout.Label("Sprite Ground File", EditorStyles.boldLabel);
		tileGroundSprite = EditorGUILayout.ObjectField (tileGroundSprite, typeof(Sprite), true) as Sprite;

		// file chose to be our dirt sprite
		GUILayout.Label("Sprite Dirt File", EditorStyles.boldLabel);
		tileDirtSprite = EditorGUILayout.ObjectField (tileDirtSprite, typeof(Sprite), true) as Sprite;

		// if button "create tiled" is pressed
		if (GUILayout.Button ("Create Tiled")) {
		
			// if the grid settings are both 0, send notification to user
			if (gridXSlider == 0 && gridYSlider == 0) {
			
				ShowNotification (new GUIContent (
					"Must have either x of y grid set to a value greater than 0"));
				return;
			}

			// if tile and dirt sprites exist
			if (tileDirtSprite != null && tileGroundSprite != null) {
			
				// if the sprite sizes don't match, show a notification to the user
				if (tileDirtSprite.bounds.size.x != tileGroundSprite.bounds.size.x ||
				    tileDirtSprite.bounds.size.y != tileGroundSprite.bounds.size.y) {
				
					ShowNotification (new GUIContent ("Both sprites must be of matching size"));
					return;
				}

				// create game object and tiled objects with user settings
				CreateSpriteTiledGameObject (gridXSlider, gridYSlider, 
					tileGroundSprite, tileDirtSprite, tileSpriteRootGameObjectName);
				
			} else {

				// if either dirt or ground sprite don't exist, send notification to user
				ShowNotification(new GUIContent("Must have Dirt and Ground sprites selected"));
				return;
			}
		}
	}

	public static void CreateSpriteTiledGameObject (float gridXSlider, float gridYSlider, 
		Sprite tileGroundSprite, Sprite tileDirtSprite, string tileSpriteRootGameObjectName) {
	
		// store the size of the sprite
		float spriteX = tileGroundSprite.bounds.size.x;
		float spriteY = tileGroundSprite.bounds.size.y;

		// create the root game object which will hold children
		GameObject rootObject = new GameObject();

		// set position in world to (0,0,0)
		rootObject.transform.position = new Vector3(0.0f, 0.0f, 0.0f);

		// name it based on our user settings
		rootObject.name = tileSpriteRootGameObjectName;

		// create starting values for a while loop
		int currentObjectCount = 0;
		int currentColumn = 0;
		int currentRow = 0;
		Vector3 currentLocation = new Vector3 (0.0f, 0.0f, 0.0f);

		// continue loop until all row and column cells have been filled
		while (currentRow < gridYSlider) {
		
			// create a child game object, set its parent to root, name it, 
			// and offset its location based on current location
			GameObject gridObject = new GameObject();
			gridObject.transform.SetParent (rootObject.transform);
			gridObject.name = rootObject.name + "_" + currentObjectCount;
			gridObject.transform.position = currentLocation;

			// give child gridObject a SpriteRenderer and set Sprite on current row
			SpriteRenderer gridRenderer = gridObject.AddComponent<SpriteRenderer>();
			gridRenderer.sprite = (currentRow == 0) ? tileGroundSprite : tileDirtSprite;

			// give the grid object a box collider. If we added it to gridRenderer
			// instead, it would be too big
			gridObject.AddComponent<BoxCollider2D>();

			// offset current location by the size of each cell (sprite) 
			// for the next gridObject 
			currentLocation.x += spriteX;

			// increment current column by one;
			currentColumn++;

			// if current column becomes greater than the x slider
			if (currentColumn >= gridXSlider) {
			
				// reset column, increment row, reset x location
				currentColumn = 0;
				currentRow++;
				currentLocation.x = 0;
				currentLocation.y -= spriteY;
			}

			// add to the current object count
			currentObjectCount++;
		}
	}
}
