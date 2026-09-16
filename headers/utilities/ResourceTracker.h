#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Resources {
class ResourceTracker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTracking@ResourceTracker@Resources@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VITrackableResource@Resources@CoreUI@Microsoft@@@CFlat@@@Z
    static void CancelTracking(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ResourceTracker@Resources@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ResourceTracker@Resources@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ResourceTracker@Resources@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ResourceTracker@Resources@CoreUI@Microsoft@@SAXI@Z
    static void Release(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceTracker@Resources@CoreUI@Microsoft@@QEAA@XZ
    ~ResourceTracker();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@ResourceTracker@Resources@CoreUI@Microsoft@@IEAAXPEAV?$Action$1@_N@System@@@Z
    void Init$(::System::Action$1<bool> *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelEntry@ResourceTracker@Resources@CoreUI@Microsoft@@AEAAXPEAVResourceTracker$Entry@234@@Z
    void CancelEntry(::Microsoft::CoreUI::Resources::ResourceTracker$Entry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetireEntry@ResourceTracker@Resources@CoreUI@Microsoft@@AEAAXPEAVResourceTracker$Entry@234@@Z
    void RetireEntry(::Microsoft::CoreUI::Resources::ResourceTracker$Entry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackWorker@ResourceTracker@Resources@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VResourceTracker$Entry@Resources@CoreUI@Microsoft@@@CFlat@@PEAVObject@System@@@Z
    WindissectOpaque TrackWorker(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrackedItems@ResourceTracker@Resources@CoreUI@Microsoft@@CA?AV?$SmartPtr@V?$Map$2@IV?$SmartPtr@VResourceTracker$Entry@Resources@CoreUI@Microsoft@@@CFlat@@@@@CFlat@@XZ
    static WindissectOpaque get_TrackedItems();
};
} // namespace Microsoft::CoreUI::Resources
