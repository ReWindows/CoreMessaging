#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace System {
class Guid {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@Guid@System@@QEBAHU12@@Z
    int CompareTo(::System::Guid) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NewGuid@Guid@System@@SA?AU12@XZ
    static ::System::Guid NewGuid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Guid@System@@QEBA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    WindissectOpaque ToString() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Guid@System@@QEBA?AV?$SmartPtr@VString@System@@@CFlat@@PEAVString@2@U?$FastInterfacePtr@VIFormatProvider@System@@@4@@Z
    WindissectOpaque ToString(::System::String *, WindissectOpaque) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HexsToChars@Guid@System@@CAHPEA_SHHH_N@Z
    static int HexsToChars(char16_t *, int, int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToStringDefault@Guid@System@@AEBAHPEA_SH_N@Z
    int ToStringDefault(char16_t *, int, bool) const;
};
} // namespace System
