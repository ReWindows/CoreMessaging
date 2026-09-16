#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 21 member(s).
namespace Microsoft::CoreUI::Conversations {
class ConversationClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ConversationClient@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ConversationClient@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsMessageDeliveryDeferred@ConversationClient@Conversations@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool GetIsMessageDeliveryDeferred();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectionBroken@ConversationClient@Conversations@CoreUI@Microsoft@@UEAAXPEAVConversationPeer@234@@Z
    virtual void OnConnectionBroken(::Microsoft::CoreUI::Conversations::ConversationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ConversationClient@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDeparted@ConversationClient@Conversations@CoreUI@Microsoft@@UEAAXPEAVConversationPeer@234@_N@Z
    virtual void OnPeerDeparted(::Microsoft::CoreUI::Conversations::ConversationPeer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerJoined@ConversationClient@Conversations@CoreUI@Microsoft@@QEAAXUConversationPeerInfo@234@@Z
    void OnServerJoined(::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerJoinedStatic@ConversationClient@Conversations@CoreUI@Microsoft@@SAX_KUConversationPeerInfo@234@@Z
    static void OnServerJoinedStatic(uint64_t, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remote_ConnectionAccepted@ConversationClient@Conversations@CoreUI@Microsoft@@QEAAXI@Z
    void Remote_ConnectionAccepted(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsMessageDeliveryDeferred@ConversationClient@Conversations@CoreUI@Microsoft@@UEAAXPEAVMessageSession@Messaging@34@_N@Z
    virtual void SetIsMessageDeliveryDeferred(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsDispatching@ConversationClient@Conversations@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool get_IsDispatching();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConversationClient@Conversations@CoreUI@Microsoft@@QEAA@XZ
    ~ConversationClient();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@ConversationClient@Conversations@CoreUI@Microsoft@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(::CFlat::ComExportAdapterContainer *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@ConversationClient@Conversations@CoreUI@Microsoft@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnPortConnectionFailed@ConversationClient@Conversations@CoreUI@Microsoft@@AEAAXPEAVObject@System@@I@Z
    void Callback_OnPortConnectionFailed(::System::Object *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectWithRegistrar@ConversationClient@Conversations@CoreUI@Microsoft@@AEAAXW4ConversationConnectionMode@34@UEagerConversationConfiguration@Registrar@34@@Z
    void ConnectWithRegistrar(int, ::Microsoft::CoreUI::Registrar::EagerConversationConfiguration);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ConversationClient@Conversations@CoreUI@Microsoft@@CA?AV?$SmartPtr@VConversationClient@Conversations@CoreUI@Microsoft@@@CFlat@@PEAVThreadContext@Dispatch@34@PEAVString@System@@UScopeID@Registrar@34@W4ConversationConnectionMode@34@U?$FastInterfacePtr@VICallbackMessageConversationHost@CoreUI@Microsoft@@@6@UEagerConversationConfiguration@Registrar@34@@Z
    static WindissectOpaque Create$(WindissectOpaque *, ::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, int, WindissectOpaque, ::Microsoft::CoreUI::Registrar::EagerConversationConfiguration);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredConnectToNewServer@ConversationClient@Conversations@CoreUI@Microsoft@@AEAAXPEAVObject@System@@@Z
    void DeferredConnectToNewServer(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectServer@ConversationClient@Conversations@CoreUI@Microsoft@@AEAAXPEAVConversationPeer@234@_N@Z
    void DisconnectServer(::Microsoft::CoreUI::Conversations::ConversationPeer *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndpointsAvailable@ConversationClient@Conversations@CoreUI@Microsoft@@AEAAXUConversationPeerInfo@234@@Z
    void OnEndpointsAvailable(::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcureEndpointStuff@ConversationClient@Conversations@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VEndpointStuff@Conversations@CoreUI@Microsoft@@@CFlat@@PEAVConnection@Messaging@34@@Z
    WindissectOpaque ProcureEndpointStuff(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Conversations
