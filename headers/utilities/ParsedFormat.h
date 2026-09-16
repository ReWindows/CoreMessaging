#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace System::Text {
class ParsedFormat {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@ParsedFormat@Text@System@@SA?AU123@PEAVString@3@@Z
    static ::System::Text::ParsedFormat Parse(::System::String *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseUnsigned@ParsedFormat@Text@System@@CAIPEAVString@3@HH@Z
    static unsigned int ParseUnsigned(::System::String *, int, int);
};
} // namespace System::Text
