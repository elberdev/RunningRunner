using UnityEngine;
using System.Collections;
using System;

public class PlayerInput : MonoBehaviour {

	// our custom struct for our own simplified touch controls
	public struct SimpleTouch {
	
		public Vector2 StartTouchLocation;
		public Vector2 CurrentTouchLocation;
		public DateTime StartTime;
		// we will use this to compare the default touch input from Unity with
		// our SimpleTouch
		public TouchPhase Phase;
	}

	// these will allow us to finetune the swipe in the editor
	public float SwipeTime;
	public float SwipeDistance;

	// our player
	public GameObject GameCharacter;

	// variables for us to link unity's raw touch input to our custom touch
	private SimpleTouch ActiveTouch;
	private Touch DeviceTouch;

	private void CalculateTouchInput(SimpleTouch CurrentTouch) {
	
		// the normalized property of Vector2 returns the same vector but with
		// a magnitude of 1. We only care about direction here.
		Vector2 touchDirection = 
			(CurrentTouch.CurrentTouchLocation - CurrentTouch.StartTouchLocation).normalized;
		
		// here we only get the distance, aka the magnitude. 
		float touchDistance = 
			(CurrentTouch.StartTouchLocation - CurrentTouch.CurrentTouchLocation).magnitude;

		// get time elapsed from beginning of touch til now
		TimeSpan timeGap = System.DateTime.Now - CurrentTouch.StartTime;
		double touchTimeSpan = timeGap.TotalSeconds;

		// if touch meets our requirements for what constitutes a swipe, we label it a swipe,
		// otherwise we consider it a tap
		string touchType = 
			(touchDistance > SwipeDistance && touchTimeSpan > SwipeTime) ? "Swipe" : "Tap";

		print (touchType);
	}

	// Use this for initialization
	void Start () {
	
		// we want to make sure there is no detected touch when the game first starts.
		// The default is TouchPhase.Began, unfortunately, so we gotta do this.
		ActiveTouch.Phase = TouchPhase.Canceled;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
