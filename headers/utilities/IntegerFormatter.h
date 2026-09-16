#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace System::Text {
class IntegerFormatter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatInt64@IntegerFormatter@Text@System@@SAH_JEU?$Ref@V?$SmartPtr@V?$Array$2@_S$00@CFlat@@@CFlat@@@CFlat@@HHPEAVString@3@@Z
    static int FormatInt64(int64_t, unsigned char, WindissectOpaque, int, int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatInt64@IntegerFormatter@Text@System@@SAH_JEU?$Ref@V?$SmartPtr@V?$Array$2@_S$00@CFlat@@@CFlat@@@CFlat@@HHUParsedFormat@23@@Z
    static int FormatInt64(int64_t, unsigned char, WindissectOpaque, int, int, ::System::Text::ParsedFormat);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatUInt64@IntegerFormatter@Text@System@@SAH_KU?$Ref@V?$SmartPtr@V?$Array$2@_S$00@CFlat@@@CFlat@@@CFlat@@HHPEAVString@3@@Z
    static int FormatUInt64(uint64_t, WindissectOpaque, int, int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatUInt64@IntegerFormatter@Text@System@@SAH_KU?$Ref@V?$SmartPtr@V?$Array$2@_S$00@CFlat@@@CFlat@@@CFlat@@HHUParsedFormat@23@@Z
    static int FormatUInt64(uint64_t, WindissectOpaque, int, int, ::System::Text::ParsedFormat);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDecimal@IntegerFormatter@Text@System@@CAH_KU?$Ref@V?$SmartPtr@V?$Array$2@_S$00@CFlat@@@CFlat@@@CFlat@@HHUParsedFormat@23@@Z
    static int FormatDecimal(uint64_t, WindissectOpaque, int, int, ::System::Text::ParsedFormat);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDecimalInvariantCulture@IntegerFormatter@Text@System@@CAH_KU?$Ref@V?$SmartPtr@V?$Array$2@_S$00@CFlat@@@CFlat@@@CFlat@@HHUParsedFormat@23@@Z
    static int FormatDecimalInvariantCulture(uint64_t, WindissectOpaque, int, int, ::System::Text::ParsedFormat);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatHexadecimalInvariantCulture@IntegerFormatter@Text@System@@CAH_KU?$Ref@V?$SmartPtr@V?$Array$2@_S$00@CFlat@@@CFlat@@@CFlat@@HHUParsedFormat@23@@Z
    static int FormatHexadecimalInvariantCulture(uint64_t, WindissectOpaque, int, int, ::System::Text::ParsedFormat);
};
} // namespace System::Text
