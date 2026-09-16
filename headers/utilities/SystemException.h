#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace System {
class SystemException {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@SystemException@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SystemException@System@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@3@@Z
    SystemException(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowVirtual$@SystemException@System@@UEAAXXZ
    virtual void ThrowVirtual$();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@SystemException@System@@IEAAXPEAVString@2@@Z
    void Init$(::System::String *);
};
} // namespace System
