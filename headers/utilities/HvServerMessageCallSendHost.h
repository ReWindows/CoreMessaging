#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Registrar {
class HvServerMessageCallSendHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateBuffer@HvServerMessageCallSendHost@Registrar@CoreUI@Microsoft@@UEAAJPEA_KIIPEAPEAX@Z
    virtual long AllocateBuffer(uint64_t *, unsigned int, unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitBuffer@HvServerMessageCallSendHost@Registrar@CoreUI@Microsoft@@UEAAJPEA_KIPEAXI@Z
    virtual long SubmitBuffer(uint64_t *, unsigned int, void *, unsigned int);
};
} // namespace Microsoft::CoreUI::Registrar
