#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Services {
class ThreadEndpointMessageCallSendHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateBuffer@ThreadEndpointMessageCallSendHost@Services@CoreUI@Microsoft@@UEAAJPEA_KIIPEAPEAX@Z
    virtual long AllocateBuffer(uint64_t *, unsigned int, unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitBuffer@ThreadEndpointMessageCallSendHost@Services@CoreUI@Microsoft@@UEAAJPEA_KIPEAXI@Z
    virtual long SubmitBuffer(uint64_t *, unsigned int, void *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ThreadEndpointMessageCallSendHost@Services@CoreUI@Microsoft@@QEAA@XZ
    ThreadEndpointMessageCallSendHost();
};
} // namespace Microsoft::CoreUI::Services
