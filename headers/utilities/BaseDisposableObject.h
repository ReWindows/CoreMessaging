#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI {
class BaseDisposableObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeWorker@BaseDisposableObject@CoreUI@Microsoft@@QEAAXXZ
    void DisposeWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BaseDisposableObject@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@BaseDisposableObject@CoreUI@Microsoft@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque ToString();
};
} // namespace Microsoft::CoreUI
