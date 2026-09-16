#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 35 member(s).
namespace Microsoft::CoreUI::Registrar {
class RemoteRegistrarClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientConversationAttached@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@UScopeID@234@II@Z
    int ClientConversationAttached(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseConnection@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXW4RegistrarClientId@234@IIUGuid@System@@II@Z
    void CloseConnection(int, unsigned int, unsigned int, ::System::Guid, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteCrossProcConnection@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@W4RegistrarClientId@234@IUGuid@System@@@Z
    int CompleteCrossProcConnection(int, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteLocalConnection@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@W4RegistrarClientId@234@II@Z
    int CompleteLocalConnection(int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@SAXPEAVRegistrarClient@234@U?$Ref@V?$SmartPtr@VRemoteRegistrarClient@Registrar@CoreUI@Microsoft@@@CFlat@@@CFlat@@U?$Ref@W4RegistrarClientId@Registrar@CoreUI@Microsoft@@@7@U?$Ref@UGuid@System@@@7@U?$Ref@I@7@@Z
    static void Connect(::Microsoft::CoreUI::Registrar::RegistrarClient *, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectPendingConversationClient@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@UScopeID@234@I_KIUGuid@8@U?$Ref@I@CFlat@@U?$Ref@W4RegistrarClientId@Registrar@CoreUI@Microsoft@@@CFlat@@@Z
    int ConnectPendingConversationClient(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, uint64_t, unsigned int, ::System::Guid, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CrossProcClientDisconnected@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXI@Z
    void CrossProcClientDisconnected(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCrossProcConnection@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@W4RegistrarClientId@234@UGuid@System@@_NU?$Ref@I@CFlat@@33@Z
    int FindCrossProcConnection(int, ::System::Guid, bool, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindObject@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@UScopeID@234@W4RegisteredObjectType@234@U?$Ref@_N@CFlat@@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@@Z
    int FindObject(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPendingConversationClient@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@UScopeID@234@I_KIUGuid@8@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@U?$Ref@UHIDENTITY@CoreUI@Microsoft@@@CFlat@@@Z
    int FindPendingConversationClient(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, uint64_t, unsigned int, ::System::Guid, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeServerGroupIdForClient@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXI@Z
    void FreeServerGroupIdForClient(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateReverseConnectionPortId@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@U?$Ref@UGuid@System@@@CFlat@@@Z
    void GetOrCreateReverseConnectionPortId(::System::Guid, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalClientDisconnected@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXI@Z
    void LocalClientDisconnected(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConversationServerJoined@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAAX_KUConversationPeerInfo@Conversations@34@@Z
    void OnConversationServerJoined(uint64_t, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareConnection@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@W4RegistrarClientId@234@IIUGuid@System@@U?$Ref@V?$SmartPtr@VString@System@@@CFlat@@@CFlat@@U?$Ref@UGuid@System@@@CFlat@@3U?$Ref@_N@CFlat@@3U?$Ref@UHIDENTITY@CoreUI@Microsoft@@@CFlat@@5U?$Ref@I@CFlat@@6@Z
    int PrepareConnection(int, unsigned int, unsigned int, ::System::Guid, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConversation@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@0UScopeID@234@W4ConversationItemOwner@34@W4ConversationServerStyle@34@W4ConversationConnectionMode@34@URoutingInfo@34@5U?$Ref@I@CFlat@@6U?$Ref@_K@CFlat@@@Z
    int RegisterConversation(::System::String *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int, int, int, ::Microsoft::CoreUI::RoutingInfo, ::Microsoft::CoreUI::RoutingInfo, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConversationClient@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVConversationClient@Conversations@34@W4ConversationConnectionMode@34@UEagerConversationConfiguration@234@U?$Ref@I@CFlat@@U?$Ref@_K@CFlat@@U?$Ref@UConversationInfo@Conversations@CoreUI@Microsoft@@@CFlat@@U?$Ref@V?$SmartPtr@V?$Array$2@UConversationPeerInfo@Conversations@CoreUI@Microsoft@@$00@CFlat@@@CFlat@@@CFlat@@@Z
    int RegisterConversationClient(::Microsoft::CoreUI::Conversations::ConversationClient *, int, ::Microsoft::CoreUI::Registrar::EagerConversationConfiguration, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterObject@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@UScopeID@234@UHIDENTITY@34@UGuid@8@W4RegisteredObjectType@234@@Z
    int RegisterObject(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, ::Microsoft::CoreUI::HIDENTITY, ::System::Guid, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPendingConversationClientForServer@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVConversationClient@Conversations@34@IUConversationPeerInfo@834@@Z
    int RegisterPendingConversationClientForServer(::Microsoft::CoreUI::Conversations::ConversationClient *, unsigned int, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPort@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@PEAVString@6@PEAU56@@Z
    void RegisterPort(::System::Guid, ::System::String *, ::System::Guid *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationClient@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@I@Z
    void ReleaseConversationClient(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationClientConnection@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@UScopeID@234@III@Z
    int ReleaseConversationClientConnection(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationServer@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@I@Z
    void ReleaseConversationServer(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterObject@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@UScopeID@234@W4RegisteredObjectType@234@@Z
    int UnregisterObject(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterPort@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@@Z
    void UnregisterPort(::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterReverseConnectionPort@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@@Z
    void UnregisterReverseConnectionPort(::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RegistrarProcessId@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_RegistrarProcessId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ServerCallerHost@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA?AU?$InterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_ServerCallerHost();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~RemoteRegistrarClient();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoConnect@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@CAHPEAV1234@_N@Z
    static int DoConnect(::Microsoft::CoreUI::Registrar::RemoteRegistrarClient *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThread@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@AEAAXU?$Ref@W4RegistrarClientId@Registrar@CoreUI@Microsoft@@@CFlat@@U?$Ref@UGuid@System@@@6@U?$Ref@I@6@@Z
    void RegisterThread(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForServiceStartup@RemoteRegistrarClient@Registrar@CoreUI@Microsoft@@CA_NXZ
    static bool WaitForServiceStartup();
};
} // namespace Microsoft::CoreUI::Registrar
