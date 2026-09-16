#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Dispatch {
class DeferredCall {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_Dispatch@DeferredCall@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void Callback_Dispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@DeferredCall@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@DeferredCall@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeferredCall@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~DeferredCall();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleRegistrarClientIdUintUintUint@DeferredCall@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void HandleRegistrarClientIdUintUintUint();
};
} // namespace Microsoft::CoreUI::Dispatch
