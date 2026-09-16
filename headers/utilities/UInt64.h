#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace System {
class UInt64 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@UInt64@System@@SAH_K0@Z
    static int CompareTo(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@UInt64@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@_K@Z
    static WindissectOpaque ToString(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@UInt64@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@_KPEAVString@2@U?$FastInterfacePtr@VIFormatProvider@System@@@4@@Z
    static WindissectOpaque ToString(uint64_t, ::System::String *, WindissectOpaque);
};
} // namespace System
