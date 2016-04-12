using UnityEngine;
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
}
