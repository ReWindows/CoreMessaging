#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 20 member(s).
namespace Microsoft::CoreUI::Conversations {
class ConversationServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupEndpoints@ConversationServer@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void CleanupEndpoints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ConversationServer@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ConversationServer@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMessageDeliveryDeferred@ConversationServer@Conversations@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool GetIsMessageDeliveryDeferred();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectionBroken@ConversationServer@Conversations@CoreUI@Microsoft@@UEAAXPEAVConversationPeer@234@@Z
    virtual void OnConnectionBroken(::Microsoft::CoreUI::Conversations::ConversationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ConversationServer@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDeparted@ConversationServer@Conversations@CoreUI@Microsoft@@UEAAXPEAVConversationPeer@234@_N@Z
    virtual void OnPeerDeparted(::Microsoft::CoreUI::Conversations::ConversationPeer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remote_ClientConnectionRequested@ConversationServer@Conversations@CoreUI@Microsoft@@QEAAXUHIDENTITY@34@0UGuid@System@@_K@Z
    void Remote_ClientConnectionRequested(::Microsoft::CoreUI::HIDENTITY, ::Microsoft::CoreUI::HIDENTITY, ::System::Guid, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsMessageDeliveryDeferred@ConversationServer@Conversations@CoreUI@Microsoft@@UEAAXPEAVMessageSession@Messaging@34@_N@Z
    virtual void SetIsMessageDeliveryDeferred(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDispatching@ConversationServer@Conversations@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool get_IsDispatching();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConversationServer@Conversations@CoreUI@Microsoft@@QEAA@XZ
    ~ConversationServer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@ConversationServer@Conversations@CoreUI@Microsoft@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(::CFlat::ComExportAdapterContainer *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@ConversationServer@Conversations@CoreUI@Microsoft@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@ConversationServer@Conversations@CoreUI@Microsoft@@IEAAXPEAVThreadContext@Dispatch@34@PEAVString@System@@1UScopeID@Registrar@34@PEAVCrossProcessReceivePortBase@Messaging@34@W4ConversationItemOwner@34@W4ConversationServerStyle@34@W4ConversationConnectionMode@34@U?$FastInterfacePtr@VICallbackMessageConversationHost@CoreUI@Microsoft@@@CFlat@@@Z
    void Init$(WindissectOpaque *, ::System::String *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, WindissectOpaque *, int, int, int, WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachClient@ConversationServer@Conversations@CoreUI@Microsoft@@AEAAX_KUGuid@System@@IU?$Ref@I@CFlat@@@Z
    void AttachClient(uint64_t, ::System::Guid, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_CompleteClientConnection@ConversationServer@Conversations@CoreUI@Microsoft@@AEAAXIURoutingInfo@34@0@Z
    void Callback_CompleteClientConnection(unsigned int, ::Microsoft::CoreUI::RoutingInfo, ::Microsoft::CoreUI::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectPendingConversationClient@ConversationServer@Conversations@CoreUI@Microsoft@@AEAA_N_KUGuid@System@@IUHIDENTITY@34@U?$Ref@I@CFlat@@U?$Ref@W4RegistrarClientId@Registrar@CoreUI@Microsoft@@@9@@Z
    bool ConnectPendingConversationClient(uint64_t, ::System::Guid, unsigned int, ::Microsoft::CoreUI::HIDENTITY, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ConversationServer@Conversations@CoreUI@Microsoft@@CA?AV?$SmartPtr@VConversationServer@Conversations@CoreUI@Microsoft@@@CFlat@@PEAVThreadContext@Dispatch@34@PEAVString@System@@1UScopeID@Registrar@34@PEAVCrossProcessReceivePortBase@Messaging@34@W4ConversationItemOwner@34@W4ConversationServerStyle@34@W4ConversationConnectionMode@34@U?$FastInterfacePtr@VICallbackMessageConversationHost@CoreUI@Microsoft@@@6@@Z
    static WindissectOpaque Create$(WindissectOpaque *, ::System::String *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, WindissectOpaque *, int, int, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@ConversationServer@Conversations@CoreUI@Microsoft@@AEAAXPEAVString@System@@@Z
    void Register(::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@ConversationServer@Conversations@CoreUI@Microsoft@@AEAAXXZ
    void Unregister();
};
} // namespace Microsoft::CoreUI::Conversations
