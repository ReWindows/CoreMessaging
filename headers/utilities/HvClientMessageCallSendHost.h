#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Registrar {
class HvClientMessageCallSendHost {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateBuffer@HvClientMessageCallSendHost@Registrar@CoreUI@Microsoft@@EEAAJPEA_KIIPEAPEAX@Z
    virtual long AllocateBuffer(uint64_t *, unsigned int, unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBufferTotalSize@HvClientMessageCallSendHost@Registrar@CoreUI@Microsoft@@CAIIPEAI@Z
    static unsigned int ComputeBufferTotalSize(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitBuffer@HvClientMessageCallSendHost@Registrar@CoreUI@Microsoft@@EEAAJPEA_KIPEAXI@Z
    virtual long SubmitBuffer(uint64_t *, unsigned int, void *, unsigned int);
};
} // namespace Microsoft::CoreUI::Registrar
