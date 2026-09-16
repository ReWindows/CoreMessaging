#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 43 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegistrarClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RegistrarClient@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientConversationAttached@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@UScopeID@234@II@Z
    int ClientConversationAttached(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseConnection@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXPEAVConnection@Messaging@34@@Z
    void CloseConnection(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteCrossProcConnection@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@W4RegistrarClientId@234@IUGuid@System@@I@Z
    int CompleteCrossProcConnection(int, unsigned int, ::System::Guid, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteLocalConnection@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@W4RegistrarClientId@234@II@Z
    int CompleteLocalConnection(int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@RegistrarClient@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VRegistrarClient@Registrar@CoreUI@Microsoft@@@CFlat@@XZ
    static WindissectOpaque Create$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CrossProcClientDisconnected@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXI@Z
    void CrossProcClientDisconnected(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RegistrarClient@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueuePendingConnectionTerminated@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXW4RegistrarClientId@234@III@Z
    void EnqueuePendingConnectionTerminated(int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindConnection@RegistrarClient@Registrar@CoreUI@Microsoft@@SA_NIU?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@U?$Ref@_N@6@@Z
    static bool FindConnection(unsigned int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCrossProcConnection@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@W4RegistrarClientId@234@UGuid@System@@_NU?$Ref@I@CFlat@@33@Z
    int FindCrossProcConnection(int, ::System::Guid, bool, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCrossProcessReceivePort@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@UScopeID@234@U?$Ref@_N@CFlat@@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@@Z
    int FindCrossProcessReceivePort(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindEndpoint@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@W4RegistrarScope@34@IU?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@@Z
    int FindEndpoint(::System::String *, int, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXPEAVIdentityTableView@Identity@34@PEAVThreadContext@Dispatch@34@U?$Ref@UHIDENTITY@CoreUI@Microsoft@@@CFlat@@2@Z
    void Initialize(::Microsoft::CoreUI::Identity::IdentityTableView *, WindissectOpaque *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeClass@RegistrarClient@Registrar@CoreUI@Microsoft@@SAX_N@Z
    static void InitializeClass(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalClientDisconnected@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXI@Z
    void LocalClientDisconnected(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RegistrarClient@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareConnection@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@W4RegistrarClientId@234@IIUGuid@System@@U?$Ref@V?$SmartPtr@VString@System@@@CFlat@@@CFlat@@U?$Ref@UGuid@System@@@CFlat@@3U?$Ref@_N@CFlat@@3U?$Ref@UHIDENTITY@CoreUI@Microsoft@@@CFlat@@5U?$Ref@I@CFlat@@6@Z
    int PrepareConnection(int, unsigned int, unsigned int, ::System::Guid, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConnection@RegistrarClient@Registrar@CoreUI@Microsoft@@SAIU?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@_N1@Z
    static unsigned int RegisterConnection(WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConversationClient@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVConversationClient@Conversations@34@W4ConversationConnectionMode@34@UEagerConversationConfiguration@234@U?$Ref@I@CFlat@@U?$Ref@_K@CFlat@@U?$Ref@UConversationInfo@Conversations@CoreUI@Microsoft@@@CFlat@@U?$Ref@V?$SmartPtr@V?$Array$2@UConversationPeerInfo@Conversations@CoreUI@Microsoft@@$00@CFlat@@@CFlat@@@CFlat@@@Z
    int RegisterConversationClient(::Microsoft::CoreUI::Conversations::ConversationClient *, int, ::Microsoft::CoreUI::Registrar::EagerConversationConfiguration, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCrossProcessReceivePort@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@PEAVCrossProcessReceivePortBase@634@@Z
    int RegisterCrossProcessReceivePort(::System::String *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEndpoint@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@PEAVMessageEndpoint@634@W4RegistrarScope@34@@Z
    int RegisterEndpoint(::System::String *, WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPendingConversationClientForServer@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVConversationClient@Conversations@34@IUConversationPeerInfo@834@@Z
    int RegisterPendingConversationClientForServer(::Microsoft::CoreUI::Conversations::ConversationClient *, unsigned int, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationClientConnection@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@UScopeID@234@III@Z
    int ReleaseConversationClientConnection(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterConnection@RegistrarClient@Registrar@CoreUI@Microsoft@@SAXI@Z
    static void UnregisterConnection(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCrossProcessReceivePort@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@UScopeID@234@@Z
    int UnregisterCrossProcessReceivePort(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterEndpoint@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@W4RegistrarScope@34@@Z
    int UnregisterEndpoint(::System::String *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateConnectionId@RegistrarClient@Registrar@CoreUI@Microsoft@@SA_NI@Z
    static bool ValidateConnectionId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_PendingConnectionTermination@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXPEAVRegistrarClient$OnPendingConnectionTerminationHandler@234@@Z
    void add_PendingConnectionTermination(::Microsoft::CoreUI::Registrar::RegistrarClient$OnPendingConnectionTerminationHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_PendingConnectionTermination@RegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXPEAVRegistrarClient$OnPendingConnectionTerminationHandler@234@@Z
    void remove_PendingConnectionTermination(::Microsoft::CoreUI::Registrar::RegistrarClient$OnPendingConnectionTerminationHandler *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistrarClient@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~RegistrarClient();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@RegistrarClient@Registrar@CoreUI@Microsoft@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(::CFlat::ComExportAdapterContainer *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@RegistrarClient@Registrar@CoreUI@Microsoft@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToRegistrarServer@RegistrarClient@Registrar@CoreUI@Microsoft@@AEAAXXZ
    void ConnectToRegistrarServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindEndpointAPIWorker@RegistrarClient@Registrar@CoreUI@Microsoft@@AEAA?AURoutingInfo@34@PEAVString@System@@W4RegistrarScope@34@I@Z
    ::Microsoft::CoreUI::RoutingInfo FindEndpointAPIWorker(::System::String *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirePendingConnectionTerminated@RegistrarClient@Registrar@CoreUI@Microsoft@@AEAAXW4RegistrarClientId@234@III@Z
    void FirePendingConnectionTerminated(int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageRegistrar_FindEndpoint$@RegistrarClient@Registrar@CoreUI@Microsoft@@AEAA?AUHENDPOINT@34@PEAVString@System@@W4ExternalRegistrarScope@34@@Z
    ::Microsoft::CoreUI::HENDPOINT Microsoft_CoreUI_IExportMessageRegistrar_FindEndpoint$(::System::String *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageRegistrar_FindEndpointInfo$@RegistrarClient@Registrar@CoreUI@Microsoft@@AEAA?AURoutingInfo@34@PEAVString@System@@W4ExternalRegistrarScope@34@@Z
    ::Microsoft::CoreUI::RoutingInfo Microsoft_CoreUI_IExportMessageRegistrar_FindEndpointInfo$(::System::String *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageRegistrar_PublishEndpoint$@RegistrarClient@Registrar@CoreUI@Microsoft@@AEAAXPEAVString@System@@UHENDPOINT@34@W4ExternalRegistrarScope@34@@Z
    void Microsoft_CoreUI_IExportMessageRegistrar_PublishEndpoint$(::System::String *, ::Microsoft::CoreUI::HENDPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenEndpointAPIWorker@RegistrarClient@Registrar@CoreUI@Microsoft@@AEAA?AUHENDPOINT@34@IU?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@@Z
    ::Microsoft::CoreUI::HENDPOINT OpenEndpointAPIWorker(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateBareScope@RegistrarClient@Registrar@CoreUI@Microsoft@@AEAA?AW4RegistrarScope@34@W4ExternalRegistrarScope@34@@Z
    int TranslateBareScope(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRegistrarScope@RegistrarClient@Registrar@CoreUI@Microsoft@@AEAAXW4RegistrarScope@34@@Z
    void ValidateRegistrarScope(int);
};
} // namespace Microsoft::CoreUI::Registrar
