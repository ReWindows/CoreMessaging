#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 10 member(s).
namespace Microsoft::CoreUI::Registrar {
class HvRegistrarClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@HvRegistrarClientAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@HvRegistrarClientAdapter@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VHvRegistrarClientAdapter@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVRemoteRegistrarServer@234@PEAUGuid@System@@I@Z
    static WindissectOpaque Create$(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::Guid *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@HvRegistrarClientAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchBuffer@HvRegistrarClientAdapter@Registrar@CoreUI@Microsoft@@UEAA_NPEAXI@Z
    virtual bool DispatchBuffer(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeReceivePending@HvRegistrarClientAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnBeforeReceivePending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@HvRegistrarClientAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReceivedInvalidHeader@HvRegistrarClientAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnReceivedInvalidHeader();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HvRegistrarClientAdapter@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~HvRegistrarClientAdapter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@HvRegistrarClientAdapter@Registrar@CoreUI@Microsoft@@IEAAXPEAVRemoteRegistrarServer@234@PEAUGuid@System@@I@Z
    void Init$(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::Guid *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_Registrar_IServerCallerHost_GetReplyWithFailFast$@HvRegistrarClientAdapter@Registrar@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VObject@System@@@CFlat@@U?$Ref@W4MessagingResults@Messaging@CoreUI@Microsoft@@@6@@Z
    WindissectOpaque Microsoft_CoreUI_Registrar_IServerCallerHost_GetReplyWithFailFast$(WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Registrar
