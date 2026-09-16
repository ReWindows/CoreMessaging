#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegisteredObjectValidator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCapabilityChecks@RegisteredObjectValidator@Registrar@CoreUI@Microsoft@@SAXPEAVString@System@@UScopeID@234@W4RegisteredObjectValidationLevel@234@PEAVRemoteRegistrarServer@234@@Z
    static void DoCapabilityChecks(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int, ::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRegisteredObjectParams@RegisteredObjectValidator@Registrar@CoreUI@Microsoft@@SAXPEAVString@System@@UScopeID@234@W4RegisteredObjectValidationLevel@234@PEAVRemoteRegistrarServer@234@U?$Ref@V?$SmartPtr@VRegistrationNameMaps@Registrar@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    static void ValidateRegisteredObjectParams(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int, ::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRegisteredObjectParamsAndLookup@RegisteredObjectValidator@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VObject@System@@@CFlat@@PEAVString@System@@UScopeID@234@W4RegisteredObjectType@234@W4RegisteredObjectValidationLevel@234@PEAVRemoteRegistrarServer@234@U?$Ref@V?$SmartPtr@VRegistrationNameMaps@Registrar@CoreUI@Microsoft@@@CFlat@@@6@@Z
    static WindissectOpaque ValidateRegisteredObjectParamsAndLookup(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int, int, ::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSystemCapability@RegisteredObjectValidator@Registrar@CoreUI@Microsoft@@SAXPEAVString@System@@PEAVAlpcServerAdapter@234@@Z
    static void ValidateSystemCapability(::System::String *, ::Microsoft::CoreUI::Registrar::AlpcServerAdapter *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostPartitionSessionForCurrentCaller@RegisteredObjectValidator@Registrar@CoreUI@Microsoft@@CA?AV?$SmartPtr@VRegistrarSessionContext@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVRemoteRegistrarServer@234@@Z
    static WindissectOpaque GetHostPartitionSessionForCurrentCaller(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistrationMapsForScope@RegisteredObjectValidator@Registrar@CoreUI@Microsoft@@CA?AV?$SmartPtr@VRegistrationNameMaps@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVRemoteRegistrarServer@234@UScopeID@234@_N@Z
    static WindissectOpaque RegistrationMapsForScope(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::Microsoft::CoreUI::Registrar::ScopeID, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRegistrarScope@RegisteredObjectValidator@Registrar@CoreUI@Microsoft@@CAXUScopeID@234@_NPEAVRegistrarThreadContext@234@@Z
    static void ValidateRegistrarScope(::Microsoft::CoreUI::Registrar::ScopeID, bool, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *);
};
} // namespace Microsoft::CoreUI::Registrar
