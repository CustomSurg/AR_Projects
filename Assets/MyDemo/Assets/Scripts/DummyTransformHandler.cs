using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DummyTransformHandler : MonoBehaviour
{
    private Vector3 backupPosition, backupEulerAngles, backupScale;

    public void GoToZero()
    {
        // sets the position of the dummy object to 0 and resizes it, creates a backup of old position
        backupPosition = transform.localPosition;
        backupEulerAngles = transform.localEulerAngles;
        backupScale = transform.localScale;

        transform.localPosition = new Vector3(0f, 0f, 0f);
        transform.localEulerAngles = new Vector3(0f, 0f, 0f);
        transform.localScale = new Vector3(1f, 1f, 1f);
    }

    public void RestoreBackup()
    {
        transform.localPosition = backupPosition;
        transform.localEulerAngles = backupEulerAngles;
        transform.localScale = backupScale;
    }

    public void ChangeTransform(Vector3 newPosition, Vector3 newEulerAngles, Vector3 newScale)
    {
        // set a new position for the dummy object
        transform.localPosition = newPosition;
        transform.localEulerAngles = newEulerAngles;
        transform.localScale = newScale;
    }
}
