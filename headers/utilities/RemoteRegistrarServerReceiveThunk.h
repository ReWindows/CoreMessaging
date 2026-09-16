#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 13 member(s).
namespace Microsoft::CoreUI::Registrar {
class RemoteRegistrarServerReceiveThunk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientConversationAttached@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEB_WPEAUScopeID@234@II@Z
    long ClientConversationAttached(wchar_t const *, ::Microsoft::CoreUI::Registrar::ScopeID *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectPendingConversationClient@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEB_WPEAUScopeID@234@I_KIPEAU_GUID@@@Z
    long ConnectPendingConversationClient(wchar_t const *, ::Microsoft::CoreUI::Registrar::ScopeID *, unsigned int, uint64_t, unsigned int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindObject@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEB_WPEAUScopeID@234@W4RegisteredObjectType@234@@Z
    long FindObject(wchar_t const *, ::Microsoft::CoreUI::Registrar::ScopeID *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPendingConversationClient@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEB_WPEAUScopeID@234@I_KIPEAU_GUID@@@Z
    long FindPendingConversationClient(wchar_t const *, ::Microsoft::CoreUI::Registrar::ScopeID *, unsigned int, uint64_t, unsigned int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConversation@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEB_W0PEAUScopeID@234@PEAUConversationInfo@Conversations@34@PEAURoutingInfo@34@PEAUHIDENTITY@34@@Z
    long RegisterConversation(wchar_t const *, wchar_t const *, ::Microsoft::CoreUI::Registrar::ScopeID *, ::Microsoft::CoreUI::Conversations::ConversationInfo *, ::Microsoft::CoreUI::RoutingInfo *, ::Microsoft::CoreUI::HIDENTITY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConversationClient@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEB_WPEAUScopeID@234@W4MsgConversationConnectionMode@@_N0W4MsgConversationItemOwner@@W4MsgConversationServerStyle@@@Z
    long RegisterConversationClient(wchar_t const *, ::Microsoft::CoreUI::Registrar::ScopeID *, int, bool, wchar_t const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterObject@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEB_WPEAUScopeID@234@PEAUHIDENTITY@34@PEAU_GUID@@W4RegisteredObjectType@234@@Z
    long RegisterObject(wchar_t const *, ::Microsoft::CoreUI::Registrar::ScopeID *, ::Microsoft::CoreUI::HIDENTITY *, _GUID *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPendingConversationClientForServer@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEB_WPEAUScopeID@234@IPEAUConversationPeerInfo@Conversations@34@@Z
    long RegisterPendingConversationClientForServer(wchar_t const *, ::Microsoft::CoreUI::Registrar::ScopeID *, unsigned int, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPort@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEAU_GUID@@PEB_W0@Z
    long RegisterPort(_GUID *, wchar_t const *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationClient@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEB_WPEAUScopeID@234@I@Z
    long ReleaseConversationClient(wchar_t const *, ::Microsoft::CoreUI::Registrar::ScopeID *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationClientConnection@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEB_WPEAUScopeID@234@III@Z
    long ReleaseConversationClientConnection(wchar_t const *, ::Microsoft::CoreUI::Registrar::ScopeID *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationServer@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEB_WPEAUScopeID@234@I@Z
    long ReleaseConversationServer(wchar_t const *, ::Microsoft::CoreUI::Registrar::ScopeID *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterObject@RemoteRegistrarServerReceiveThunk@Registrar@CoreUI@Microsoft@@QEAAJPEB_WPEAUScopeID@234@W4RegisteredObjectType@234@@Z
    long UnregisterObject(wchar_t const *, ::Microsoft::CoreUI::Registrar::ScopeID *, int);
};
} // namespace Microsoft::CoreUI::Registrar
