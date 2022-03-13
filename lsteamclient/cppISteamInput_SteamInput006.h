extern bool cppISteamInput_SteamInput006_Init(void *, bool);
extern bool cppISteamInput_SteamInput006_Shutdown(void *);
extern bool cppISteamInput_SteamInput006_SetInputActionManifestFilePath(void *, const char *);
extern void cppISteamInput_SteamInput006_RunFrame(void *, bool);
extern bool cppISteamInput_SteamInput006_BWaitForData(void *, bool, uint32);
extern bool cppISteamInput_SteamInput006_BNewDataAvailable(void *);
extern int cppISteamInput_SteamInput006_GetConnectedControllers(void *, InputHandle_t *);
extern void cppISteamInput_SteamInput006_EnableDeviceCallbacks(void *);
extern void cppISteamInput_SteamInput006_EnableActionEventCallbacks(void *, SteamInputActionEventCallbackPointer);
extern InputActionSetHandle_t cppISteamInput_SteamInput006_GetActionSetHandle(void *, const char *);
extern void cppISteamInput_SteamInput006_ActivateActionSet(void *, InputHandle_t, InputActionSetHandle_t);
extern InputActionSetHandle_t cppISteamInput_SteamInput006_GetCurrentActionSet(void *, InputHandle_t);
extern void cppISteamInput_SteamInput006_ActivateActionSetLayer(void *, InputHandle_t, InputActionSetHandle_t);
extern void cppISteamInput_SteamInput006_DeactivateActionSetLayer(void *, InputHandle_t, InputActionSetHandle_t);
extern void cppISteamInput_SteamInput006_DeactivateAllActionSetLayers(void *, InputHandle_t);
extern int cppISteamInput_SteamInput006_GetActiveActionSetLayers(void *, InputHandle_t, InputActionSetHandle_t *);
extern InputDigitalActionHandle_t cppISteamInput_SteamInput006_GetDigitalActionHandle(void *, const char *);
extern InputDigitalActionData_t cppISteamInput_SteamInput006_GetDigitalActionData(void *, InputHandle_t, InputDigitalActionHandle_t);
extern int cppISteamInput_SteamInput006_GetDigitalActionOrigins(void *, InputHandle_t, InputActionSetHandle_t, InputDigitalActionHandle_t, EInputActionOrigin *);
extern const char * cppISteamInput_SteamInput006_GetStringForDigitalActionName(void *, InputDigitalActionHandle_t);
extern InputAnalogActionHandle_t cppISteamInput_SteamInput006_GetAnalogActionHandle(void *, const char *);
extern InputAnalogActionData_t cppISteamInput_SteamInput006_GetAnalogActionData(void *, InputHandle_t, InputAnalogActionHandle_t);
extern int cppISteamInput_SteamInput006_GetAnalogActionOrigins(void *, InputHandle_t, InputActionSetHandle_t, InputAnalogActionHandle_t, EInputActionOrigin *);
extern const char * cppISteamInput_SteamInput006_GetGlyphPNGForActionOrigin(void *, EInputActionOrigin, ESteamInputGlyphSize, uint32);
extern const char * cppISteamInput_SteamInput006_GetGlyphSVGForActionOrigin(void *, EInputActionOrigin, uint32);
extern const char * cppISteamInput_SteamInput006_GetGlyphForActionOrigin_Legacy(void *, EInputActionOrigin);
extern const char * cppISteamInput_SteamInput006_GetStringForActionOrigin(void *, EInputActionOrigin);
extern const char * cppISteamInput_SteamInput006_GetStringForAnalogActionName(void *, InputAnalogActionHandle_t);
extern void cppISteamInput_SteamInput006_StopAnalogActionMomentum(void *, InputHandle_t, InputAnalogActionHandle_t);
extern InputMotionData_t cppISteamInput_SteamInput006_GetMotionData(void *, InputHandle_t);
extern void cppISteamInput_SteamInput006_TriggerVibration(void *, InputHandle_t, unsigned short, unsigned short);
extern void cppISteamInput_SteamInput006_TriggerVibrationExtended(void *, InputHandle_t, unsigned short, unsigned short, unsigned short, unsigned short);
extern void cppISteamInput_SteamInput006_TriggerSimpleHapticEvent(void *, InputHandle_t, EControllerHapticLocation, uint8, char, uint8, char);
extern void cppISteamInput_SteamInput006_SetLEDColor(void *, InputHandle_t, uint8, uint8, uint8, unsigned int);
extern void cppISteamInput_SteamInput006_Legacy_TriggerHapticPulse(void *, InputHandle_t, ESteamControllerPad, unsigned short);
extern void cppISteamInput_SteamInput006_Legacy_TriggerRepeatedHapticPulse(void *, InputHandle_t, ESteamControllerPad, unsigned short, unsigned short, unsigned short, unsigned int);
extern bool cppISteamInput_SteamInput006_ShowBindingPanel(void *, InputHandle_t);
extern ESteamInputType cppISteamInput_SteamInput006_GetInputTypeForHandle(void *, InputHandle_t);
extern InputHandle_t cppISteamInput_SteamInput006_GetControllerForGamepadIndex(void *, int);
extern int cppISteamInput_SteamInput006_GetGamepadIndexForController(void *, InputHandle_t);
extern const char * cppISteamInput_SteamInput006_GetStringForXboxOrigin(void *, EXboxOrigin);
extern const char * cppISteamInput_SteamInput006_GetGlyphForXboxOrigin(void *, EXboxOrigin);
extern EInputActionOrigin cppISteamInput_SteamInput006_GetActionOriginFromXboxOrigin(void *, InputHandle_t, EXboxOrigin);
extern EInputActionOrigin cppISteamInput_SteamInput006_TranslateActionOrigin(void *, ESteamInputType, EInputActionOrigin);
extern bool cppISteamInput_SteamInput006_GetDeviceBindingRevision(void *, InputHandle_t, int *, int *);
extern uint32 cppISteamInput_SteamInput006_GetRemotePlaySessionID(void *, InputHandle_t);
extern uint16 cppISteamInput_SteamInput006_GetSessionInputConfigurationSettings(void *);