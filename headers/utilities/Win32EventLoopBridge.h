#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 42 member(s).
namespace Microsoft::CoreUI::Dispatch {
class Win32EventLoopBridge {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbandonEventLoopIfExternalWorkHasPrecedence@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NW4InternalPriority@234@H@Z
    virtual bool AbandonEventLoopIfExternalWorkHasPrecedence(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnAfterWait@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnAfterWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_PrepareToWait@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NU?$Ref@UTimeSpan@System@@@CFlat@@@Z
    virtual bool Callback_PrepareToWait(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_Run@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXW4RunMode@234@@Z
    virtual void Callback_Run(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_TryHandleExternalCompletion@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NU?$Ref@UWakeRecord@Dispatch@CoreUI@Microsoft@@@CFlat@@@Z
    virtual bool Callback_TryHandleExternalCompletion(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_Wait@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXPEAUWin32Handle@Support@34@IIW4WaitFlags@34@U?$Ref@UWakeRecord@Dispatch@CoreUI@Microsoft@@@CFlat@@@Z
    virtual void Callback_Wait(::Microsoft::CoreUI::Support::Win32Handle *, unsigned int, unsigned int, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForUserIntegration@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void CheckForUserIntegration(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VWin32EventLoopBridge@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVEventLoop@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRegisteredWait@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA?AV?$SmartPtr@VRegisteredWait@Dispatch@CoreUI@Microsoft@@@CFlat@@UWin32Handle@Support@34@PEAVWaitCallback@234@_N@Z
    virtual WindissectOpaque CreateRegisteredWait(::Microsoft::CoreUI::Support::Win32Handle, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrainSignaledWaits@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void DrainSignaledWaits();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitAtQuitPriority@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ExitAtQuitPriority();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalWorkHasPrecedence@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NW4InternalPriority@234@H@Z
    virtual bool ExternalWorkHasPrecedence(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinallyOnAfterWait@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void FinallyOnAfterWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeClass@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@SAX_N@Z
    static void InitializeClass(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterDispatchLoop@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool OnEnterDispatchLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExit@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void OnExit(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExitedForFlag@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnExitedForFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIgnoredEnqueuedExit@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnIgnoredEnqueuedExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemSelectedForDispatch@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXW4InternalPriority@234@@Z
    virtual void OnItemSelectedForDispatch(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRegisterDispatchCallback@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXW4ThreadPriority@234@@Z
    virtual void OnRegisterDispatchCallback(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResumeDispatch@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnResumeDispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSessionFullyInitialized@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void OnSessionFullyInitialized(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSessionResurrected@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void OnSessionResurrected(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnregisterDispatchCallback@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnUnregisterDispatchCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeekForNewEvents@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool PeekForNewEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDeferYieldCheck@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool QueryDeferYieldCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryPendingItems@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool QueryPendingItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThreadCompletionHandler@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXUWin32Handle@Support@34@PEAVCompletionHandlerCallback@34@@Z
    virtual void RegisterThreadCompletionHandler(::Microsoft::CoreUI::Support::Win32Handle, ::Microsoft::CoreUI::CompletionHandlerCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWaitCycle@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NPEAVRegisteredWait@234@@Z
    virtual bool StartWaitCycle(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WakeDispatchThreadIfNecessary@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void WakeDispatchThreadIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitializingUserAdapterForRunUntilExit@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool get_InitializingUserAdapterForRunUntilExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsIntegratingWithUser@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsIntegratingWithUser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Waits@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA?AV?$SmartPtr@VWaitCollection@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    virtual WindissectOpaque get_Waits();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~Win32EventLoopBridge();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_DoWait@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@AEAA?AW4MessagingResults@Messaging@34@IPEAUWin32Handle@Support@34@IW4WaitFlags@34@_NU?$Ref@UWakeRecord@Dispatch@CoreUI@Microsoft@@@CFlat@@@Z
    int Callback_DoWait(unsigned int, ::Microsoft::CoreUI::Support::Win32Handle *, unsigned int, int, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPendingQuitPriorityExit@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void CheckPendingQuitPriorityExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitAtQuitPriorityWithoutUser@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void ExitAtQuitPriorityWithoutUser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@Win32EventLoopBridge@Dispatch@CoreUI@Microsoft@@AEAAXPEAVEventLoop@234@@Z
    void Init$(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Dispatch
