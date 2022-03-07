extern bool cppISteamInput_SteamInput001_Init(void *);
extern bool cppISteamInput_SteamInput001_Shutdown(void *);
extern void cppISteamInput_SteamInput001_RunFrame(void *);
extern int cppISteamInput_SteamInput001_GetConnectedControllers(void *, InputHandle_t *);
extern InputActionSetHandle_t cppISteamInput_SteamInput001_GetActionSetHandle(void *, const char *);
extern void cppISteamInput_SteamInput001_ActivateActionSet(void *, InputHandle_t, InputActionSetHandle_t);
extern InputActionSetHandle_t cppISteamInput_SteamInput001_GetCurrentActionSet(void *, InputHandle_t);
extern void cppISteamInput_SteamInput001_ActivateActionSetLayer(void *, InputHandle_t, InputActionSetHandle_t);
extern void cppISteamInput_SteamInput001_DeactivateActionSetLayer(void *, InputHandle_t, InputActionSetHandle_t);
extern void cppISteamInput_SteamInput001_DeactivateAllActionSetLayers(void *, InputHandle_t);
extern int cppISteamInput_SteamInput001_GetActiveActionSetLayers(void *, InputHandle_t, InputActionSetHandle_t *);
extern InputDigitalActionHandle_t cppISteamInput_SteamInput001_GetDigitalActionHandle(void *, const char *);
extern InputDigitalActionData_t cppISteamInput_SteamInput001_GetDigitalActionData(void *, InputHandle_t, InputDigitalActionHandle_t);
extern int cppISteamInput_SteamInput001_GetDigitalActionOrigins(void *, InputHandle_t, InputActionSetHandle_t, InputDigitalActionHandle_t, EInputActionOrigin *);
extern InputAnalogActionHandle_t cppISteamInput_SteamInput001_GetAnalogActionHandle(void *, const char *);
extern InputAnalogActionData_t cppISteamInput_SteamInput001_GetAnalogActionData(void *, InputHandle_t, InputAnalogActionHandle_t);
extern int cppISteamInput_SteamInput001_GetAnalogActionOrigins(void *, InputHandle_t, InputActionSetHandle_t, InputAnalogActionHandle_t, EInputActionOrigin *);
extern const char * cppISteamInput_SteamInput001_GetGlyphForActionOrigin(void *, EInputActionOrigin);
extern const char * cppISteamInput_SteamInput001_GetStringForActionOrigin(void *, EInputActionOrigin);
extern void cppISteamInput_SteamInput001_StopAnalogActionMomentum(void *, InputHandle_t, InputAnalogActionHandle_t);
extern InputMotionData_t cppISteamInput_SteamInput001_GetMotionData(void *, InputHandle_t);
extern void cppISteamInput_SteamInput001_TriggerVibration(void *, InputHandle_t, unsigned short, unsigned short);
extern void cppISteamInput_SteamInput001_SetLEDColor(void *, InputHandle_t, uint8, uint8, uint8, unsigned int);
extern void cppISteamInput_SteamInput001_TriggerHapticPulse(void *, InputHandle_t, ESteamControllerPad, unsigned short);
extern void cppISteamInput_SteamInput001_TriggerRepeatedHapticPulse(void *, InputHandle_t, ESteamControllerPad, unsigned short, unsigned short, unsigned short, unsigned int);
extern bool cppISteamInput_SteamInput001_ShowBindingPanel(void *, InputHandle_t);
extern ESteamInputType cppISteamInput_SteamInput001_GetInputTypeForHandle(void *, InputHandle_t);
extern InputHandle_t cppISteamInput_SteamInput001_GetControllerForGamepadIndex(void *, int);
extern int cppISteamInput_SteamInput001_GetGamepadIndexForController(void *, InputHandle_t);
extern const char * cppISteamInput_SteamInput001_GetStringForXboxOrigin(void *, EXboxOrigin);
extern const char * cppISteamInput_SteamInput001_GetGlyphForXboxOrigin(void *, EXboxOrigin);
extern EInputActionOrigin cppISteamInput_SteamInput001_GetActionOriginFromXboxOrigin(void *, InputHandle_t, EXboxOrigin);
extern EInputActionOrigin cppISteamInput_SteamInput001_TranslateActionOrigin(void *, ESteamInputType, EInputActionOrigin);
extern bool cppISteamInput_SteamInput001_GetDeviceBindingRevision(void *, InputHandle_t, int *, int *);
extern uint32 cppISteamInput_SteamInput001_GetRemotePlaySessionID(void *, InputHandle_t);
