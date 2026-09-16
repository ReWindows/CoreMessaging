#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 67 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegistrarServerCaller {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientConversationAttached@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@II@Z
    static int ClientConversationAttached(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseConnection@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UPendingConnection@234@@Z
    static int CloseConnection(WindissectOpaque, ::Microsoft::CoreUI::Registrar::PendingConnection);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteCrossProcConnection@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4RegistrarClientId@234@IUGuid@System@@@Z
    static int CompleteCrossProcConnection(WindissectOpaque, int, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteLocalConnection@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4RegistrarClientId@234@II@Z
    static int CompleteLocalConnection(WindissectOpaque, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectPendingConversationClient@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@I_KIUGuid@System@@U?$Ref@I@8@U?$Ref@W4RegistrarClientId@Registrar@CoreUI@Microsoft@@@8@@Z
    static int ConnectPendingConversationClient(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, uint64_t, unsigned int, ::System::Guid, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerThreadDisconnected@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@@Z
    static int ContainerThreadDisconnected(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CrossProcClientDisconnected@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@I@Z
    static int CrossProcClientDisconnected(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCrossProcConnection@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@_NW4RegistrarClientId@234@UGuid@System@@U?$Ref@I@8@44@Z
    static int FindCrossProcConnection(WindissectOpaque, bool, int, ::System::Guid, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindObject@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@W4RegisteredObjectType@234@U?$Ref@_N@8@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@8@@Z
    static int FindObject(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPendingConversationClient@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@I_KIUGuid@System@@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@8@U?$Ref@UHIDENTITY@CoreUI@Microsoft@@@8@@Z
    static int FindPendingConversationClient(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, uint64_t, unsigned int, ::System::Guid, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeServerGroupIDForClient@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@I@Z
    static void FreeServerGroupIDForClient(WindissectOpaque, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendedInformation@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@U?$In@URoutingInfo@CoreUI@Microsoft@@@8@U?$Ref@UExtendedRoutingInfo@CoreUI@Microsoft@@@8@@Z
    static int GetExtendedInformation(WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateReverseConnectionPortID@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UGuid@System@@U?$Ref@UGuid@System@@@8@@Z
    static int GetOrCreateReverseConnectionPortID(WindissectOpaque, ::System::Guid, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalClientDisconnected@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@I@Z
    static int LocalClientDisconnected(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupCrossPartitionClient@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAUGuid@System@@W4RegistrarClientId@234@U?$Ref@I@8@3@Z
    static int LookupCrossPartitionClient(WindissectOpaque, ::System::Guid *, int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupCrossPartitionClient_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAUGuid@System@@W4RegistrarClientId@234@@Z
    static int LookupCrossPartitionClient_MessageCall(WindissectOpaque, ::System::Guid *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareConnection@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UPendingConnection@234@U?$Ref@V?$SmartPtr@VString@System@@@CFlat@@@8@U?$Ref@UGuid@System@@@8@3U?$Ref@UPendingConnection@Registrar@CoreUI@Microsoft@@@8@@Z
    static int PrepareConnection(WindissectOpaque, ::Microsoft::CoreUI::Registrar::PendingConnection, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConversation@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@1UScopeID@234@UConversationInfo@Conversations@34@URoutingInfo@34@UHIDENTITY@34@U?$Ref@I@8@6U?$Ref@_K@8@@Z
    static int RegisterConversation(WindissectOpaque, ::System::String *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, ::Microsoft::CoreUI::Conversations::ConversationInfo, ::Microsoft::CoreUI::RoutingInfo, ::Microsoft::CoreUI::HIDENTITY, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConversationClient@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@W4ConversationConnectionMode@34@UEagerConversationConfiguration@234@U?$Ref@I@8@U?$Ref@_K@8@U?$Ref@UConversationInfo@Conversations@CoreUI@Microsoft@@@8@U?$Ref@V?$SmartPtr@V?$Array$2@UConversationPeerInfo@Conversations@CoreUI@Microsoft@@$00@CFlat@@@CFlat@@@8@@Z
    static int RegisterConversationClient(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int, ::Microsoft::CoreUI::Registrar::EagerConversationConfiguration, WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterObject@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@UHIDENTITY@34@UGuid@System@@W4RegisteredObjectType@234@@Z
    static int RegisterObject(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, ::Microsoft::CoreUI::HIDENTITY, ::System::Guid, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPendingConversationClientForServer@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@IUConversationPeerInfo@Conversations@34@@Z
    static int RegisterPendingConversationClientForServer(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPort@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UGuid@System@@PEAVString@System@@PEAU9System@@@Z
    static int RegisterPort(WindissectOpaque, ::System::Guid, ::System::String *, ::System::Guid *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThread@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@U?$Ref@W4RegistrarClientId@Registrar@CoreUI@Microsoft@@@8@U?$Ref@UGuid@System@@@8@U?$Ref@I@8@@Z
    static int RegisterThread(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationClient@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@I@Z
    static void ReleaseConversationClient(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationClientConnection@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@III@Z
    static int ReleaseConversationClientConnection(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationServer@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@I@Z
    static void ReleaseConversationServer(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_ConnectPendingConversationClient@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4MessagingResults@Messaging@34@IW4RegistrarClientId@234@@Z
    static void Reply_ConnectPendingConversationClient(WindissectOpaque, int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FindCrossProcConnection@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4MessagingResults@Messaging@34@III@Z
    static void Reply_FindCrossProcConnection(WindissectOpaque, int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FindObject@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4MessagingResults@Messaging@34@_NURoutingInfo@34@@Z
    static void Reply_FindObject(WindissectOpaque, int, bool, ::Microsoft::CoreUI::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_FindPendingConversationClient@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4MessagingResults@Messaging@34@URoutingInfo@34@UHIDENTITY@34@@Z
    static void Reply_FindPendingConversationClient(WindissectOpaque, int, ::Microsoft::CoreUI::RoutingInfo, ::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_GetExtendedInformation@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4MessagingResults@Messaging@34@UExtendedRoutingInfo@34@@Z
    static void Reply_GetExtendedInformation(WindissectOpaque, int, ::Microsoft::CoreUI::ExtendedRoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_GetOrCreateReverseConnectionPortID@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UGuid@System@@@Z
    static void Reply_GetOrCreateReverseConnectionPortID(WindissectOpaque, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_LookupCrossPartitionClient@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4MessagingResults@Messaging@34@II@Z
    static void Reply_LookupCrossPartitionClient(WindissectOpaque, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_PrepareConnection@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4MessagingResults@Messaging@34@PEAVString@System@@UGuid@System@@3UPendingConnection@234@@Z
    static void Reply_PrepareConnection(WindissectOpaque, int, ::System::String *, ::System::Guid, ::System::Guid, ::Microsoft::CoreUI::Registrar::PendingConnection);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterConversation@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4MessagingResults@Messaging@34@II_K@Z
    static void Reply_RegisterConversation(WindissectOpaque, int, unsigned int, unsigned int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterConversationClient@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4MessagingResults@Messaging@34@I_KUConversationInfo@Conversations@34@PEAUConversationPeerInfo@Conversations@34@I@Z
    static void Reply_RegisterConversationClient(WindissectOpaque, int, unsigned int, uint64_t, ::Microsoft::CoreUI::Conversations::ConversationInfo, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reply_RegisterThread@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SAXU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4MessagingResults@Messaging@34@W4RegistrarClientId@234@UGuid@System@@I@Z
    static void Reply_RegisterThread(WindissectOpaque, int, int, ::System::Guid, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterObject@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@W4RegisteredObjectType@234@@Z
    static int UnregisterObject(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterPort@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UGuid@System@@@Z
    static int UnregisterPort(WindissectOpaque, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterReverseConnectionPort@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@U?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UGuid@System@@@Z
    static int UnregisterReverseConnectionPort(WindissectOpaque, ::System::Guid);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientConversationAttached_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@II@Z
    static int ClientConversationAttached_MessageCall(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseConnection_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UPendingConnection@234@@Z
    static int CloseConnection_MessageCall(WindissectOpaque, ::Microsoft::CoreUI::Registrar::PendingConnection);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteCrossProcConnection_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4RegistrarClientId@234@IUGuid@System@@@Z
    static int CompleteCrossProcConnection_MessageCall(WindissectOpaque, int, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteLocalConnection_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4RegistrarClientId@234@II@Z
    static int CompleteLocalConnection_MessageCall(WindissectOpaque, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectContainerThread_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@W4RegistrarClientCategory@234@III@Z
    static int ConnectContainerThread_MessageCall(WindissectOpaque, int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectPendingConversationClient_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@I_KIUGuid@8@@Z
    static int ConnectPendingConversationClient_MessageCall(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, uint64_t, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerThreadDisconnected_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@@Z
    static int ContainerThreadDisconnected_MessageCall(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CrossProcClientDisconnected_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@I@Z
    static int CrossProcClientDisconnected_MessageCall(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCrossProcConnection_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@_NW4RegistrarClientId@234@UGuid@System@@@Z
    static int FindCrossProcConnection_MessageCall(WindissectOpaque, bool, int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPendingConversationClient_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@I_KIUGuid@8@@Z
    static int FindPendingConversationClient_MessageCall(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, uint64_t, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeServerGroupIDForClient_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@I@Z
    static int FreeServerGroupIDForClient_MessageCall(WindissectOpaque, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendedInformation_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@URoutingInfo@34@@Z
    static int GetExtendedInformation_MessageCall(WindissectOpaque, ::Microsoft::CoreUI::RoutingInfo);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateReverseConnectionPortID_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UGuid@System@@@Z
    static int GetOrCreateReverseConnectionPortID_MessageCall(WindissectOpaque, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalClientDisconnected_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@I@Z
    static int LocalClientDisconnected_MessageCall(WindissectOpaque, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareConnection_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UPendingConnection@234@@Z
    static int PrepareConnection_MessageCall(WindissectOpaque, ::Microsoft::CoreUI::Registrar::PendingConnection);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConversationClient_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@W4ConversationConnectionMode@34@UEagerConversationConfiguration@234@@Z
    static int RegisterConversationClient_MessageCall(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int, ::Microsoft::CoreUI::Registrar::EagerConversationConfiguration);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConversation_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@1UScopeID@234@UConversationInfo@Conversations@34@URoutingInfo@34@UHIDENTITY@34@@Z
    static int RegisterConversation_MessageCall(WindissectOpaque, ::System::String *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, ::Microsoft::CoreUI::Conversations::ConversationInfo, ::Microsoft::CoreUI::RoutingInfo, ::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterObject_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@UHIDENTITY@34@UGuid@8@W4RegisteredObjectType@234@@Z
    static int RegisterObject_MessageCall(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, ::Microsoft::CoreUI::HIDENTITY, ::System::Guid, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPendingConversationClientForServer_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@IUConversationPeerInfo@Conversations@34@@Z
    static int RegisterPendingConversationClientForServer_MessageCall(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPort_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UGuid@System@@PEAVString@8@PEAU78@@Z
    static int RegisterPort_MessageCall(WindissectOpaque, ::System::Guid, ::System::String *, ::System::Guid *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThread_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@@Z
    static int RegisterThread_MessageCall(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationClientConnection_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@III@Z
    static int ReleaseConversationClientConnection_MessageCall(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationClient_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@I@Z
    static int ReleaseConversationClient_MessageCall(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseConversationServer_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@I@Z
    static int ReleaseConversationServer_MessageCall(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterObject_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UScopeID@234@W4RegisteredObjectType@234@@Z
    static int UnregisterObject_MessageCall(WindissectOpaque, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterPort_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UGuid@System@@@Z
    static int UnregisterPort_MessageCall(WindissectOpaque, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterReverseConnectionPort_MessageCall@RegistrarServerCaller@Registrar@CoreUI@Microsoft@@CAHU?$FastInterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@UGuid@System@@@Z
    static int UnregisterReverseConnectionPort_MessageCall(WindissectOpaque, ::System::Guid);
};
} // namespace Microsoft::CoreUI::Registrar
