#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Dispatch {
class DispatchItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@DispatchItem@Dispatch@CoreUI@Microsoft@@QEAAXW4InternalPriority@234@@Z
    void Activate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckYield@DispatchItem@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool CheckYield();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@DispatchItem@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceWakeLevel@DispatchItem@Dispatch@CoreUI@Microsoft@@QEAAXW4InternalPriority@234@@Z
    void ForceWakeLevel(int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancelled@DispatchItem@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@DispatchItem@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Passivate@DispatchItem@Dispatch@CoreUI@Microsoft@@QEAAXW4InternalPriority@234@@Z
    void Passivate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DispatchCancelledOrPaused@DispatchItem@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool get_DispatchCancelledOrPaused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Dispatcher@DispatchItem@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VDispatcher@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Dispatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Enabled@DispatchItem@Dispatch@CoreUI@Microsoft@@QEAAX_N@Z
    void set_Enabled(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DispatchItem@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~DispatchItem();
};
} // namespace Microsoft::CoreUI::Dispatch
