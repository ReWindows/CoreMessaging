#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Cn {
class FailFast {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForNtStatus@FailFast@Cn@@SAXH@Z
    static void ForNtStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForWin32@FailFast@Cn@@SAXXZ
    static void ForWin32();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOutOfRange@FailFast@Cn@@SAXXZ
    static void IndexOutOfRange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidOperation@FailFast@Cn@@SAXXZ
    static void InvalidOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unexpected@FailFast@Cn@@SAXXZ
    static void Unexpected();
};
} // namespace Cn
