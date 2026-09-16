#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace CoreMessaging::Calling {
class MessageConversationHost {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageConversationHost@Calling@CoreMessaging@@UEAA@XZ
    virtual ~MessageConversationHost();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitBuffer@MessageConversationHost@Calling@CoreMessaging@@MEAAJPEA_KIPEAXI@Z
    virtual long SubmitBuffer(uint64_t *, unsigned int, void *, unsigned int);
};
} // namespace CoreMessaging::Calling
