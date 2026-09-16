#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 122 member(s).
namespace Microsoft::CoreUI::Messaging {
class MessageSession {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRefAndRetrieveExportAdapter@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXPEAPEAX@Z
    void AddRefAndRetrieveExportAdapter(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateMessage@MessageSession@Messaging@CoreUI@Microsoft@@QEAAPEAXUHENDPOINT@34@_NW4ExternalPriority@Dispatch@34@IW4FlushMode@734@U?$Ref@_N@CFlat@@@Z
    void * AllocateMessage(::Microsoft::CoreUI::HENDPOINT, bool, int, unsigned int, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BatchCompleted@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void BatchCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheReverseConnectionReceiver@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXPEAVReverseConnectionReceivePortBase@234@@Z
    void CacheReverseConnectionReceiver(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_CleanupAfterFinalRelease@MessageSession@Messaging@CoreUI@Microsoft@@QEAA_NXZ
    bool Callback_CleanupAfterFinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_CloseConnection@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXPEAVConnection@234@_N@Z
    void Callback_CloseConnection(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_DeliverMessage@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXUBufferInfo@Support@34@W4RegistrarClientId@Registrar@34@UGuid@System@@II_NPEAVCrossProcessReceivePortBase@234@@Z
    void Callback_DeliverMessage(::Microsoft::CoreUI::Support::BufferInfo, int, ::System::Guid, unsigned int, unsigned int, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_DeliverMessageBatch@MessageSession@Messaging@CoreUI@Microsoft@@QEAAIPEAVMessageBufferEnumerator@234@W4RegistrarClientId@Registrar@34@UGuid@System@@II_NPEAVCrossProcessReceivePortBase@234@@Z
    unsigned int Callback_DeliverMessageBatch(WindissectOpaque *, int, ::System::Guid, unsigned int, unsigned int, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_WaitForInterconnectAcks@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void Callback_WaitForInterconnectAcks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckHighPriorityPorts@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void CheckHighPriorityPorts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearInterconnectAndReceiveAcks@MessageSession@Messaging@CoreUI@Microsoft@@QEAA_NXZ
    bool ClearInterconnectAndReceiveAcks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@MessageSession@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePort@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AU?$InterfacePtr@VIExportMessagePort@CoreUI@Microsoft@@@CFlat@@UPSECURITY_DESCRIPTOR@34@PEAVString@System@@W4PortKind@34@PEAXI@Z
    WindissectOpaque CreatePort(::Microsoft::CoreUI::PSECURITY_DESCRIPTOR, ::System::String *, int, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@MessageSession@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableInterconnect@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void DisableInterconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectClient@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXII@Z
    void DisconnectClient(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableMemorySharing@MessageSession@Messaging@CoreUI@Microsoft@@QEAAX_N@Z
    void EnableMemorySharing(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureConnection@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AW4MessagingResults@234@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@IU?$Ref@UHENDPOINT@CoreUI@Microsoft@@@7@@Z
    int EnsureConnection(WindissectOpaque, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCrossProcessReceivePort@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VCrossProcessReceivePort@Messaging@CoreUI@Microsoft@@@CFlat@@U?$Ref@UGuid@System@@@6@@Z
    WindissectOpaque FindCrossProcessReceivePort(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushMessage@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXPEAX@Z
    void FlushMessage(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFullNtObjectName@MessageSession@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VString@System@@@CFlat@@U?$In@UGuid@System@@@6@IIPEAVString@System@@@Z
    static WindissectOpaque GenerateFullNtObjectName(WindissectOpaque, unsigned int, unsigned int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFullNtObjectNameForCurrentCaller@MessageSession@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VString@System@@@CFlat@@U?$In@UGuid@System@@@6@@Z
    static WindissectOpaque GenerateFullNtObjectNameForCurrentCaller(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateConnection@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VConnection@Messaging@CoreUI@Microsoft@@@CFlat@@_NIU?$In@URoutingInfo@CoreUI@Microsoft@@@6@@Z
    WindissectOpaque GetOrCreateConnection(bool, unsigned int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateConnection@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VConnection@Messaging@CoreUI@Microsoft@@@CFlat@@_NU?$In@URoutingInfo@CoreUI@Microsoft@@@6@@Z
    WindissectOpaque GetOrCreateConnection(bool, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetEndpoint@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AUHENDPOINT@34@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@@Z
    ::Microsoft::CoreUI::HENDPOINT GetTargetEndpoint(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImpersonateCaller@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void ImpersonateCaller();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MessageSession@Messaging@CoreUI@Microsoft@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@5@@Z
    MessageSession(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCrossProcessReceivePortCreated@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXPEAVCrossProcessReceivePort@234@U?$In@UGuid@System@@@CFlat@@@Z
    void NotifyCrossProcessReceivePortCreated(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCrossProcessReceivePortDisposed@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXUGuid@System@@@Z
    void NotifyCrossProcessReceivePortDisposed(::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessageSession@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@MessageSession@Messaging@CoreUI@Microsoft@@UEAA_N_NU?$Ref@UIntPtr@System@@@CFlat@@@Z
    virtual bool OnFinalRelease(bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitialExport@MessageSession@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnInitialExport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenEndpoint@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AW4MessagingResults@234@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@IU?$Ref@UHENDPOINT@CoreUI@Microsoft@@@7@@Z
    int OpenEndpoint(WindissectOpaque, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeAutoFlush@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXPEAVMessageStream@234@@Z
    void RevokeAutoFlush(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetCachedReverseConnectionReceiver@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VReverseConnectionReceivePortBase@Messaging@CoreUI@Microsoft@@@CFlat@@U?$Ref@UGuid@System@@@6@@Z
    WindissectOpaque TryGetCachedReverseConnectionReceiver(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetConnection@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VConnection@Messaging@CoreUI@Microsoft@@@CFlat@@U?$In@URoutingInfo@CoreUI@Microsoft@@@6@@Z
    WindissectOpaque TryGetConnection(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCurrentMessageIsInProc@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void ValidateCurrentMessageIsInProc();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateIdentityGroupForCurrentMessage@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXI@Z
    void ValidateIdentityGroupForCurrentMessage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateRoutingInfoMatchesCurrentMessage@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXU?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@@Z
    void ValidateRoutingInfoMatchesCurrentMessage(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitOnOutboundAlpcMessages@MessageSession@Messaging@CoreUI@Microsoft@@QEAAXIU?$Ref@_N@CFlat@@@Z
    void WaitOnOutboundAlpcMessages(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BufferManager@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VBufferManager@Buffering@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_BufferManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Context@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VThreadContext@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Context();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CrossPartitionMessageAdapter@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VCrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_CrossPartitionMessageAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EventLoop@MessageSession@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VEventLoop@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_EventLoop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageSession@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~MessageSession();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@MessageSession@Messaging@CoreUI@Microsoft@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(::CFlat::ComExportAdapterContainer *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@MessageSession@Messaging@CoreUI@Microsoft@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@MessageSession@Messaging@CoreUI@Microsoft@@IEAAXPEAVObject@System@@PEAVThreadContext@Dispatch@34@_N@Z
    void Init$(::System::Object *, WindissectOpaque *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddConnectionByRoutingInfo@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXPEAVConnection@234@@Z
    void AddConnectionByRoutingInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateThunkEndpoint@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AW4MessagingResults@234@UHENDPOINT@34@U?$Ref@UHENDPOINT@CoreUI@Microsoft@@@CFlat@@@Z
    int AllocateThunkEndpoint(::Microsoft::CoreUI::HENDPOINT, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ClearInterconnectAndWaitForAllAcks@MessageSession@Messaging@CoreUI@Microsoft@@AEAA_NXZ
    bool Callback_ClearInterconnectAndWaitForAllAcks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_DeferredCloseConnection@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXPEAVObject@System@@@Z
    void Callback_DeferredCloseConnection(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_DisconnectClientWorker@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void Callback_DisconnectClientWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_PlatformCloseConnection@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXU?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@@Z
    void Callback_PlatformCloseConnection(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_StoreCoreUIComponents@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXPEAX@Z
    void Callback_StoreCoreUIComponents(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_WaitForInterconnectAcksOrNewExport@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void Callback_WaitForInterconnectAcksOrNewExport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_WaitOnHandleCollection@MessageSession@Messaging@CoreUI@Microsoft@@CAXPEAUWin32Handle@Support@34@I@Z
    static void Callback_WaitOnHandleCollection(::Microsoft::CoreUI::Support::Win32Handle *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckShuttingDown@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void CheckShuttingDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupAfterFinalReleaseWithNoCallouts@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void CleanupAfterFinalReleaseWithNoCallouts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearInterconnectQueue@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void ClearInterconnectQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseConnections@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void CloseConnections();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseConnectionsAndConnectedClients@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void CloseConnectionsAndConnectedClients();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseEndpointWorker@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXUHENDPOINT@34@W4CloseEndpointFlags@34@@Z
    void CloseEndpointWorker(::Microsoft::CoreUI::HENDPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConnection@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VConnection@Messaging@CoreUI@Microsoft@@@CFlat@@_NIU?$In@URoutingInfo@CoreUI@Microsoft@@@6@@Z
    WindissectOpaque CreateConnection(bool, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEndpoint@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VExternalEndpoint@CoreUI@Microsoft@@@CFlat@@PEAVExportEndpointHandler@34@U?$FastInterfacePtr@VIExportMessagePort@CoreUI@Microsoft@@@6@@Z
    WindissectOpaque CreateEndpoint(::Microsoft::CoreUI::ExportEndpointHandler *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferInvokeInternal@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXPEAVActionCallback@34@W4ExternalPriority@Dispatch@34@@Z
    void DeferInvokeInternal(::Microsoft::CoreUI::ActionCallback *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeExternalEndpoints@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void DisposeExternalEndpoints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeExternalEndpointsWorker@MessageSession@Messaging@CoreUI@Microsoft@@AEAAX_KU?$FastInterfacePtr@VIIdentityObject@Identity@CoreUI@Microsoft@@@CFlat@@0_N@Z
    void DisposeExternalEndpointsWorker(uint64_t, WindissectOpaque, uint64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoNonblockingCleanupOnFinalRelease@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void DoNonblockingCleanupOnFinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePendingAlpcMessagesReceived@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXIU?$Ref@_N@CFlat@@@Z
    void EnsurePendingAlpcMessagesReceived(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushPendingStreams@MessageSession@Messaging@CoreUI@Microsoft@@AEAAX_N@Z
    void FlushPendingStreams(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBatchFlusherForStream@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VMessageBatchFlusher@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVMessageStream@234@_N@Z
    WindissectOpaque GetBatchFlusherForStream(WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VConnection@Messaging@CoreUI@Microsoft@@@CFlat@@UHENDPOINT@34@UEndpointValidationOptions@234@_NU?$Ref@UHIDENTITY@CoreUI@Microsoft@@@6@@Z
    WindissectOpaque GetConnection(::Microsoft::CoreUI::HENDPOINT, WindissectOpaque, bool, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnection@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VConnection@Messaging@CoreUI@Microsoft@@@CFlat@@UHENDPOINT@34@UEndpointValidationOptions@234@_N@Z
    WindissectOpaque GetConnection(::Microsoft::CoreUI::HENDPOINT, WindissectOpaque, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndpointInfoWorker@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AURoutingInfo@34@UHENDPOINT@34@UEndpointValidationOptions@234@U?$Ref@_N@CFlat@@2@Z
    ::Microsoft::CoreUI::RoutingInfo GetEndpointInfoWorker(::Microsoft::CoreUI::HENDPOINT, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessagePortWorker@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessagePort@CoreUI@Microsoft@@@CFlat@@UHENDPOINT@34@UEndpointValidationOptions@234@@Z
    WindissectOpaque GetMessagePortWorker(::Microsoft::CoreUI::HENDPOINT, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?JoinConversationAsClientWorker@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessageConversation@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UMsgScopeID@34@W4ConversationConnectionMode@34@U?$FastInterfacePtr@VICallbackMessageConversationHost@CoreUI@Microsoft@@@6@UEagerConversationConfiguration@Registrar@34@U?$Ref@I@6@U?$Ref@_K@6@@Z
    WindissectOpaque JoinConversationAsClientWorker(::System::String *, ::Microsoft::CoreUI::MsgScopeID, int, WindissectOpaque, ::Microsoft::CoreUI::Registrar::EagerConversationConfiguration, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?JoinConversationAsServerWorker@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessageConversation@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@0UScopeID@Registrar@34@U?$FastInterfacePtr@VIExportMessagePort@CoreUI@Microsoft@@@6@W4ConversationItemOwner@34@W4ConversationServerStyle@34@W4ConversationConnectionMode@34@U?$FastInterfacePtr@VICallbackMessageConversationHost@CoreUI@Microsoft@@@6@U?$Ref@I@6@@Z
    WindissectOpaque JoinConversationAsServerWorker(::System::String *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, WindissectOpaque, int, int, int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_AddListener$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXU?$FastInterfacePtr@VICallbackMessageSessionListener@CoreUI@Microsoft@@@CFlat@@@Z
    void Microsoft_CoreUI_IExportMessageSessionPrivate_AddListener$(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_AllocateRemoteEndpoint$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAJU?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@0U?$Ref@UHENDPOINT@CoreUI@Microsoft@@@6@1@Z
    long Microsoft_CoreUI_IExportMessageSessionPrivate_AllocateRemoteEndpoint$(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_ClaimRemoteEndpoint$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AUIntPtr@System@@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@0PEAVExportEndpointHandler@34@@Z
    ::System::IntPtr Microsoft_CoreUI_IExportMessageSessionPrivate_ClaimRemoteEndpoint$(WindissectOpaque, WindissectOpaque, ::Microsoft::CoreUI::ExportEndpointHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_CloseEndpoint$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXUIntPtr@System@@@Z
    void Microsoft_CoreUI_IExportMessageSessionPrivate_CloseEndpoint$(::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_CreateEndpoint$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AUIntPtr@System@@PEAVExportEndpointHandler@34@U?$FastInterfacePtr@VIExportMessagePort@CoreUI@Microsoft@@@CFlat@@@Z
    ::System::IntPtr Microsoft_CoreUI_IExportMessageSessionPrivate_CreateEndpoint$(::Microsoft::CoreUI::ExportEndpointHandler *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_EstablishConnection$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAJU?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@U?$Ref@UHENDPOINT@CoreUI@Microsoft@@@6@@Z
    long Microsoft_CoreUI_IExportMessageSessionPrivate_EstablishConnection$(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_FlushImmediately$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXUHENDPOINT@34@@Z
    void Microsoft_CoreUI_IExportMessageSessionPrivate_FlushImmediately$(::Microsoft::CoreUI::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_GetEndpoint$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AUHENDPOINT@34@UIntPtr@System@@@Z
    ::Microsoft::CoreUI::HENDPOINT Microsoft_CoreUI_IExportMessageSessionPrivate_GetEndpoint$(::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_GetEndpointData$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AUIntPtr@System@@UHIDENTITY@34@@Z
    ::System::IntPtr Microsoft_CoreUI_IExportMessageSessionPrivate_GetEndpointData$(::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_GetRoutingInfo$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AURoutingInfo@34@UIntPtr@System@@@Z
    ::Microsoft::CoreUI::RoutingInfo Microsoft_CoreUI_IExportMessageSessionPrivate_GetRoutingInfo$(::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_NotifyRemoteEndpointFreed$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXUHENDPOINT@34@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@@Z
    void Microsoft_CoreUI_IExportMessageSessionPrivate_NotifyRemoteEndpointFreed$(::Microsoft::CoreUI::HENDPOINT, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_RegisterCoreUIComponents$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AUIntPtr@System@@PEAXPEAVExportEndpointHandler@34@@Z
    ::System::IntPtr Microsoft_CoreUI_IExportMessageSessionPrivate_RegisterCoreUIComponents$(void *, ::Microsoft::CoreUI::ExportEndpointHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_RemoveListener$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXU?$FastInterfacePtr@VICallbackMessageSessionListener@CoreUI@Microsoft@@@CFlat@@@Z
    void Microsoft_CoreUI_IExportMessageSessionPrivate_RemoveListener$(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_SendAndReceive$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXUHENDPOINT@34@PEAXI1I@Z
    void Microsoft_CoreUI_IExportMessageSessionPrivate_SendAndReceive$(::Microsoft::CoreUI::HENDPOINT, void *, unsigned int, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_SetPendingPingResult$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXPEAXI@Z
    void Microsoft_CoreUI_IExportMessageSessionPrivate_SetPendingPingResult$(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_CancelSendInPlace$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXPEAX@Z
    void Microsoft_CoreUI_IExportMessageSession_CancelSendInPlace$(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_CreateEndpoint$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AUHENDPOINT@34@PEAVExportEndpointHandler@34@@Z
    ::Microsoft::CoreUI::HENDPOINT Microsoft_CoreUI_IExportMessageSession_CreateEndpoint$(::Microsoft::CoreUI::ExportEndpointHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_CreateGroup$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessageGroup@CoreUI@Microsoft@@@CFlat@@PEAVDispatchGroupHandler@34@0@Z
    WindissectOpaque Microsoft_CoreUI_IExportMessageSession_CreateGroup$(::Microsoft::CoreUI::DispatchGroupHandler *, ::Microsoft::CoreUI::DispatchGroupHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_CreateGroup$$1@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessageGroup@CoreUI@Microsoft@@@CFlat@@PEAVDispatchGroupBatchEnableHandler@34@PEAVDispatchGroupHandler@34@@Z
    WindissectOpaque Microsoft_CoreUI_IExportMessageSession_CreateGroup$$1(::Microsoft::CoreUI::DispatchGroupBatchEnableHandler *, ::Microsoft::CoreUI::DispatchGroupHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_CreatePort$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessagePort@CoreUI@Microsoft@@@CFlat@@UPSECURITY_DESCRIPTOR@34@@Z
    WindissectOpaque Microsoft_CoreUI_IExportMessageSession_CreatePort$(::Microsoft::CoreUI::PSECURITY_DESCRIPTOR);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_CreatePort$$1@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessagePort@CoreUI@Microsoft@@@CFlat@@UPSECURITY_DESCRIPTOR@34@PEAVString@System@@@Z
    WindissectOpaque Microsoft_CoreUI_IExportMessageSession_CreatePort$$1(::Microsoft::CoreUI::PSECURITY_DESCRIPTOR, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_CreateTimer$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessageTimer@CoreUI@Microsoft@@@CFlat@@PEAVTimeoutHandler@Dispatch@34@@Z
    WindissectOpaque Microsoft_CoreUI_IExportMessageSession_CreateTimer$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_JoinConversationAsEagerClient$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessageConversation@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@0UMsgScopeID@34@W4ConversationItemOwner@34@W4ConversationServerStyle@34@W4ConversationConnectionMode@34@U?$FastInterfacePtr@VICallbackMessageConversationHost@CoreUI@Microsoft@@@6@U?$Ref@I@6@U?$Ref@_K@6@@Z
    WindissectOpaque Microsoft_CoreUI_IExportMessageSession_JoinConversationAsEagerClient$(::System::String *, ::System::String *, ::Microsoft::CoreUI::MsgScopeID, int, int, int, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_JoinConversationAsServer$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessageConversation@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@U?$FastInterfacePtr@VIExportMessagePort@CoreUI@Microsoft@@@6@UMsgScopeID@34@W4ConversationItemOwner@34@W4ConversationServerStyle@34@W4ConversationConnectionMode@34@U?$FastInterfacePtr@VICallbackMessageConversationHost@CoreUI@Microsoft@@@6@U?$Ref@I@6@@Z
    WindissectOpaque Microsoft_CoreUI_IExportMessageSession_JoinConversationAsServer$(::System::String *, WindissectOpaque, ::Microsoft::CoreUI::MsgScopeID, int, int, int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_JoinConversationAsServer$$1@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessageConversation@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@0U?$FastInterfacePtr@VIExportMessagePort@CoreUI@Microsoft@@@6@UMsgScopeID@34@W4ConversationItemOwner@34@W4ConversationServerStyle@34@W4ConversationConnectionMode@34@U?$FastInterfacePtr@VICallbackMessageConversationHost@CoreUI@Microsoft@@@6@U?$Ref@I@6@@Z
    WindissectOpaque Microsoft_CoreUI_IExportMessageSession_JoinConversationAsServer$$1(::System::String *, ::System::String *, WindissectOpaque, ::Microsoft::CoreUI::MsgScopeID, int, int, int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_OpenEndpoint$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AUHENDPOINT@34@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@@Z
    ::Microsoft::CoreUI::HENDPOINT Microsoft_CoreUI_IExportMessageSession_OpenEndpoint$(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_RegisterWait$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXUWin32Handle@Support@34@PEAVWaitCallback@Dispatch@34@@Z
    void Microsoft_CoreUI_IExportMessageSession_RegisterWait$(::Microsoft::CoreUI::Support::Win32Handle, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_Run$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void Microsoft_CoreUI_IExportMessageSession_Run$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_SendInPlace$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAPEAXUHENDPOINT@34@I@Z
    void * Microsoft_CoreUI_IExportMessageSession_SendInPlace$(::Microsoft::CoreUI::HENDPOINT, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_SendInPlace$$1@MessageSession@Messaging@CoreUI@Microsoft@@AEAAPEAXUHENDPOINT@34@W4ExternalPriority@Dispatch@34@I@Z
    void * Microsoft_CoreUI_IExportMessageSession_SendInPlace$$1(::Microsoft::CoreUI::HENDPOINT, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_UnregisterWait$@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXUWin32Handle@Support@34@@Z
    void Microsoft_CoreUI_IExportMessageSession_UnregisterWait$(::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_get_PrivateInterfaceForCoreUIComponents$@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessageSessionPrivate@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque Microsoft_CoreUI_IExportMessageSession_get_PrivateInterfaceForCoreUIComponents$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenPort@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessagePort@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@W4ExternalRegistrarScope@34@@Z
    WindissectOpaque OpenPort(::System::String *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlatformDispose@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void PlatformDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlatformNonblockingCleanupOnFinalRelease@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void PlatformNonblockingCleanupOnFinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPendingAlpcConnections@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXIU?$Ref@_N@CFlat@@U?$Ref@I@6@@Z
    void ProcessPendingAlpcConnections(unsigned int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAdapterCleanupWait@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void RegisterAdapterCleanupWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDispatchCallbackCommon@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXPEAVDispatchCallback@Dispatch@34@W4ThreadPriority@634@@Z
    void RegisterDispatchCallbackCommon(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveConnectionByRoutingInfo@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXU?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@_N@Z
    void RemoveConnectionByRoutingInfo(WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoutingInfoFromConnectionId@MessageSession@Messaging@CoreUI@Microsoft@@AEAA?AURoutingInfo@34@IUEndpointValidationOptions@234@U?$Ref@_N@CFlat@@@Z
    ::Microsoft::CoreUI::RoutingInfo RoutingInfoFromConnectionId(unsigned int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCommon@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXUHENDPOINT@34@W4ExternalPriority@Dispatch@34@PEAXIW4FlushMode@734@_N@Z
    void SendCommon(::Microsoft::CoreUI::HENDPOINT, int, void *, unsigned int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCreateGroup@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXPEAVDelegate@System@@PEAVDispatchGroupHandler@34@@Z
    void ValidateCreateGroup(::System::Delegate *, ::Microsoft::CoreUI::DispatchGroupHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateJoinConversationParamsCommon@MessageSession@Messaging@CoreUI@Microsoft@@AEAAXPEAVString@System@@_NW4ConversationItemOwner@34@W4ConversationServerStyle@34@W4ConversationConnectionMode@34@U?$FastInterfacePtr@VICallbackMessageConversationHost@CoreUI@Microsoft@@@CFlat@@@Z
    void ValidateJoinConversationParamsCommon(::System::String *, bool, int, int, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitOnHandleCollection@MessageSession@Messaging@CoreUI@Microsoft@@CAXPEAUWin32Handle@Support@34@IIU?$Ref@_N@CFlat@@@Z
    static void WaitOnHandleCollection(::Microsoft::CoreUI::Support::Win32Handle *, unsigned int, unsigned int, WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Messaging
