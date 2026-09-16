#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 17 member(s).
namespace Microsoft::CoreUI::Registrar {
class ServerConversationOperations {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupForDepartedThread@ServerConversationOperations@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVRegistrarThreadContext@234@@Z
    static void CleanupForDepartedThread(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientConversationAttached@ServerConversationOperations@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVString@System@@UScopeID@234@II@Z
    static void ClientConversationAttached(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectPendingConversationClient@ServerConversationOperations@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVString@System@@UScopeID@234@I_KIUGuid@7@@Z
    static void ConnectPendingConversationClient(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, uint64_t, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPendingConversationClient@ServerConversationOperations@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVString@System@@UScopeID@234@I_KIUGuid@7@@Z
    static void FindPendingConversationClient(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, uint64_t, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConversation@ServerConversationOperations@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVString@System@@1UScopeID@234@UConversationInfo@Conversations@34@URoutingInfo@34@UHIDENTITY@34@@Z
    static void RegisterConversation(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::String *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, ::Microsoft::CoreUI::Conversations::ConversationInfo, ::Microsoft::CoreUI::RoutingInfo, ::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConversationClient@ServerConversationOperations@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVString@System@@UScopeID@234@W4ConversationConnectionMode@34@UEagerConversationConfiguration@234@@Z
    static void RegisterConversationClient(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int, ::Microsoft::CoreUI::Registrar::EagerConversationConfiguration);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPendingConversationClientForServer@ServerConversationOperations@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVString@System@@UScopeID@234@IUConversationPeerInfo@Conversations@34@@Z
    static void RegisterPendingConversationClientForServer(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationClient@ServerConversationOperations@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVString@System@@UScopeID@234@I@Z
    static void ReleaseConversationClient(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationClientConnection@ServerConversationOperations@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVString@System@@UScopeID@234@III@Z
    static void ReleaseConversationClientConnection(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationServer@ServerConversationOperations@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVString@System@@UScopeID@234@I@Z
    static void ReleaseConversationServer(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterConversation@ServerConversationOperations@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVString@System@@UScopeID@234@@Z
    static void UnregisterConversation(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConjurePendingConversationClient@ServerConversationOperations@Registrar@CoreUI@Microsoft@@CA?AV?$SmartPtr@VConversationClientConnectionInfo@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVRegisteredConversation@234@IIPEAVRegisteredConversationServer@234@@Z
    static WindissectOpaque ConjurePendingConversationClient(::Microsoft::CoreUI::Registrar::RegisteredConversation *, unsigned int, unsigned int, ::Microsoft::CoreUI::Registrar::RegisteredConversationServer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEagerConversation@ServerConversationOperations@Registrar@CoreUI@Microsoft@@CA?AW4MessagingResults@Messaging@34@PEAVRemoteRegistrarServer@234@PEAVRegistrationNameMaps@234@PEAVString@System@@UScopeID@234@W4ConversationConnectionMode@34@UEagerConversationConfiguration@234@U?$Ref@UServerConversationOperations$ConversationSettings@Registrar@CoreUI@Microsoft@@@CFlat@@U?$Ref@V?$SmartPtr@VRegisteredConversation@Registrar@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    static int CreateEagerConversation(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::Microsoft::CoreUI::Registrar::RegistrationNameMaps *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int, ::Microsoft::CoreUI::Registrar::EagerConversationConfiguration, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TellClientAboutNewServer@ServerConversationOperations@Registrar@CoreUI@Microsoft@@CAXPEAVRemoteRegistrarServer@234@PEAVRegisteredConversationClient@234@PEAVRegisteredConversationServer@234@@Z
    static void TellClientAboutNewServer(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::Microsoft::CoreUI::Registrar::RegisteredConversationClient *, ::Microsoft::CoreUI::Registrar::RegisteredConversationServer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TellClientsAboutNewServer@ServerConversationOperations@Registrar@CoreUI@Microsoft@@CAXPEAVRemoteRegistrarServer@234@PEAVRegisteredConversation@234@PEAVRegisteredConversationServer@234@@Z
    static void TellClientsAboutNewServer(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::Microsoft::CoreUI::Registrar::RegisteredConversation *, ::Microsoft::CoreUI::Registrar::RegisteredConversationServer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateClientConnectionSettings@ServerConversationOperations@Registrar@CoreUI@Microsoft@@CA?AW4MessagingResults@Messaging@34@PEAVRegisteredConversation@234@W4ConversationConnectionMode@34@UEagerConversationConfiguration@234@U?$Ref@UServerConversationOperations$ConversationSettings@Registrar@CoreUI@Microsoft@@@CFlat@@@Z
    static int ValidateClientConnectionSettings(::Microsoft::CoreUI::Registrar::RegisteredConversation *, int, ::Microsoft::CoreUI::Registrar::EagerConversationConfiguration, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyAndGetClientVmId@ServerConversationOperations@Registrar@CoreUI@Microsoft@@CA?AUGuid@System@@PEAVRemoteRegistrarServer@234@PEAVConversationClientConnectionInfo@234@U56@U?$Ref@_N@CFlat@@@Z
    static ::System::Guid VerifyAndGetClientVmId(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::Microsoft::CoreUI::Registrar::ConversationClientConnectionInfo *, ::System::Guid, WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Registrar
