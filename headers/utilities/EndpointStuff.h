#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::Conversations {
class EndpointStuff {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@EndpointStuff@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@EndpointStuff@Conversations@CoreUI@Microsoft@@SA?AV?$SmartPtr@VEndpointStuff@Conversations@CoreUI@Microsoft@@@CFlat@@PEAVThreadContext@Dispatch@34@PEAVConversation@234@PEAVCrossProcessReceivePortBase@Messaging@34@_N@Z
    static WindissectOpaque Create$(WindissectOpaque *, ::Microsoft::CoreUI::Conversations::Conversation *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@EndpointStuff@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@EndpointStuff@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebindPorts@EndpointStuff@Conversations@CoreUI@Microsoft@@QEAAXPEAVCrossProcessReceivePortBase@Messaging@34@@Z
    void RebindPorts(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeferMessageDelivery@EndpointStuff@Conversations@CoreUI@Microsoft@@QEAAXPEAVMessageSession@Messaging@34@_N@Z
    void SetDeferMessageDelivery(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToPeerInfo@EndpointStuff@Conversations@CoreUI@Microsoft@@QEAA?AUConversationPeerInfo@234@I@Z
    ::Microsoft::CoreUI::Conversations::ConversationPeerInfo ToPeerInfo(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EndpointStuff@Conversations@CoreUI@Microsoft@@QEAA@XZ
    ~EndpointStuff();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@EndpointStuff@Conversations@CoreUI@Microsoft@@IEAAXPEAVThreadContext@Dispatch@34@PEAVConversation@234@PEAVCrossProcessReceivePortBase@Messaging@34@_N@Z
    void Init$(WindissectOpaque *, ::Microsoft::CoreUI::Conversations::Conversation *, WindissectOpaque *, bool);
};
} // namespace Microsoft::CoreUI::Conversations
