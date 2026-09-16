#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace CoreMessaging::Calling {
class MessageSessionHost {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitBuffer@MessageSessionHost@Calling@CoreMessaging@@MEAAJPEA_KIPEAXI@Z
    virtual long SubmitBuffer(uint64_t *, unsigned int, void *, unsigned int);
};
} // namespace CoreMessaging::Calling
