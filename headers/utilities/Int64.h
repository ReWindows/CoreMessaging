#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace System {
class Int64 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Int64@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@_J@Z
    static WindissectOpaque ToString(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Int64@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@_JPEAVString@2@U?$FastInterfacePtr@VIFormatProvider@System@@@4@@Z
    static WindissectOpaque ToString(int64_t, ::System::String *, WindissectOpaque);
};
} // namespace System
