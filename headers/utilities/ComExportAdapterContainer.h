#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 8 member(s).
namespace CFlat {
class ComExportAdapterContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddExport@ComExportAdapterContainer@CFlat@@QEAAXPEAVObject@System@@@Z
    void AddExport(::System::Object *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComExportAdapterContainer@CFlat@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Export@ComExportAdapterContainer@CFlat@@UEAAPEAXPEAVObject@System@@@Z
    virtual void * Export(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@ComExportAdapterContainer@CFlat@@QEAA_NU?$Ref@UIntPtr@System@@@2@@Z
    bool Invalidate(WindissectOpaque);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ComExportAdapterContainer@CFlat@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComExportAdapterContainer@CFlat@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveExport@ComExportAdapterContainer@CFlat@@QEAA_NU?$Ref@UIntPtr@System@@@2@@Z
    bool RemoveExport(WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@ComExportAdapterContainer@CFlat@@AEAAXXZ
    void Delete();
};
} // namespace CFlat
