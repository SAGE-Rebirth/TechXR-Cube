using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using TechXR.Core.Sense;

namespace TechXR.Core.Editor
{
    [CustomEditor(typeof(SenseController))]
    public class SenseControllerEditor : UnityEditor.Editor
    {
        #region PRIVATE FIELDS
        private SenseController senseController;
        #endregion // PRIVATE FIELDS


        private void OnEnable()
        {
            senseController = (SenseController)target;
        }
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();

            senseController.Teleport = EditorGUILayout.Toggle("Teleport", senseController.Teleport);

            // If the teleport option is checked, show teleport Button Field for Button selection
            if (senseController.Teleport)
            {
                senseController.TeleportButton = (SenseController.XRButton)EditorGUILayout.EnumPopup("Teleport Button ", senseController.TeleportButton);
            }
        }
    }
}
