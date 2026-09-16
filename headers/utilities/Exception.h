#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 10 member(s).
namespace System {
class Exception {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Exception@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Exception@System@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@3@@Z
    Exception(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrame@Exception@System@@QEAAPEAXH@Z
    void * GetFrame(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Throw$@Exception@System@@QEAAXXZ
    void Throw$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowVirtual$@Exception@System@@UEAAXXZ
    virtual void ThrowVirtual$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Exception@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Message@Exception@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque get_Message();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Exception@System@@QEAA@XZ
    ~Exception();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@Exception@System@@IEAAXPEAVString@2@@Z
    void Init$(::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@Exception@System@@IEAAXXZ
    void Init$();
};
} // namespace System
