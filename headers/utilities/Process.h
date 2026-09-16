#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Cn {
class Process {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Process@Cn@@SAXXZ
    static void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCallbackError@Process@Cn@@SAXHPEAX@Z
    static void NotifyCallbackError(int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOutOfMemory@Process@Cn@@SAX_K@Z
    static void NotifyOutOfMemory(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreDllMain@Process@Cn@@SAXPEAXK@Z
    static void OnPreDllMain(void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@Process@Cn@@SAXUShutdownKind@12@@Z
    static void Uninitialize(WindissectOpaque);
};
} // namespace Cn
