#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace System {
class ThrowHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowArgumentNullException@ThrowHelper@System@@SAXW4ExceptionArgument@2@@Z
    static void ThrowArgumentNullException(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowArgumentOutOfRange_IndexException@ThrowHelper@System@@SAXXZ
    static void ThrowArgumentOutOfRange_IndexException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowInvalidOperationException@ThrowHelper@System@@SAXW4ExceptionResource@2@@Z
    static void ThrowInvalidOperationException(int);
};
} // namespace System
