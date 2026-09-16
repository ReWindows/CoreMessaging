#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 24 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegistrarClientCaller {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConversationServerJoined@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVRegisteredConversationClient@234@UConversationPeerInfo@Conversations@34@@Z
    static void OnConversationServerJoined(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::Microsoft::CoreUI::Registrar::RegisteredConversationClient *, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEagerConversationClientConnectionFailure@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVRegisteredConversationClient@234@W4MessagingResults@Messaging@34@@Z
    static void OnEagerConversationClientConnectionFailure(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::Microsoft::CoreUI::Registrar::RegisteredConversationClient *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@_NUIntPtr@System@@2_KI@Z
    static void OnPeerDisconnected(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, bool, ::System::IntPtr, ::System::IntPtr, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPendingConnectionTermination@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@PEAVRegistrarThreadContext@234@W4RegistrarClientId@234@III@Z
    static void OnPendingConnectionTermination(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ClientConversationAttached@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_ClientConversationAttached(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_CloseConnection@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@@Z
    static void Reply_CloseConnection(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_CompleteCrossProcConnection@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_CompleteCrossProcConnection(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_CompleteLocalConnection@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_CompleteLocalConnection(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ConnectPendingConversationClient@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@IW4RegistrarClientId@234@@Z
    static void Reply_ConnectPendingConversationClient(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FindCrossProcConnection@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@III@Z
    static void Reply_FindCrossProcConnection(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FindObject@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@_NURoutingInfo@34@@Z
    static void Reply_FindObject(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int, bool, ::Microsoft::CoreUI::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FindPendingConversationClient@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@URoutingInfo@34@UHIDENTITY@34@@Z
    static void Reply_FindPendingConversationClient(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int, ::Microsoft::CoreUI::RoutingInfo, ::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_GetExtendedInformation@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@UExtendedRoutingInfo@34@@Z
    static void Reply_GetExtendedInformation(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int, ::Microsoft::CoreUI::ExtendedRoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_GetOrCreateReverseConnectionPortID@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@UGuid@System@@@Z
    static void Reply_GetOrCreateReverseConnectionPortID(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_PrepareConnection@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@PEAVString@System@@UGuid@9@3UPendingConnection@234@@Z
    static void Reply_PrepareConnection(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int, ::System::String *, ::System::Guid, ::System::Guid, ::Microsoft::CoreUI::Registrar::PendingConnection);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterConversation@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@II_K@Z
    static void Reply_RegisterConversation(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int, unsigned int, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterConversationClient@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@I_KUConversationInfo@Conversations@34@PEAUConversationPeerInfo@934@I@Z
    static void Reply_RegisterConversationClient(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int, unsigned int, uint64_t, ::Microsoft::CoreUI::Conversations::ConversationInfo, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterPendingConversationClientForServer@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_RegisterPendingConversationClientForServer(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterThread@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@W4RegistrarClientId@234@UGuid@System@@I@Z
    static void Reply_RegisterThread(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int, int, ::System::Guid, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ReleaseConversationClient@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@@Z
    static void Reply_ReleaseConversationClient(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ReleaseConversationClientConnection@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_ReleaseConversationClientConnection(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_UnregisterObject@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_UnregisterObject(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_UnregisterPort@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@@Z
    static void Reply_UnregisterPort(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_UnregisterReverseConnectionPort@RegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVRemoteRegistrarServer@234@@Z
    static void Reply_UnregisterReverseConnectionPort(::Microsoft::CoreUI::Registrar::RemoteRegistrarServer *);
};
} // namespace Microsoft::CoreUI::Registrar
