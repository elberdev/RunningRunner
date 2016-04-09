using UnityEngine;
using System.Collections;
using System;

public class NewBehaviourScript : MonoBehaviour {

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

	// variables for us to link unity's raw touch input to our custom touch
	private SimpleTouch ActiveTouch;
	private Touch DeviceTouch;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
