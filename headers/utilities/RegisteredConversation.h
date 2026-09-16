#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 26 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegisteredConversation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRefPeerID@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAAXI@Z
    void AddRefPeerID(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddServer@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAAXPEAVRegisteredConversationServer@234@@Z
    void AddServer(::Microsoft::CoreUI::Registrar::RegisteredConversationServer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocatePeerID@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAAIXZ
    unsigned int AllocatePeerID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateUniqueID@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAA_KI@Z
    uint64_t AllocateUniqueID(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupConnectionInfoIfPending@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAAXPEAVConversationClientConnectionInfo@234@@Z
    void CleanupConnectionInfoIfPending(::Microsoft::CoreUI::Registrar::ConversationClientConnectionInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RegisteredConversation@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@RegisteredConversation@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VRegisteredConversation@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@0IW4ConversationItemOwner@34@W4ConversationServerStyle@34@W4ConversationConnectionMode@34@UScopeID@234@PEAVRemoteRegistrarServer@234@_N6@Z
    static WindissectOpaque Create$(::System::String *, ::System::String *, unsigned int, int, int, int, ::Microsoft::CoreUI::Registrar::ScopeID, ::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClient@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@UIntPtr@System@@0PEAVRegistrarThreadContext@234@PEAVEagerConversationClientSettings@234@U?$Ref@V?$SmartPtr@VRegisteredConversationClient@Registrar@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    int CreateClient(::System::IntPtr, ::System::IntPtr, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::Microsoft::CoreUI::Registrar::EagerConversationClientSettings *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePendingClient@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VConversationClientConnectionInfo@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVRegistrarThreadContext@234@PEAVRegisteredConversationServer@234@UConversationPeerInfo@Conversations@34@@Z
    WindissectOpaque CreatePendingClient(::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::Microsoft::CoreUI::Registrar::RegisteredConversationServer *, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RegisteredConversation@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectServer@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAAXPEAVRemoteRegistrarServer@234@PEAVRegisteredConversationServer@234@_N@Z
    void DisconnectServer(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::Microsoft::CoreUI::Registrar::RegisteredConversationServer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFixedSettingsAndValidateEagerClients@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAAXPEAVRemoteRegistrarServer@234@PEAVString@System@@W4ConversationItemOwner@34@W4ConversationServerStyle@34@W4ConversationConnectionMode@34@@Z
    void EnsureFixedSettingsAndValidateEagerClients(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::String *, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPeerIDFromUniqueID@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAAI_K@Z
    unsigned int GetPeerIDFromUniqueID(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RegisteredConversation@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePeerID@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAAXI@Z
    void ReleasePeerID(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseUniqueID@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAAX_K@Z
    void ReleaseUniqueID(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveClient@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAAXPEAVRegisteredConversationClient@234@_N@Z
    void RemoveClient(::Microsoft::CoreUI::Registrar::RegisteredConversationClient *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendClientDisconnectedNotificationsToServersIfNecessary@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAAXPEAVRemoteRegistrarServer@234@PEAVRegisteredConversationClient@234@@Z
    void SendClientDisconnectedNotificationsToServersIfNecessary(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::Microsoft::CoreUI::Registrar::RegisteredConversationClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendServerDisconnectedNotificationsToClientsIfNecessary@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAAXPEAVRemoteRegistrarServer@234@PEAVRegisteredConversationServer@234@@Z
    void SendServerDisconnectedNotificationsToClientsIfNecessary(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::Microsoft::CoreUI::Registrar::RegisteredConversationServer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetClient@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAA_NIPEAVRegistrarThreadContext@234@U?$Ref@V?$SmartPtr@VRegisteredConversationClient@Registrar@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    bool TryGetClient(unsigned int, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetServer@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAA_NIPEAVRegistrarThreadContext@234@U?$Ref@V?$SmartPtr@VRegisteredConversationServer@Registrar@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    bool TryGetServer(unsigned int, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSinglePersistentManualServer@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsSinglePersistentManualServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ServerPeerIDs@RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAA?AU?$Map$2$KeyCollection@IV?$SmartPtr@VObject@System@@@CFlat@@@@XZ
    Map$2$KeyCollection<unsigned int, WindissectOpaque > get_ServerPeerIDs();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegisteredConversation@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~RegisteredConversation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@RegisteredConversation@Registrar@CoreUI@Microsoft@@IEAAXPEAVString@System@@0IW4ConversationItemOwner@34@W4ConversationServerStyle@34@W4ConversationConnectionMode@34@UScopeID@234@PEAVRemoteRegistrarServer@234@_N6@Z
    void Init$(::System::String *, ::System::String *, unsigned int, int, int, int, ::Microsoft::CoreUI::Registrar::ScopeID, ::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseListOfClientConnections@RegisteredConversation@Registrar@CoreUI@Microsoft@@AEAAXU?$Map$2$ValueCollection@IV?$SmartPtr@VObject@System@@@CFlat@@@@@Z
    void ReleaseListOfClientConnections(Map$2$ValueCollection<unsigned int, WindissectOpaque >);
};
} // namespace Microsoft::CoreUI::Registrar
