#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::Dispatch {
class EnqueuedWaitCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@EnqueuedWaitCollection@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@EnqueuedWaitCollection@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReadyToWait@EnqueuedWaitCollection@Dispatch@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool OnReadyToWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWaitReadyToStartWaitCycle@EnqueuedWaitCollection@Dispatch@CoreUI@Microsoft@@UEAAXPEAVRegisteredWait@234@@Z
    virtual void OnWaitReadyToStartWaitCycle(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWaitRemoved@EnqueuedWaitCollection@Dispatch@CoreUI@Microsoft@@UEAAXPEAVRegisteredWait@234@@Z
    virtual void OnWaitRemoved(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUnstartedList@EnqueuedWaitCollection@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool ProcessUnstartedList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyEmpty@EnqueuedWaitCollection@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void VerifyEmpty();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnqueuedWaitCollection@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~EnqueuedWaitCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bridge@EnqueuedWaitCollection@Dispatch@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VWin32EventLoopBridge@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Bridge();
};
} // namespace Microsoft::CoreUI::Dispatch
