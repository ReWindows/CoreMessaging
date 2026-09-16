#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Cn::Engine {
class StackMemory {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StackMemory@Engine@Cn@@QEAA@XZ
    ~StackMemory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateImpl@StackMemory@Engine@Cn@@AEAAPEAX_K_N@Z
    void * AllocateImpl(uint64_t, bool);
};
} // namespace Cn::Engine
