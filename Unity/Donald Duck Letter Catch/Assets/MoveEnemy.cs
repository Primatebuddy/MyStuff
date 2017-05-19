using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveEnemy : MonoBehaviour {
    public bool timerFlag;
    public float timeInSeconds;
    public float moveTime;
    public Vector3 oldPosition;
    public Vector3 newPosition;
    public GameObject dropped;
    public bool isDropped;
    public bool isLerping;

    // Use this for initialization
    void Start () {
        timerFlag = true;
        timeInSeconds = 4f;
        moveTime = .07f;
        isDropped = false;
        isLerping = false;

    }
	
	// Update is called once per frame
	void Update () {
        if (transform.position == newPosition && isDropped == false)
        {
            dropped = (GameObject)Instantiate(Resources.Load("DroppedObject"), transform.position, transform.rotation);
            isDropped = true;
        }

        if (timerFlag)
        {
            oldPosition = transform.position;
            newPosition = new Vector3(Random.Range(-8, 8), 4, 0);

            timerFlag = false;
            isDropped = false;
            StartCoroutine(WaitSomeTime());
        }

        transform.position = Vector3.Lerp(transform.position, newPosition, moveTime);

    }

    IEnumerator WaitSomeTime()
    {
        yield return new WaitForSeconds(timeInSeconds);
        timerFlag = true;
    }
}
