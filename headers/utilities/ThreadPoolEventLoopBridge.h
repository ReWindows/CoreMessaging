#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 17 member(s).
namespace Microsoft::CoreUI::Dispatch {
class ThreadPoolEventLoopBridge {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_Run@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXW4RunMode@234@@Z
    virtual void Callback_Run(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_Wait@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXPEAUWin32Handle@Support@34@IIW4WaitFlags@34@U?$Ref@UWakeRecord@Dispatch@CoreUI@Microsoft@@@CFlat@@@Z
    virtual void Callback_Wait(::Microsoft::CoreUI::Support::Win32Handle *, unsigned int, unsigned int, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVEventLoop@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRegisteredWait@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA?AV?$SmartPtr@VRegisteredWait@Dispatch@CoreUI@Microsoft@@@CFlat@@UWin32Handle@Support@34@PEAVWaitCallback@234@_N@Z
    virtual WindissectOpaque CreateRegisteredWait(::Microsoft::CoreUI::Support::Win32Handle, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PE Export
    // Symbol: ?DrainSignaledWaits@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void DrainSignaledWaits();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExit@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void OnExit(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThreadPoolWaitSignaled@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXUIntPtr@System@@PEAVRegisteredThreadPoolWait@234@PEAPEAX@Z
    virtual void OnThreadPoolWaitSignaled(::System::IntPtr, WindissectOpaque *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForNewSessionAdapter@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void PrepareForNewSessionAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryPendingItems@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool QueryPendingItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWaitCycle@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA_NPEAVRegisteredWait@234@@Z
    virtual bool StartWaitCycle(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WakeDispatchThreadIfNecessary@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void WakeDispatchThreadIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Waits@ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@UEAA?AV?$SmartPtr@VWaitCollection@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    virtual WindissectOpaque get_Waits();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThreadPoolEventLoopBridge@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~ThreadPoolEventLoopBridge();
};
} // namespace Microsoft::CoreUI::Dispatch
