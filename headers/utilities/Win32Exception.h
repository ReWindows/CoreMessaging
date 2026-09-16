#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI {
class Win32Exception {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@Win32Exception@CoreUI@Microsoft@@SA?AV?$SmartPtr@VWin32Exception@CoreUI@Microsoft@@@CFlat@@IPEAVString@System@@@Z
    static WindissectOpaque Create$(unsigned int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Win32Exception@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowVirtual$@Win32Exception@CoreUI@Microsoft@@UEAAXXZ
    virtual void ThrowVirtual$();
};
} // namespace Microsoft::CoreUI
