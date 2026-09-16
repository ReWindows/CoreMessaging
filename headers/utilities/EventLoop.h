#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 36 member(s).
namespace Microsoft::CoreUI::Dispatch {
class EventLoop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_RunCoreLoop@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA?AW4Dispatcher$LoopExitState@234@W4RunMode@234@@Z
    int$LoopExitState Callback_RunCoreLoop(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckExitFlag@EventLoop@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void CheckExitFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@EventLoop@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@EventLoop@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EventLoop@Dispatch@CoreUI@Microsoft@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@5@@Z
    EventLoop(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Exit@EventLoop@Dispatch@CoreUI@Microsoft@@QEAAX_N@Z
    void Exit(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallYieldCheckHandler@EventLoop@Dispatch@CoreUI@Microsoft@@QEAAXPEAVAction@System@@_N@Z
    void InstallYieldCheckHandler(::System::Action *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@EventLoop@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSessionResurrected@EventLoop@Dispatch@CoreUI@Microsoft@@QEAAX_N@Z
    void OnSessionResurrected(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForNewSessionAdapter@EventLoop@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void PrepareForNewSessionAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDispatchCallback@EventLoop@Dispatch@CoreUI@Microsoft@@QEAAXPEAVDispatchCallback@234@W4ThreadPriority@234@@Z
    void RegisterDispatchCallback(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@EventLoop@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalWakeObject@EventLoop@Dispatch@CoreUI@Microsoft@@SAXPEAX@Z
    static void SignalWakeObject(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninstallYieldCheckHandler@EventLoop@Dispatch@CoreUI@Microsoft@@QEAAXPEAVAction@System@@@Z
    void UninstallYieldCheckHandler(::System::Action *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WakeDispatchThread@EventLoop@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void WakeDispatchThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bridge@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VEventLoopBridge@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Bridge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanExit@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool get_CanExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeferredCallDispatcher@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VDeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_DeferredCallDispatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Dispatcher@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VDispatcher@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Dispatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HighPriorityOffThreadReceiver@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VOffThreadReceiver@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_HighPriorityOffThreadReceiver();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActive@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActiveAndNotStopping@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsActiveAndNotStopping();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsPiecewiseLoop@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsPiecewiseLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRunning@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsRunning();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRunningOnOtherThread@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsRunningOnOtherThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsStopping@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsStopping();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OffThreadDeferredReceiver@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VOffThreadReceiver@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_OffThreadDeferredReceiver();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OffThreadReceiver@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VOffThreadReceiver@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_OffThreadReceiver();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Waits@EventLoop@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VWaitCollection@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Waits();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EventLoop@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~EventLoop();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@EventLoop@Dispatch@CoreUI@Microsoft@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(::CFlat::ComExportAdapterContainer *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@EventLoop@Dispatch@CoreUI@Microsoft@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@EventLoop@Dispatch@CoreUI@Microsoft@@IEAAXPEAVThreadContext@234@_N1@Z
    void Init$(WindissectOpaque *, bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_Run@EventLoop@Dispatch@CoreUI@Microsoft@@AEAAXW4RunMode@234@W4ExitOptions@34@PEA_N@Z
    void Callback_Run(int, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitLoop@EventLoop@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void ExitLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UrgentExit@EventLoop@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void UrgentExit();
};
} // namespace Microsoft::CoreUI::Dispatch
