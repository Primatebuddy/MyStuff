using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour {
    public SpriteRenderer PlayerSpriteRenderer;
    float MovementAxis;
    public Sprite sp;
    public Animation an;

	// Use this for initialization
	void Start () {
        PlayerSpriteRenderer = gameObject.GetComponent<SpriteRenderer>();
        sp = gameObject.GetComponent<Sprite>();
        an = gameObject.GetComponent<Animation>();
	}
	
	// Update is called once per frame
	void Update () {
        MovementAxis = Input.GetAxis("Horizontal") * .06f;

        if(MovementAxis < 0.00f)
            PlayerSpriteRenderer.flipX = true;
        

        if(MovementAxis > 0.0f)
            PlayerSpriteRenderer.flipX = false;

        transform.Translate(MovementAxis, 0, 0);

       
    }

    void OnGUI()
    {
        GUI.Label(new Rect(0, 0, Screen.width, Screen.height), an.GetClipCount());
    }
}
