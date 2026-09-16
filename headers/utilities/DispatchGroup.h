#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI {
class DispatchGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatch@DispatchGroup@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnDispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@DispatchGroup@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelled@DispatchGroup@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@DispatchGroup@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@DispatchGroup@CoreUI@Microsoft@@UEAA_N_NU?$Ref@UIntPtr@System@@@CFlat@@@Z
    virtual bool OnFinalRelease(bool, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DispatchGroup@CoreUI@Microsoft@@QEAA@XZ
    ~DispatchGroup();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@DispatchGroup@CoreUI@Microsoft@@IEAAXPEAVDispatcher@Dispatch@23@PEAVDispatchGroupHandler@23@@Z
    void Init$(WindissectOpaque *, ::Microsoft::CoreUI::DispatchGroupHandler *);
};
} // namespace Microsoft::CoreUI
