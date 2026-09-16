#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Conversations {
class ConversationControlEndpoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnMessageCore@ConversationControlEndpoint@Conversations@CoreUI@Microsoft@@UEAAXUBufferInfo@Support@34@@Z
    virtual void Callback_OnMessageCore(::Microsoft::CoreUI::Support::BufferInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ConversationControlEndpoint@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ConversationControlEndpoint@Conversations@CoreUI@Microsoft@@SA?AV?$SmartPtr@VConversationControlEndpoint@Conversations@CoreUI@Microsoft@@@CFlat@@PEAVThreadContext@Dispatch@34@PEAVConversation@234@PEAVObject@System@@PEAVCrossProcessReceivePortBase@Messaging@34@@Z
    static WindissectOpaque Create$(WindissectOpaque *, ::Microsoft::CoreUI::Conversations::Conversation *, ::System::Object *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ConversationControlEndpoint@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConversationControlEndpoint@Conversations@CoreUI@Microsoft@@QEAA@XZ
    ~ConversationControlEndpoint();
};
} // namespace Microsoft::CoreUI::Conversations
