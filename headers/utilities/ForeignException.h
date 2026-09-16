#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI {
class ForeignException {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BackupFrames@ForeignException@CoreUI@Microsoft@@QEAAXXZ
    void BackupFrames();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ForeignException@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ForeignException@CoreUI@Microsoft@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@4@@Z
    ForeignException(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowVirtual$@ForeignException@CoreUI@Microsoft@@UEAAXXZ
    virtual void ThrowVirtual$();
};
} // namespace Microsoft::CoreUI
