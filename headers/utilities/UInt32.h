#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace System {
class UInt32 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@UInt32@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@I@Z
    static WindissectOpaque ToString(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@UInt32@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@IPEAVString@2@U?$FastInterfacePtr@VIFormatProvider@System@@@4@@Z
    static WindissectOpaque ToString(unsigned int, ::System::String *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@UInt32@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@IPEAVString@2@@Z
    static WindissectOpaque ToString(unsigned int, ::System::String *);
};
} // namespace System
