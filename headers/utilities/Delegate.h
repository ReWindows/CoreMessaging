#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace System {
class Delegate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureHostData@Delegate@System@@QEAAXXZ
    void CaptureHostData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Delegate@System@@SA_NPEAV12@0@Z
    static bool Equals(::System::Delegate *, ::System::Delegate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Delegate@System@@UEAA_NPEAVObject@2@@Z
    virtual bool Equals(::System::Object *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@Delegate@System@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotEquals@Delegate@System@@SA_NPEAV12@0@Z
    static bool NotEquals(::System::Delegate *, ::System::Delegate *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundToNullInstance@Delegate@System@@KAXXZ
    static void BoundToNullInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CombineImpl@Delegate@System@@KA?AV?$SmartPtr@VDelegate@System@@@CFlat@@PEAV12@0@Z
    static WindissectOpaque CombineImpl(::System::Delegate *, ::System::Delegate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateUninitialized@Delegate@System@@KAPEAXH@Z
    static void * CreateUninitialized(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Delegate@System@@IEAA@PEBUObjectTypeId@CFlat@@@Z
    Delegate(::CFlat::ObjectTypeId const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveImpl@Delegate@System@@KA?AV?$SmartPtr@VDelegate@System@@@CFlat@@PEAV12@0@Z
    static WindissectOpaque RemoveImpl(::System::Delegate *, ::System::Delegate *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Delegate@System@@IEAA@XZ
    ~Delegate();
};
} // namespace System
