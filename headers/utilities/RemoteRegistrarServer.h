#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 84 member(s).
namespace Microsoft::CoreUI::Registrar {
class RemoteRegistrarServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAA_NW4RegistrarClientCategory@234@II@Z
    bool AcceptConnection(int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToList@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@SAXU?$Ref@V?$SmartPtr@V?$List$1@V?$SmartPtr@VObject@System@@@CFlat@@@Generic@Collections@System@@@CFlat@@@CFlat@@PEAVObject@System@@@Z
    static void AddToList(WindissectOpaque, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpForDepartedThread@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVRegistrarThreadContext@234@UIntPtr@System@@@Z
    void CleanUpForDepartedThread(::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUPendingConnection@234@@Z
    void CloseConnection(::Microsoft::CoreUI::Registrar::PendingConnection);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteCrossProcConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXW4RegistrarClientId@234@IUGuid@System@@@Z
    void CompleteCrossProcConnection(int, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteLocalConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXW4RegistrarClientId@234@II@Z
    void CompleteLocalConnection(int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectContainerThread@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXW4RegistrarClientCategory@234@III@Z
    void ConnectContainerThread(int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerThreadDisconnected@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXXZ
    void ContainerThreadDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VRemoteRegistrarServer@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVAlpcServerHost@234@UGuid@System@@@Z
    static WindissectOpaque Create$(::Microsoft::CoreUI::Registrar::AlpcServerHost *, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContextForNewMessageSession@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VRegistrarThreadContext@Registrar@CoreUI@Microsoft@@@CFlat@@UGuid@System@@W4RegistrarClientCategory@234@III@Z
    WindissectOpaque CreateContextForNewMessageSession(::System::Guid, int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CrossProcClientDisconnected@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXI@Z
    void CrossProcClientDisconnected(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClient@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VRegistrarThreadContext@Registrar@CoreUI@Microsoft@@@CFlat@@W4RegistrarClientId@234@@Z
    WindissectOpaque FindClient(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCrossProcConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAX_NW4RegistrarClientId@234@UGuid@System@@@Z
    void FindCrossProcConnection(bool, int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindObject@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@W4RegisteredObjectType@234@@Z
    void FindObject(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardClientConversationAttached@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@II@Z
    void ForwardClientConversationAttached(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardCloseConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUPendingConnection@234@@Z
    void ForwardCloseConnection(::Microsoft::CoreUI::Registrar::PendingConnection);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardCompleteCrossProcConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXW4RegistrarClientId@234@IUGuid@System@@@Z
    void ForwardCompleteCrossProcConnection(int, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardCompleteLocalConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXW4RegistrarClientId@234@II@Z
    void ForwardCompleteLocalConnection(int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardConnectPendingConversationClient@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@I_KIUGuid@6@@Z
    void ForwardConnectPendingConversationClient(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, uint64_t, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardCrossProcClientDisconnected@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXI@Z
    void ForwardCrossProcClientDisconnected(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardFindCrossProcConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAX_NW4RegistrarClientId@234@UGuid@System@@@Z
    void ForwardFindCrossProcConnection(bool, int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardFindObject@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@W4RegisteredObjectType@234@@Z
    void ForwardFindObject(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardFindPendingConversationClient@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@I_KIUGuid@6@@Z
    void ForwardFindPendingConversationClient(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, uint64_t, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardGetOrCreateReverseConnectionPortId@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@@Z
    void ForwardGetOrCreateReverseConnectionPortId(::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardLocalClientDisconnected@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXI@Z
    void ForwardLocalClientDisconnected(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardLookupCrossPartitionClient@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAUGuid@System@@W4RegistrarClientId@234@@Z
    void ForwardLookupCrossPartitionClient(::System::Guid *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardPrepareConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUPendingConnection@234@@Z
    void ForwardPrepareConnection(::Microsoft::CoreUI::Registrar::PendingConnection);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardRegisterConversation@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@0UScopeID@234@UConversationInfo@Conversations@34@URoutingInfo@34@UHIDENTITY@34@@Z
    void ForwardRegisterConversation(::System::String *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, ::Microsoft::CoreUI::Conversations::ConversationInfo, ::Microsoft::CoreUI::RoutingInfo, ::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardRegisterConversationClient@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@W4ConversationConnectionMode@34@UEagerConversationConfiguration@234@@Z
    void ForwardRegisterConversationClient(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int, ::Microsoft::CoreUI::Registrar::EagerConversationConfiguration);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardRegisterObject@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@UHIDENTITY@34@UGuid@6@W4RegisteredObjectType@234@@Z
    void ForwardRegisterObject(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, ::Microsoft::CoreUI::HIDENTITY, ::System::Guid, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardRegisterPendingConversationClientForServer@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@IUConversationPeerInfo@Conversations@34@@Z
    void ForwardRegisterPendingConversationClientForServer(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardRegisterPort@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@PEAVString@6@0@Z
    void ForwardRegisterPort(::System::Guid, ::System::String *, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardRegisterThread@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXXZ
    void ForwardRegisterThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardReleaseConversationClient@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@I@Z
    void ForwardReleaseConversationClient(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardReleaseConversationClientConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@III@Z
    void ForwardReleaseConversationClientConnection(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardReleaseConversationServer@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@I@Z
    void ForwardReleaseConversationServer(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardUnregisterObject@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@W4RegisteredObjectType@234@@Z
    void ForwardUnregisterObject(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardUnregisterPort@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@@Z
    void ForwardUnregisterPort(::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardUnregisterReverseConnectionPort@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@@Z
    void ForwardUnregisterReverseConnectionPort(::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeServerGroupIdForClient@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXI@Z
    void FreeServerGroupIdForClient(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendedInformation@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXURoutingInfo@34@@Z
    void GetExtendedInformation(::Microsoft::CoreUI::RoutingInfo);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateReverseConnectionPortId@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@@Z
    void GetOrCreateReverseConnectionPortId(::System::Guid);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateReverseConnectionPortIdImpl@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@SA?AUGuid@System@@PEAVRegistrarThreadContext@234@0URoutingInfo@34@U56@@Z
    static ::System::Guid GetOrCreateReverseConnectionPortIdImpl(::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::Microsoft::CoreUI::RoutingInfo, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalClientDisconnected@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXI@Z
    void LocalClientDisconnected(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupCrossPartitionClient@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAUGuid@System@@W4RegistrarClientId@234@@Z
    void LookupCrossPartitionClient(::System::Guid *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContainerDisconnected@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVHvRegistrarConnectedClient@234@@Z
    void OnContainerDisconnected(::Microsoft::CoreUI::Registrar::HvRegistrarConnectedClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUPendingConnection@234@@Z
    void PrepareConnection(::Microsoft::CoreUI::Registrar::PendingConnection);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterObject@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@UHIDENTITY@34@UGuid@6@W4RegisteredObjectType@234@@Z
    void RegisterObject(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, ::Microsoft::CoreUI::HIDENTITY, ::System::Guid, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPort@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@PEAVString@6@0@Z
    void RegisterPort(::System::Guid, ::System::String *, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThread@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXXZ
    void RegisterThread();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConnectionContext@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUIntPtr@System@@@Z
    void SetConnectionContext(::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnformatAndInvokeMethod@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAXI@Z
    void UnformatAndInvokeMethod(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnformatAndInvokeMethodFromContainerRegistrar@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXW4HvRegistrarMessageFlags@234@UIntPtr@System@@PEAXI@Z
    void UnformatAndInvokeMethodFromContainerRegistrar(int, ::System::IntPtr, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnformatAndInvokeMethodFromRootPartitionRegistrar@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUIntPtr@System@@PEAXI@Z
    void UnformatAndInvokeMethodFromRootPartitionRegistrar(::System::IntPtr, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterObject@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@UScopeID@234@W4RegisteredObjectType@234@@Z
    void UnregisterObject(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterPort@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@@Z
    void UnregisterPort(::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterReverseConnectionPort@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@@Z
    void UnregisterReverseConnectionPort(::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlpcConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VAlpcServerAdapter@Registrar@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_AlpcConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentCallerIsHvContainer@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAA_NXZ
    bool get_CurrentCallerIsHvContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EventLoop@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VEventLoop@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_EventLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HvServer@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VHvRegistrarServerAdapter@Registrar@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_HvServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InvokingThreadContext@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VRegistrarThreadContext@Registrar@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_InvokingThreadContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalPartition@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VRegistrarPartitionContext@Registrar@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_LocalPartition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Partitions@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@V?$Map$2@UGuid@System@@V?$SmartPtr@VObject@System@@@CFlat@@@@@CFlat@@XZ
    WindissectOpaque get_Partitions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RunningInHvContainer@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@SA_NXZ
    static bool get_RunningInHvContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ServerCallerHost@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAA?AU?$InterfacePtr@VIServerCallerHost@Registrar@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_ServerCallerHost();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~RemoteRegistrarServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProcessContextForNewMessageSession@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VRegistrarProcessContext@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVRegistrarPartitionContext@234@W4RegistrarClientCategory@234@IPEAVRegistrarSessionContext@234@@Z
    WindissectOpaque EnsureProcessContextForNewMessageSession(::Microsoft::CoreUI::Registrar::RegistrarPartitionContext *, int, unsigned int, ::Microsoft::CoreUI::Registrar::RegistrarSessionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPendingConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAAHPEAV?$List$1@V?$SmartPtr@VObject@System@@@CFlat@@@Generic@Collections@System@@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@@Z
    int FindPendingConnection(::System::Collections::Generic::List$1<WindissectOpaque > *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionIdForConnectingAlpcClient@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAAIXZ
    unsigned int GetSessionIdForConnectingAlpcClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientDisconnected@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAAXXZ
    void OnClientDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlatformDependentInitialize@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAAXXZ
    void PlatformDependentInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlatformDependentOnConnectionAccepted@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAAXPEAVRegistrarThreadContext@234@@Z
    void PlatformDependentOnConnectionAccepted(::Microsoft::CoreUI::Registrar::RegistrarThreadContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlatformDependentUninitialize@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAAXXZ
    void PlatformDependentUninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveClient@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAAXPEAVRegistrarThreadContext@234@@Z
    void RemoveClient(::Microsoft::CoreUI::Registrar::RegistrarThreadContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveGroupsForNewConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@CA?AW4MessagingResults@Messaging@34@U?$Ref@UPendingConnection@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVRegistrarThreadContext@234@10@Z
    static int ReserveGroupsForNewConnection(WindissectOpaque, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrievePendingConnection@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAA?AUPendingConnection@234@_NPEAVRegistrarSessionContext@234@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@2U?$Ref@_N@8@@Z
    ::Microsoft::CoreUI::Registrar::PendingConnection RetrievePendingConnection(bool, ::Microsoft::CoreUI::Registrar::RegistrarSessionContext *, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInvokingContext@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAAXUIntPtr@System@@@Z
    void SetInvokingContext(::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRemoveDisconnectNotification@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAA_NPEAVRegistrarThreadContext@234@0@Z
    bool TryRemoveDisconnectNotification(::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyInvokedFromContainer@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAAXXZ
    void VerifyInvokedFromContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyMessageSessionThreadId@RemoteRegistrarServer@Registrar@CoreUI@Microsoft@@AEAAXPEAVRegistrarPartitionContext@234@PEAVRegistrarSessionContext@234@W4RegistrarClientCategory@234@I@Z
    void VerifyMessageSessionThreadId(::Microsoft::CoreUI::Registrar::RegistrarPartitionContext *, ::Microsoft::CoreUI::Registrar::RegistrarSessionContext *, int, unsigned int);
};
} // namespace Microsoft::CoreUI::Registrar
