#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 22 member(s).
namespace Microsoft::CoreUI::Dispatch {
class Dispatcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbandonLoop@Dispatcher@Dispatch@CoreUI@Microsoft@@QEAAXW4Dispatcher$LoopExitState@234@@Z
    void AbandonLoop(int$LoopExitState);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_DispatchLoop@Dispatcher@Dispatch@CoreUI@Microsoft@@QEAA?AW4Dispatcher$LoopExitState@234@W4RunnablePriorityMask@234@@Z
    int$LoopExitState Callback_DispatchLoop(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckYield@Dispatcher@Dispatch@CoreUI@Microsoft@@QEAA_NPEAVDispatchItem@234@@Z
    bool CheckYield(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@Dispatcher@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@Dispatcher@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VDispatcher@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVEventLoop@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Dispatcher@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapPriority@Dispatcher@Dispatch@CoreUI@Microsoft@@SA?AW4InternalPriority@234@W4ExternalPriority@234@@Z
    static int MapPriority(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyNewWork@Dispatcher@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void NotifyNewWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildAttach@Dispatcher@Dispatch@CoreUI@Microsoft@@QEAAXPEAVDispatchItem@234@_N@Z
    void OnChildAttach(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@Dispatcher@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryPendingItems@Dispatcher@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool QueryPendingItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidatePriority@Dispatcher@Dispatch@CoreUI@Microsoft@@SAXW4ExternalPriority@234@@Z
    static void ValidatePriority(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCurrentThreadDispatching@Dispatcher@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsCurrentThreadDispatching();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Dispatcher@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~Dispatcher();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@Dispatcher@Dispatch@CoreUI@Microsoft@@IEAAXPEAVEventLoop@234@@Z
    void Init$(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelCurrentItem@Dispatcher@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void CancelCurrentItem();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNextItem@Dispatcher@Dispatch@CoreUI@Microsoft@@AEAA_NPEAVDispatchItem@234@@Z
    bool IsNextItem(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeekNextItem@Dispatcher@Dispatch@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VDispatchItem@Dispatch@CoreUI@Microsoft@@@CFlat@@_N@Z
    WindissectOpaque PeekNextItem(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDispatchCallback@Dispatcher@Dispatch@CoreUI@Microsoft@@AEAAXPEAVDispatchCallback@234@_N@Z
    void UnregisterDispatchCallback(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentItem@Dispatcher@Dispatch@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VDispatchItem@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_CurrentItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentItemPriority@Dispatcher@Dispatch@CoreUI@Microsoft@@AEAA?AW4InternalPriority@234@XZ
    int get_CurrentItemPriority();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_CurrentItemPriority@Dispatcher@Dispatch@CoreUI@Microsoft@@AEAAXW4InternalPriority@234@@Z
    void set_CurrentItemPriority(int);
};
} // namespace Microsoft::CoreUI::Dispatch
