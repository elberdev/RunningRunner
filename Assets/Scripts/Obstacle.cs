using UnityEngine;
using System.Collections;

public class Obstacle : MonoBehaviour {

	public Transform pivot;

	// random range for rotation speed x will be min and y max
	public Vector2 rotationSpeedGap;

	// actual speed based on rotationSpeedGap
	private float rotationSpeed;

	// Use this for initialization
	void Start () {
	
		rotationSpeed = Random.Range (rotationSpeedGap.x, rotationSpeedGap.y);
	}
	
	// Update is called once per frame
	void Update () {
	
		// if game is not paused...
		if (Time.timeScale == 1) {
		
			// rotate axe in accordance with our variables. Vector3.forward is
			// shorthand for (0, 0, 1). Rotation here happens along the z axis
			pivot.transform.Rotate(Vector3.forward, rotationSpeed);
		}
	}
}
