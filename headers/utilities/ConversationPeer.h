#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Conversations {
class ConversationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ConversationPeer@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ConversationPeer@Conversations@CoreUI@Microsoft@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@5@@Z
    ConversationPeer(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ConversationPeer@Conversations@CoreUI@Microsoft@@SA?AV?$SmartPtr@VConversationPeer@Conversations@CoreUI@Microsoft@@@CFlat@@PEAVConversation@234@PEAVConnection@Messaging@34@UConversationPeerInfo@234@@Z
    static WindissectOpaque Create$(::Microsoft::CoreUI::Conversations::Conversation *, WindissectOpaque *, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ConversationPeer@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ConversationPeer@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConversationPeer@Conversations@CoreUI@Microsoft@@QEAA@XZ
    ~ConversationPeer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@ConversationPeer@Conversations@CoreUI@Microsoft@@IEAAXPEAVConversation@234@PEAVConnection@Messaging@34@UConversationPeerInfo@234@@Z
    void Init$(::Microsoft::CoreUI::Conversations::Conversation *, WindissectOpaque *, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
};
} // namespace Microsoft::CoreUI::Conversations
