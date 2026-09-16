#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 25 member(s).
namespace Microsoft::CoreUI::Dispatch {
class EventLoopBridge {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbandonEventLoopIfExternalWorkHasPrecedence@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NW4InternalPriority@234@H@Z
    virtual bool AbandonEventLoopIfExternalWorkHasPrecedence(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?Callback_OnAfterWait@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnAfterWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_PrepareToWait@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NU?$Ref@UTimeSpan@System@@@CFlat@@@Z
    virtual bool Callback_PrepareToWait(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_TryHandleExternalCompletion@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NU?$Ref@UWakeRecord@Dispatch@CoreUI@Microsoft@@@CFlat@@@Z
    virtual bool Callback_TryHandleExternalCompletion(WindissectOpaque);
    // Category: Method | Source: PE Export
    // Symbol: ?CheckForUserIntegration@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void CheckForUserIntegration(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@EventLoopBridge@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VEventLoopBridge@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVEventLoop@234@@Z
    static WindissectOpaque Create(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitAtQuitPriority@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ExitAtQuitPriority();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalWorkHasPrecedence@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NW4InternalPriority@234@H@Z
    virtual bool ExternalWorkHasPrecedence(int, int);
    // Category: Method | Source: PE Export
    // Symbol: ?FinallyOnAfterWait@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void FinallyOnAfterWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterDispatchLoop@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool OnEnterDispatchLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExitedForFlag@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnExitedForFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIgnoredEnqueuedExit@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnIgnoredEnqueuedExit();
    // Category: Method | Source: PE Export
    // Symbol: ?OnItemSelectedForDispatch@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXW4InternalPriority@234@@Z
    virtual void OnItemSelectedForDispatch(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnRegisterDispatchCallback@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXW4ThreadPriority@234@@Z
    virtual void OnRegisterDispatchCallback(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnResumeDispatch@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnResumeDispatch();
    // Category: Method | Source: PE Export
    // Symbol: ?OnSessionFullyInitialized@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void OnSessionFullyInitialized(bool);
    // Category: Method | Source: PE Export
    // Symbol: ?OnSessionResurrected@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void OnSessionResurrected(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThreadPoolWaitSignaled@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXUIntPtr@System@@PEAVRegisteredThreadPoolWait@234@PEAPEAX@Z
    virtual void OnThreadPoolWaitSignaled(::System::IntPtr, WindissectOpaque *, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUnregisterDispatchCallback@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnUnregisterDispatchCallback();
    // Category: Method | Source: PE Export
    // Symbol: ?PrepareForNewSessionAdapter@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void PrepareForNewSessionAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryDeferYieldCheck@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool QueryDeferYieldCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThreadCompletionHandler@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXUWin32Handle@Support@34@PEAVCompletionHandlerCallback@34@@Z
    virtual void RegisterThreadCompletionHandler(::Microsoft::CoreUI::Support::Win32Handle, ::Microsoft::CoreUI::CompletionHandlerCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EventLoop@EventLoopBridge@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VEventLoop@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_EventLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitializingUserAdapterForRunUntilExit@EventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool get_InitializingUserAdapterForRunUntilExit();
};
} // namespace Microsoft::CoreUI::Dispatch
