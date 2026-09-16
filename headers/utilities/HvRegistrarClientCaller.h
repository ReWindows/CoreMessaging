#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 36 member(s).
namespace Microsoft::CoreUI::Registrar {
class HvRegistrarClientCaller {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeMaximumMessageSize@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAIXZ
    static unsigned int ComputeMaximumMessageSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConversationServerJoined@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@UIntPtr@System@@1_KUConversationPeerInfo@Conversations@34@@Z
    static void OnConversationServerJoined(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, ::System::IntPtr, ::System::IntPtr, uint64_t, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEagerConversationClientConnectionFailure@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@UIntPtr@System@@1_KW4MessagingResults@Messaging@34@@Z
    static void OnEagerConversationClientConnectionFailure(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, ::System::IntPtr, ::System::IntPtr, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnected@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@UIntPtr@System@@1_KI@Z
    static void OnPeerDisconnected(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, ::System::IntPtr, ::System::IntPtr, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPendingConnectionTermination@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@UIntPtr@System@@1W4RegistrarClientId@234@III@Z
    static void OnPendingConnectionTermination(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, ::System::IntPtr, ::System::IntPtr, int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProtocolException@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4ProtocolError@34@@Z
    static void OnProtocolException(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProtocolExceptionWithDiagnostics@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4ProtocolError@34@PEAVString@System@@2222222@Z
    static void OnProtocolExceptionWithDiagnostics(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int, ::System::String *, ::System::String *, ::System::String *, ::System::String *, ::System::String *, ::System::String *, ::System::String *, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ClientConversationAttached@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_ClientConversationAttached(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_CloseConnection@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@@Z
    static void Reply_CloseConnection(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_CompleteCrossProcConnection@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_CompleteCrossProcConnection(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_CompleteLocalConnection@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_CompleteLocalConnection(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ConnectContainerThread@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@@Z
    static void Reply_ConnectContainerThread(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ConnectPendingConversationClient@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@IW4RegistrarClientId@234@@Z
    static void Reply_ConnectPendingConversationClient(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ContainerThreadDisconnected@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@@Z
    static void Reply_ContainerThreadDisconnected(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_CrossProcClientDisconnected@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@@Z
    static void Reply_CrossProcClientDisconnected(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FindCrossProcConnection@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@III@Z
    static void Reply_FindCrossProcConnection(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FindObject@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@_NURoutingInfo@34@@Z
    static void Reply_FindObject(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int, bool, ::Microsoft::CoreUI::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FindPendingConversationClient@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@URoutingInfo@34@UHIDENTITY@34@@Z
    static void Reply_FindPendingConversationClient(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int, ::Microsoft::CoreUI::RoutingInfo, ::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FreeServerGroupIDForClient@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@@Z
    static void Reply_FreeServerGroupIDForClient(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_GetExtendedInformation@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@UExtendedRoutingInfo@34@@Z
    static void Reply_GetExtendedInformation(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int, ::Microsoft::CoreUI::ExtendedRoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_GetOrCreateReverseConnectionPortID@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@UGuid@System@@@Z
    static void Reply_GetOrCreateReverseConnectionPortID(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_LocalClientDisconnected@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@@Z
    static void Reply_LocalClientDisconnected(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_LookupCrossPartitionClient@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@II@Z
    static void Reply_LookupCrossPartitionClient(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_PrepareConnection@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@PEAVString@System@@UGuid@9@3UPendingConnection@234@@Z
    static void Reply_PrepareConnection(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int, ::System::String *, ::System::Guid, ::System::Guid, ::Microsoft::CoreUI::Registrar::PendingConnection);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterConversation@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@II_K@Z
    static void Reply_RegisterConversation(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int, unsigned int, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterConversationClient@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@I_KUConversationInfo@Conversations@34@PEAUConversationPeerInfo@934@I@Z
    static void Reply_RegisterConversationClient(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int, unsigned int, uint64_t, ::Microsoft::CoreUI::Conversations::ConversationInfo, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterObject@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_RegisterObject(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterPendingConversationClientForServer@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_RegisterPendingConversationClientForServer(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterPort@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@@Z
    static void Reply_RegisterPort(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterThread@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@W4RegistrarClientId@234@UGuid@System@@I@Z
    static void Reply_RegisterThread(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int, int, ::System::Guid, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ReleaseConversationClient@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@@Z
    static void Reply_ReleaseConversationClient(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ReleaseConversationClientConnection@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_ReleaseConversationClientConnection(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ReleaseConversationServer@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@@Z
    static void Reply_ReleaseConversationServer(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_UnregisterObject@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@W4MessagingResults@Messaging@34@@Z
    static void Reply_UnregisterObject(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_UnregisterPort@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@@Z
    static void Reply_UnregisterPort(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_UnregisterReverseConnectionPort@HvRegistrarClientCaller@Registrar@CoreUI@Microsoft@@SAXPEAVHvRegistrarServerAdapter@234@@Z
    static void Reply_UnregisterReverseConnectionPort(::Microsoft::CoreUI::Registrar::HvRegistrarServerAdapter *);
};
} // namespace Microsoft::CoreUI::Registrar
