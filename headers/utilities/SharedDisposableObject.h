#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI {
class SharedDisposableObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbandonObject@SharedDisposableObject@CoreUI@Microsoft@@QEAAXXZ
    void AbandonObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@SharedDisposableObject@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@SharedDisposableObject@CoreUI@Microsoft@@UEAA_N_NU?$Ref@UIntPtr@System@@@CFlat@@@Z
    virtual bool OnFinalRelease(bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalUsage@SharedDisposableObject@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnFinalUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitialExport@SharedDisposableObject@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnInitialExport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterUsage@SharedDisposableObject@CoreUI@Microsoft@@QEAAXPEAVObject@System@@@Z
    void UnregisterUsage(::System::Object *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExternalObjectOwner@SharedDisposableObject@CoreUI@Microsoft@@CA?AV?$SmartPtr@VObject@System@@@CFlat@@XZ
    static WindissectOpaque get_ExternalObjectOwner();
};
} // namespace Microsoft::CoreUI
