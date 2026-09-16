#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Support {
class Bits {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBitIndex@Bits@Support@CoreUI@Microsoft@@SA_NPEAHHH@Z
    static bool ClearBitIndex(int *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFirstUnsetBit@Bits@Support@CoreUI@Microsoft@@SAHPEAHHH_N@Z
    static int FindFirstUnsetBit(int *, int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLowestBit@Bits@Support@CoreUI@Microsoft@@SAHH@Z
    static int FindLowestBit(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitIndex@Bits@Support@CoreUI@Microsoft@@SA_NPEAHHH@Z
    static bool SetBitIndex(int *, int, int);
};
} // namespace Microsoft::CoreUI::Support
