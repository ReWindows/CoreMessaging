#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegisteredObjectInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@RegisteredObjectInfo@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VRegisteredObjectInfo@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVRegistrarThreadContext@234@UGuid@System@@UHIDENTITY@34@@Z
    static WindissectOpaque Create$(::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::System::Guid, ::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RegisteredObjectInfo@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
};
} // namespace Microsoft::CoreUI::Registrar
