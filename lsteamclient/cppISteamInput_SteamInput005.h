extern bool cppISteamInput_SteamInput005_Init(void *, bool);
extern bool cppISteamInput_SteamInput005_Shutdown(void *);
extern bool cppISteamInput_SteamInput005_SetInputActionManifestFilePath(void *, const char *);
extern void cppISteamInput_SteamInput005_RunFrame(void *, bool);
extern bool cppISteamInput_SteamInput005_BWaitForData(void *, bool, uint32);
extern bool cppISteamInput_SteamInput005_BNewDataAvailable(void *);
extern int cppISteamInput_SteamInput005_GetConnectedControllers(void *, InputHandle_t *);
extern void cppISteamInput_SteamInput005_EnableDeviceCallbacks(void *);
extern void cppISteamInput_SteamInput005_EnableActionEventCallbacks(void *, SteamInputActionEventCallbackPointer);
extern InputActionSetHandle_t cppISteamInput_SteamInput005_GetActionSetHandle(void *, const char *);
extern void cppISteamInput_SteamInput005_ActivateActionSet(void *, InputHandle_t, InputActionSetHandle_t);
extern InputActionSetHandle_t cppISteamInput_SteamInput005_GetCurrentActionSet(void *, InputHandle_t);
extern void cppISteamInput_SteamInput005_ActivateActionSetLayer(void *, InputHandle_t, InputActionSetHandle_t);
extern void cppISteamInput_SteamInput005_DeactivateActionSetLayer(void *, InputHandle_t, InputActionSetHandle_t);
extern void cppISteamInput_SteamInput005_DeactivateAllActionSetLayers(void *, InputHandle_t);
extern int cppISteamInput_SteamInput005_GetActiveActionSetLayers(void *, InputHandle_t, InputActionSetHandle_t *);
extern InputDigitalActionHandle_t cppISteamInput_SteamInput005_GetDigitalActionHandle(void *, const char *);
extern InputDigitalActionData_t cppISteamInput_SteamInput005_GetDigitalActionData(void *, InputHandle_t, InputDigitalActionHandle_t);
extern int cppISteamInput_SteamInput005_GetDigitalActionOrigins(void *, InputHandle_t, InputActionSetHandle_t, InputDigitalActionHandle_t, EInputActionOrigin *);
extern const char * cppISteamInput_SteamInput005_GetStringForDigitalActionName(void *, InputDigitalActionHandle_t);
extern InputAnalogActionHandle_t cppISteamInput_SteamInput005_GetAnalogActionHandle(void *, const char *);
extern InputAnalogActionData_t cppISteamInput_SteamInput005_GetAnalogActionData(void *, InputHandle_t, InputAnalogActionHandle_t);
extern int cppISteamInput_SteamInput005_GetAnalogActionOrigins(void *, InputHandle_t, InputActionSetHandle_t, InputAnalogActionHandle_t, EInputActionOrigin *);
extern const char * cppISteamInput_SteamInput005_GetGlyphPNGForActionOrigin(void *, EInputActionOrigin, ESteamInputGlyphSize, uint32);
extern const char * cppISteamInput_SteamInput005_GetGlyphSVGForActionOrigin(void *, EInputActionOrigin, uint32);
extern const char * cppISteamInput_SteamInput005_GetGlyphForActionOrigin_Legacy(void *, EInputActionOrigin);
extern const char * cppISteamInput_SteamInput005_GetStringForActionOrigin(void *, EInputActionOrigin);
extern const char * cppISteamInput_SteamInput005_GetStringForAnalogActionName(void *, InputAnalogActionHandle_t);
extern void cppISteamInput_SteamInput005_StopAnalogActionMomentum(void *, InputHandle_t, InputAnalogActionHandle_t);
extern InputMotionData_t cppISteamInput_SteamInput005_GetMotionData(void *, InputHandle_t);
extern void cppISteamInput_SteamInput005_TriggerVibration(void *, InputHandle_t, unsigned short, unsigned short);
extern void cppISteamInput_SteamInput005_TriggerVibrationExtended(void *, InputHandle_t, unsigned short, unsigned short, unsigned short, unsigned short);
extern void cppISteamInput_SteamInput005_TriggerSimpleHapticEvent(void *, InputHandle_t, EControllerHapticLocation, uint8, char, uint8, char);
extern void cppISteamInput_SteamInput005_SetLEDColor(void *, InputHandle_t, uint8, uint8, uint8, unsigned int);
extern void cppISteamInput_SteamInput005_Legacy_TriggerHapticPulse(void *, InputHandle_t, ESteamControllerPad, unsigned short);
extern void cppISteamInput_SteamInput005_Legacy_TriggerRepeatedHapticPulse(void *, InputHandle_t, ESteamControllerPad, unsigned short, unsigned short, unsigned short, unsigned int);
extern bool cppISteamInput_SteamInput005_ShowBindingPanel(void *, InputHandle_t);
extern ESteamInputType cppISteamInput_SteamInput005_GetInputTypeForHandle(void *, InputHandle_t);
extern InputHandle_t cppISteamInput_SteamInput005_GetControllerForGamepadIndex(void *, int);
extern int cppISteamInput_SteamInput005_GetGamepadIndexForController(void *, InputHandle_t);
extern const char * cppISteamInput_SteamInput005_GetStringForXboxOrigin(void *, EXboxOrigin);
extern const char * cppISteamInput_SteamInput005_GetGlyphForXboxOrigin(void *, EXboxOrigin);
extern EInputActionOrigin cppISteamInput_SteamInput005_GetActionOriginFromXboxOrigin(void *, InputHandle_t, EXboxOrigin);
extern EInputActionOrigin cppISteamInput_SteamInput005_TranslateActionOrigin(void *, ESteamInputType, EInputActionOrigin);
extern bool cppISteamInput_SteamInput005_GetDeviceBindingRevision(void *, InputHandle_t, int *, int *);
extern uint32 cppISteamInput_SteamInput005_GetRemotePlaySessionID(void *, InputHandle_t);
extern uint16 cppISteamInput_SteamInput005_GetSessionInputConfigurationSettings(void *);
