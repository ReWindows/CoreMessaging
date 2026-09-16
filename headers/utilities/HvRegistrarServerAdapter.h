#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Registrar {
class HvRegistrarServerAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@HvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@HvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VHvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVRemoteRegistrarServer@234@PEAUGuid@System@@I@Z
    static WindissectOpaque Create$(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::Guid *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConnectedClient@HvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@UEAA?AV?$SmartPtr@VHvConnectedClient@HvSockets@CoreUI@Microsoft@@@CFlat@@XZ
    virtual WindissectOpaque CreateConnectedClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@HvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchBufferCore@HvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@UEAAXPEAXI@Z
    virtual void DispatchBufferCore(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientDisconnected@HvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@UEAAXPEAVHvConnectedClient@HvSockets@34@@Z
    virtual void OnClientDisconnected(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@HvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReceivedInvalidHeader@HvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnReceivedInvalidHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendInPlace@HvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@QEAAPEAXPEAVHvRegistrarConnectedClient@234@UIntPtr@System@@I@Z
    void * SendInPlace(::Microsoft::CoreUI::Registrar::HvRegistrarConnectedClient *, ::System::IntPtr, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~HvRegistrarServerAdapter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@HvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@IEAAXPEAVRemoteRegistrarServer@234@PEAUGuid@System@@I@Z
    void Init$(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::Guid *, unsigned int);
};
} // namespace Microsoft::CoreUI::Registrar
