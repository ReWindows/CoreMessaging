#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 34 member(s).
namespace Microsoft::CoreUI::Registrar {
class AlpcRegistrarClientCaller {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeMaximumMessageSize@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAIXZ
    static unsigned int ComputeMaximumMessageSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConversationServerJoined@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@UIntPtr@System@@_KUConversationPeerInfo@Conversations@34@@Z
    static void OnConversationServerJoined(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, ::System::IntPtr, uint64_t, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEagerConversationClientConnectionFailure@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@UIntPtr@System@@_KW4MessagingResults@Messaging@34@@Z
    static void OnEagerConversationClientConnectionFailure(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, ::System::IntPtr, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@UIntPtr@System@@_KI@Z
    static void OnPeerDisconnected(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, ::System::IntPtr, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPendingConnectionTermination@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@UIntPtr@System@@W4RegistrarClientId@234@III@Z
    static void OnPendingConnectionTermination(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, ::System::IntPtr, int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProtocolException@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4ProtocolError@34@@Z
    static void OnProtocolException(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProtocolExceptionWithDiagnostics@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4ProtocolError@34@PEAVString@System@@2222222@Z
    static void OnProtocolExceptionWithDiagnostics(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int, ::System::String *, ::System::String *, ::System::String *, ::System::String *, ::System::String *, ::System::String *, ::System::String *, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ClientConversationAttached@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_ClientConversationAttached(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_CloseConnection@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@@Z
    static void Reply_CloseConnection(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_CompleteCrossProcConnection@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_CompleteCrossProcConnection(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_CompleteLocalConnection@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_CompleteLocalConnection(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ConnectPendingConversationClient@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@IW4RegistrarClientId@234@@Z
    static void Reply_ConnectPendingConversationClient(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_CrossProcClientDisconnected@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@@Z
    static void Reply_CrossProcClientDisconnected(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FindCrossProcConnection@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@III@Z
    static void Reply_FindCrossProcConnection(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FindObject@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@_NURoutingInfo@34@@Z
    static void Reply_FindObject(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int, bool, ::Microsoft::CoreUI::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FindPendingConversationClient@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@URoutingInfo@34@UHIDENTITY@34@@Z
    static void Reply_FindPendingConversationClient(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int, ::Microsoft::CoreUI::RoutingInfo, ::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FreeServerGroupIDForClient@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@@Z
    static void Reply_FreeServerGroupIDForClient(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_GetExtendedInformation@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@UExtendedRoutingInfo@34@@Z
    static void Reply_GetExtendedInformation(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int, ::Microsoft::CoreUI::ExtendedRoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_GetOrCreateReverseConnectionPortID@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@UGuid@System@@@Z
    static void Reply_GetOrCreateReverseConnectionPortID(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_LocalClientDisconnected@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@@Z
    static void Reply_LocalClientDisconnected(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_LookupCrossPartitionClient@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@II@Z
    static void Reply_LookupCrossPartitionClient(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_PrepareConnection@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@PEAVString@System@@UGuid@9@3UPendingConnection@234@@Z
    static void Reply_PrepareConnection(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int, ::System::String *, ::System::Guid, ::System::Guid, ::Microsoft::CoreUI::Registrar::PendingConnection);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterConversation@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@II_K@Z
    static void Reply_RegisterConversation(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int, unsigned int, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterConversationClient@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@I_KUConversationInfo@Conversations@34@PEAUConversationPeerInfo@934@I@Z
    static void Reply_RegisterConversationClient(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int, unsigned int, uint64_t, ::Microsoft::CoreUI::Conversations::ConversationInfo, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterObject@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_RegisterObject(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterPendingConversationClientForServer@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_RegisterPendingConversationClientForServer(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterPort@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@@Z
    static void Reply_RegisterPort(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterThread@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@W4RegistrarClientId@234@UGuid@System@@I@Z
    static void Reply_RegisterThread(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int, int, ::System::Guid, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ReleaseConversationClient@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@@Z
    static void Reply_ReleaseConversationClient(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ReleaseConversationClientConnection@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_ReleaseConversationClientConnection(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ReleaseConversationServer@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@@Z
    static void Reply_ReleaseConversationServer(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_UnregisterObject@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_UnregisterObject(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_UnregisterPort@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@@Z
    static void Reply_UnregisterPort(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_UnregisterReverseConnectionPort@AlpcRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVAlpcServerAdapter@234@@Z
    static void Reply_UnregisterReverseConnectionPort(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *);
};
} // namespace Microsoft::CoreUI::Registrar
