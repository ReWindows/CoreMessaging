#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace CFlat {
class TypeId {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FullName@TypeId@CFlat@@QEBA?AV?$SmartPtr@VString@System@@@2@XZ
    WindissectOpaque FullName() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendName@TypeId@CFlat@@AEBAXPEAVStringBuilder@Text@System@@_N1@Z
    void AppendName(::System::Text::StringBuilder *, bool, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendTypeArgumentsHelper@TypeId@CFlat@@AEBA_NPEAVStringBuilder@Text@System@@@Z
    bool AppendTypeArgumentsHelper(::System::Text::StringBuilder *) const;
};
} // namespace CFlat
