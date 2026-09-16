#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Support {
class Win32Event {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@Win32Event@Support@CoreUI@Microsoft@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@Win32Event@Support@CoreUI@Microsoft@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@Win32Event@Support@CoreUI@Microsoft@@SAXUWin32Handle@234@@Z
    static void Set(::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Win32Event@Support@CoreUI@Microsoft@@QEAA@W4Win32EventType@123@@Z
    Win32Event(int);
};
} // namespace Microsoft::CoreUI::Support
