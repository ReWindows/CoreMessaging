#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace CFlat {
class EnumFormatting {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFormat@EnumFormatting@CFlat@@SA_N_KPEAUEnumTypeId@2@U?$Ref@V?$SmartPtr@VString@System@@@CFlat@@@2@@Z
    static bool TryFormat(uint64_t, ::CFlat::EnumTypeId *, WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BinarySearch@EnumFormatting@CFlat@@CAHUEnumEntries@2@_K@Z
    static int BinarySearch(::CFlat::EnumEntries, uint64_t);
};
} // namespace CFlat
