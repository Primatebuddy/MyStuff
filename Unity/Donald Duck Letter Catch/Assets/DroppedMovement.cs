using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DroppedMovement : MonoBehaviour {
    public float fallTime;
    public Vector3 newPosition;
    public int Count;

	// Use this for initialization
	void Start () {
        fallTime = .03f;
        Count = 0;
		
	}
	
	// Update is called once per frame
	void Update () {
        newPosition = new Vector3(transform.position.x, -4, 0);
        transform.position = Vector3.MoveTowards(transform.position, newPosition, fallTime);
        if(transform.position == newPosition)
        {
            Destroy(gameObject);
            Count++;
        }
        
	}
}