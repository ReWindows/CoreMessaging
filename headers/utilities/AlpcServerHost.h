#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 13 member(s).
namespace Microsoft::CoreUI::Registrar {
class AlpcServerHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@AlpcServerHost@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@AlpcServerHost@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VAlpcServerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVEventLoop@Dispatch@34@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@AlpcServerHost@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@AlpcServerHost@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetServiceRunMode@AlpcServerHost@Registrar@CoreUI@Microsoft@@SAXW4ServiceRunMode@234@PEAUGuid@System@@1@Z
    static void SetServiceRunMode(int, ::System::Guid *, ::System::Guid *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RegistrarPortName@AlpcServerHost@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    static WindissectOpaque get_RegistrarPortName();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlpcServerHost@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~AlpcServerHost();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@AlpcServerHost@Registrar@CoreUI@Microsoft@@IEAAXPEAVEventLoop@Dispatch@34@@Z
    void Init$(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAlpcServer@AlpcServerHost@Registrar@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VAlpcServerAdapter@Registrar@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque CreateAlpcServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectClient@AlpcServerHost@Registrar@CoreUI@Microsoft@@AEAAXI@Z
    void DisconnectClient(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_Registrar_IAlpcServerHost_AcceptConnection$@AlpcServerHost@Registrar@CoreUI@Microsoft@@AEAA_NW4RegistrarClientCategory@234@UGuid@System@@IIUIntPtr@7@@Z
    bool Microsoft_CoreUI_Registrar_IAlpcServerHost_AcceptConnection$(int, ::System::Guid, unsigned int, unsigned int, ::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_Registrar_IAlpcServerHost_OnClientDisconnected$@AlpcServerHost@Registrar@CoreUI@Microsoft@@AEAAXUIntPtr@System@@@Z
    void Microsoft_CoreUI_Registrar_IAlpcServerHost_OnClientDisconnected$(::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueDisconnectClient@AlpcServerHost@Registrar@CoreUI@Microsoft@@AEAAXI@Z
    void QueueDisconnectClient(unsigned int);
};
} // namespace Microsoft::CoreUI::Registrar
