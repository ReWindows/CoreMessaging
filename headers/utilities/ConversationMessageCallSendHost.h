#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Conversations {
class ConversationMessageCallSendHost {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateBuffer@ConversationMessageCallSendHost@Conversations@CoreUI@Microsoft@@EEAAJPEA_KIIPEAPEAX@Z
    virtual long AllocateBuffer(uint64_t *, unsigned int, unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitBuffer@ConversationMessageCallSendHost@Conversations@CoreUI@Microsoft@@EEAAJPEA_KIPEAXI@Z
    virtual long SubmitBuffer(uint64_t *, unsigned int, void *, unsigned int);
};
} // namespace Microsoft::CoreUI::Conversations
