#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 21 member(s).
namespace Microsoft::CoreUI::Dispatch {
class WaitController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatch@WaitController@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnDispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_WaitAny@WaitController@Dispatch@CoreUI@Microsoft@@QEAA?AW4WaitStatus@234@PEAUWin32Handle@Support@34@IIW4WaitFlags@34@_NU?$Ref@I@CFlat@@@Z
    int Callback_WaitAny(::Microsoft::CoreUI::Support::Win32Handle *, unsigned int, unsigned int, int, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@WaitController@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@WaitController@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableEventLoopWait@WaitController@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void DisableEventLoopWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableEventLoopWait@WaitController@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void EnableEventLoopWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureIocpInitialized@WaitController@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void EnsureIocpInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@WaitController@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserIntegrationEnabled@WaitController@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void OnUserIntegrationEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThreadCompletionHandler@WaitController@Dispatch@CoreUI@Microsoft@@QEAAXUWin32Handle@Support@34@PEAVCompletionHandlerCallback@34@@Z
    void RegisterThreadCompletionHandler(::Microsoft::CoreUI::Support::Win32Handle, ::Microsoft::CoreUI::CompletionHandlerCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveExternalWaits@WaitController@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void RemoveExternalWaits();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWaitCycle@WaitController@Dispatch@CoreUI@Microsoft@@QEAA_NPEAVIocpWait@234@UIoCompletionPort@Support@34@@Z
    bool StartWaitCycle(WindissectOpaque *, ::Microsoft::CoreUI::Support::IoCompletionPort);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_PriorityBoost@WaitController@Dispatch@CoreUI@Microsoft@@QEAAXW4ThreadPriority@234@@Z
    void set_PriorityBoost(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WaitController@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~WaitController();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@WaitController@Dispatch@CoreUI@Microsoft@@IEAAXPEAVEventLoop@234@@Z
    void Init$(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrainSignaledIocpWaits@WaitController@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void DrainSignaledIocpWaits();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeekForNewEvents@WaitController@Dispatch@CoreUI@Microsoft@@AEAA_NXZ
    bool PeekForNewEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferWaitsToIocp@WaitController@Dispatch@CoreUI@Microsoft@@AEAAXUIoCompletionPort@Support@34@_N@Z
    void TransferWaitsToIocp(::Microsoft::CoreUI::Support::IoCompletionPort, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRemoveIocpCompletion@WaitController@Dispatch@CoreUI@Microsoft@@AEAA?AUWakeRecord@234@II@Z
    WindissectOpaque TryRemoveIocpCompletion(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bridge@WaitController@Dispatch@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VWin32EventLoopBridge@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Bridge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bridge$FastReturn$@WaitController@Dispatch@CoreUI@Microsoft@@AEAAPEAVWin32EventLoopBridge@234@XZ
    WindissectOpaque * get_Bridge$FastReturn$();
};
} // namespace Microsoft::CoreUI::Dispatch
