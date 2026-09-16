#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegistrationNameMaps {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToThreadListOnly@RegistrationNameMaps@Registrar@CoreUI@Microsoft@@QEAAXPEAVRegistrarThreadContext@234@W4RegisteredObjectType@234@PEAVString@System@@@Z
    void AddToThreadListOnly(::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RegistrationNameMaps@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@RegistrationNameMaps@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VRegistrationNameMaps@Registrar@CoreUI@Microsoft@@@CFlat@@W4RegistrarScope@34@@Z
    static WindissectOpaque Create$(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RegistrationNameMaps@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindObject@RegistrationNameMaps@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VObject@System@@@CFlat@@W4RegisteredObjectType@234@PEAVString@System@@@Z
    WindissectOpaque FindObject(int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RegistrationNameMaps@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterObject@RegistrationNameMaps@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVRegistrarThreadContext@234@W4RegisteredObjectType@234@PEAVString@System@@PEAVObject@System@@@Z
    int RegisterObject(::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, int, ::System::String *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rundown@RegistrationNameMaps@Registrar@CoreUI@Microsoft@@QEAAXPEAVRegistrarThreadContext@234@@Z
    void Rundown(::Microsoft::CoreUI::Registrar::RegistrarThreadContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterObject@RegistrationNameMaps@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVRegistrarThreadContext@234@W4RegisteredObjectType@234@PEAVString@System@@@Z
    int UnregisterObject(::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, int, ::System::String *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupRegistrationCommon@RegistrationNameMaps@Registrar@CoreUI@Microsoft@@AEAA?AW4MessagingResults@Messaging@34@PEAVRegistrarThreadContext@234@W4RegisteredObjectType@234@PEAVString@System@@_N33@Z
    int CleanupRegistrationCommon(::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, int, ::System::String *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromMap@RegistrationNameMaps@Registrar@CoreUI@Microsoft@@AEAAXW4RegisteredObjectType@234@PEAVString@System@@@Z
    void RemoveFromMap(int, ::System::String *);
};
} // namespace Microsoft::CoreUI::Registrar
