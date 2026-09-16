#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace System {
class Range {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@Range@System@@SA_NHHH@Z
    static bool IsValid(int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidIndex@Range@System@@SA_NHH@Z
    static bool IsValidIndex(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidInsertIndex@Range@System@@SA_NHH@Z
    static bool IsValidInsertIndex(int, int);
};
} // namespace System
