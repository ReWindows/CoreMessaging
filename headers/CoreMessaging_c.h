// Flat C exports observed in CoreMessaging.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef COREMESSAGING_C_H
#define COREMESSAGING_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: CoreUICallSendVaList (ABI unverified)
// Export: CoreUICallComputeMaximumMessageSize (ABI unverified)
// Export: CoreUICallSend (ABI unverified)
// Export: CreateDispatcherQueueController (ABI unverified)
// Export: GetDispatcherQueueForCurrentThread (ABI unverified)
// Export: CoreUIOpenExisting (ABI unverified)
// Export: CoreUICreateEx (ABI unverified)
// Export: CoreUICallReceive (ABI unverified)
// Export: MsgRelease (ABI unverified)
// Export: MsgBufferShare (ABI unverified)
// Export: MsgStringCreateShared (ABI unverified)
// Export: MsgBlobCreateShared (ABI unverified)
// Export: DllCanUnloadNow (ABI unverified)
// Export: DllGetActivationFactory (ABI unverified)
// Export: MsgBlobCreateStack (ABI unverified)
// Export: MsgStringCreateStack (ABI unverified)
// Export: CoreUICallCreateEndpointHostWithSendPriority (ABI unverified)
// Export: CoreUICallCreateConversationHost (ABI unverified)
// Export: SvchostPushServiceGlobals (ABI unverified)
// Export: wil_StagingConfig_LogFeatureProcessUsage (ABI unverified)
// Export: CoreUICreate (ABI unverified)
// Export: CoreUICallCreateEndpointHost (ABI unverified)
// Export: CoreUIConfigureTestHost (ABI unverified)
// Export: CoreUIConfigureUserIntegration (ABI unverified)
// Export: CoreUIInitializeTestService (ABI unverified)
// Export: CoreUIUninitializeTestService (ABI unverified)
// Export: CoreUICreateAnonymousStream (ABI unverified)
// Export: CoreUIRouteToTestRegistrar (ABI unverified)
// Export: ServiceMain (ABI unverified)
// Export: CoreUICallGetAddressOfParameterInBuffer (ABI unverified)
// Export: CreateDispatcherQueueForCurrentThread (ABI unverified)
// Export: DllGetClassObject (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // COREMESSAGING_C_H
