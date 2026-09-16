#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 9 member(s).
namespace System {
class Type {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@Type@System@@SA?AV?$SmartPtr@VType@System@@@CFlat@@PEAUTypeId@4@@Z
    static WindissectOpaque Create$(::CFlat::TypeId *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Type@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Type@System@@QEAA_NPEAV12@@Z
    bool Equals(::System::Type *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@Type@System@@UEAA_NPEAVObject@2@@Z
    virtual bool Equals(::System::Object *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@Type@System@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@Type@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@Type@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque get_Name();
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Equality@Type@System@@SA_NPEAV12@0@Z
    static bool op_Equality(::System::Type *, ::System::Type *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Inequality@Type@System@@SA_NPEAV12@0@Z
    static bool op_Inequality(::System::Type *, ::System::Type *);
};
} // namespace System
