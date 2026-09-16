#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace System {
class Int32 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Int32@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@H@Z
    static WindissectOpaque ToString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Int32@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@HPEAVString@2@U?$FastInterfacePtr@VIFormatProvider@System@@@4@@Z
    static WindissectOpaque ToString(int, ::System::String *, WindissectOpaque);
};
} // namespace System
