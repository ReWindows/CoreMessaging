#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 12 member(s).
namespace System {
class Object {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@Object@System@@SA?AV?$SmartPtr@VObject@System@@@CFlat@@XZ
    static WindissectOpaque Create$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Object@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Object@System@@UEAA_NPEAV12@@Z
    virtual bool Equals(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize$@Object@System@@QEAAXXZ
    void Finalize$();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@Object@System@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterfaceDispatcher$@Object@System@@QEBAPEBXPEBUInterfaceTypeId@CFlat@@@Z
    void const * GetInterfaceDispatcher$(::CFlat::InterfaceTypeId const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@Object@System@@QEAA?AV?$SmartPtr@VType@System@@@CFlat@@XZ
    WindissectOpaque GetType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Object@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque ToString();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Release$@Object@System@@AEAAXXZ
    void Release$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseNotFrozen$@Object@System@@AEAAXXZ
    void ReleaseNotFrozen$();
};
} // namespace System
