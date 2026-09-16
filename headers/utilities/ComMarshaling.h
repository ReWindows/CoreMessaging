#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace CFlat {
class ComMarshaling {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupNativeInterface@ComMarshaling@CFlat@@SAXPEAUIUnknown@@@Z
    static void CleanupNativeInterface(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToManagedInterface@ComMarshaling@CFlat@@SA?AV?$SmartPtr@VObject@System@@@2@PEAUIUnknown@@PEBUComInterfaceTypeId@2@@Z
    static WindissectOpaque ToManagedInterface(IUnknown *, ::CFlat::ComInterfaceTypeId const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToNativeInterface@ComMarshaling@CFlat@@SAPEAXPEAVObject@System@@PEAUIUnknown@@PEBUComInterfaceTypeId@2@AEBU_GUID@@@Z
    static void * ToNativeInterface(::System::Object *, IUnknown *, ::CFlat::ComInterfaceTypeId const *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetObjectFromExportAdapter@ComMarshaling@CFlat@@SAPEAVObject@System@@PEAUIUnknown@@PEAX@Z
    static ::System::Object * TryGetObjectFromExportAdapter(IUnknown *, void *);
};
} // namespace CFlat
