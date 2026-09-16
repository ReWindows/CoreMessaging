#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI {
class CoreUISession {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreUISession@CoreUI@Microsoft@@SAXXZ
    static void AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitializedWithAddRef@CoreUISession@CoreUI@Microsoft@@SA_N_N000@Z
    static bool EnsureInitializedWithAddRef(bool, bool, bool, bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreUISession@CoreUI@Microsoft@@SAXXZ
    static void Release();
};
} // namespace Microsoft::CoreUI
