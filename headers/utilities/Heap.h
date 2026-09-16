#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Cn::Engine {
class Heap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlignedAllocate@Heap@Engine@Cn@@SAPEAXUAllocType@23@_K11@Z
    static void * AlignedAllocate(::Cn::Engine::AllocType, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlignedAllocateNoZero@Heap@Engine@Cn@@SAPEAXUAllocType@23@_K11@Z
    static void * AlignedAllocateNoZero(::Cn::Engine::AllocType, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAllocate@Heap@Engine@Cn@@SAPEAXUAllocType@23@_K@Z
    static void * ProcessAllocate(::Cn::Engine::AllocType, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAllocateNoZero@Heap@Engine@Cn@@SAPEAXUAllocType@23@_K@Z
    static void * ProcessAllocateNoZero(::Cn::Engine::AllocType, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessReallocate@Heap@Engine@Cn@@SAPEAXUAllocType@23@PEAX_K@Z
    static void * ProcessReallocate(::Cn::Engine::AllocType, void *, uint64_t);
};
} // namespace Cn::Engine
