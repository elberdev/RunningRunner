using UnityEngine;
using System.Collections;
using System;

public class PlayerInput : MonoBehaviour {

	// our custom struct for our own simplified touch controls
	public struct SimpleTouch {
	
		public Vector2 startTouchLocation;
		public Vector2 currentTouchLocation;
		public DateTime startTime;
		// we will use this to compare the default touch input from Unity with
		// our SimpleTouch
		public TouchPhase phase;
	}

	// these will allow us to finetune the swipe in the editor
	public float swipeTime;
	public float swipeDistance;

	// our player
	public Character gameCharacter;

	// variables for us to link unity's raw touch input to our custom touch
	private SimpleTouch activeTouch;
	private Touch deviceTouch;

	private void CalculateTouchInput(SimpleTouch currentTouch) {
	
		// the normalized property of Vector2 returns the same vector but with
		// a magnitude of 1. We only care about direction here.
		Vector2 touchDirection = 
			(currentTouch.currentTouchLocation - currentTouch.startTouchLocation).normalized;
		
		// here we only get the distance, aka the magnitude. 
		float touchDistance = 
			(currentTouch.startTouchLocation - currentTouch.currentTouchLocation).magnitude;

		// get time elapsed from beginning of touch til now
		TimeSpan timeGap = System.DateTime.Now - currentTouch.startTime;
		double touchTimeSpan = timeGap.TotalSeconds;

		// if touch meets our requirements for what constitutes a swipe, we label it a swipe,
		// otherwise we consider it a tap
		string touchType = 
			(touchDistance > swipeDistance && touchTimeSpan > swipeTime) ? "Swipe" : "Tap";

		print (touchType);

		if (gameCharacter != null) {
		
			if (!gameCharacter.isDead) {
			
				gameCharacter.ReceiveInput (touchDistance, touchDirection);
			}
		}
	}

	// Use this for initialization
	void Start () {
	
		// we want to make sure there is no detected touch when the game first starts.
		// The default is TouchPhase.Began, unfortunately, so we gotta do this.
		activeTouch.phase = TouchPhase.Canceled;
	}
	
	// Update is called once per frame
	void Update () {

		// editor input logic for mouse
		if (Application.isEditor) {

			// if left mouse button (left click) is pressed
			if (Input.GetMouseButton (0)) {
			
				// register a beginning touch
				if (activeTouch.phase == TouchPhase.Canceled) {
				
					activeTouch.currentTouchLocation = Input.mousePosition;
					activeTouch.startTouchLocation = Input.mousePosition;
					activeTouch.startTime = System.DateTime.Now;
					activeTouch.phase = TouchPhase.Began;
				
					// or update the current location as the mouse moves 
				} else {

					activeTouch.currentTouchLocation = Input.mousePosition;
				}

			// if left click is not activated
			} else {

				// and there is an outstanding touch event
				if (activeTouch.phase == TouchPhase.Began) {

					// end the touch event and calculate the result
					CalculateTouchInput (activeTouch);
					activeTouch.phase = TouchPhase.Canceled;
				}
			}

		// input logic for touch device
		} else {

			// if we have any touches...
			if (Input.touches.Length > 0) {
			
				// get the main touch
				deviceTouch = Input.GetTouch (0);

				// if we are not in the middle of a touch gesture
				if (activeTouch.phase == TouchPhase.Canceled) {
				
					// set the initial conditions
					activeTouch.phase = deviceTouch.phase;
					activeTouch.startTime = System.DateTime.Now;
					activeTouch.startTouchLocation = deviceTouch.position;
					activeTouch.currentTouchLocation = deviceTouch.position;
				
				} else {

					// otherwise just update the location
					activeTouch.currentTouchLocation = deviceTouch.position;
				}
			
				// if there are no touches
			} else {

				// but the last touch still hasn't been calculated
				if (activeTouch.phase != TouchPhase.Canceled) {

					// perform the calculations for the touch and reset status
					CalculateTouchInput (activeTouch);
					activeTouch.phase = TouchPhase.Canceled;
				}
			}
		}
	}
}
