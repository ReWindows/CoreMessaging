#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI {
class DisposableObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@DisposableObject@CoreUI@Microsoft@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@DisposableObject@CoreUI@Microsoft@@UEAA_N_NU?$Ref@UIntPtr@System@@@CFlat@@@Z
    virtual bool OnFinalRelease(bool, WindissectOpaque);
    // Category: Method | Source: PE Export
    // Symbol: ?OnInitialExport@DisposableObject@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnInitialExport();
};
} // namespace Microsoft::CoreUI
