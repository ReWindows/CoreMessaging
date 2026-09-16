#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace System::Runtime::InteropServices {
class GCHandle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@GCHandle@InteropServices@Runtime@System@@QEAAXXZ
    void Free();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Target@GCHandle@InteropServices@Runtime@System@@QEAA?AV?$SmartPtr@VObject@System@@@CFlat@@XZ
    WindissectOpaque get_Target();
};
} // namespace System::Runtime::InteropServices
