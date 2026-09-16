#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 25 member(s).
namespace CFlat {
class ComImportAdapter {
public:
    class ExternalEventRegistrationTokenTable;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComImportAdapter@CFlat@@QEAA@PEBUObjectTypeId@1@UConstructorTagType@1@@Z
    ComImportAdapter(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ComImportAdapter@CFlat@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@ComImportAdapter@CFlat@@UEAA_NPEAVObject@System@@@Z
    virtual bool Equals(::System::Object *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComInterfaceDispatcher$@ComImportAdapter@CFlat@@QEAAPEBXPEBUComInterfaceTypeId@2@@Z
    void const * GetComInterfaceDispatcher$(::CFlat::ComInterfaceTypeId const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@ComImportAdapter@CFlat@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNativeInterface$@ComImportAdapter@CFlat@@QEAAPEAXPEBUComInterfaceTypeId@2@@Z
    void * GetNativeInterface$(::CFlat::ComInterfaceTypeId const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate$@ComImportAdapter@CFlat@@QEAAXXZ
    void Invalidate$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddNativeInterface$@ComImportAdapter@CFlat@@QEAA_NPEAXPEBUComInterfaceTypeId@2@0@Z
    bool TryAddNativeInterface$(void *, ::CFlat::ComInterfaceTypeId const *, void *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComImportAdapter@CFlat@@IEAA@XZ
    ~ComImportAdapter();
};
} // namespace CFlat
