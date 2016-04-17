using UnityEngine;
using System.Collections;

public class GameInfo : MonoBehaviour {

	// Use this for initialization
	void Awake () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void PauseGame() {
	
		Time.timeScale = (Time.timeScale == 1) ? 0 : 1;
	}
}
