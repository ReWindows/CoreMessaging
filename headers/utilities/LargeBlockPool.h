#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Buffering {
class LargeBlockPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireBlock@LargeBlockPool@Buffering@CoreUI@Microsoft@@QEAA_NPEAXPEAPEAEPEAI@Z
    bool AcquireBlock(void *, unsigned char * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@LargeBlockPool@Buffering@CoreUI@Microsoft@@QEAAX_N@Z
    void Initialize(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnsMemory@LargeBlockPool@Buffering@CoreUI@Microsoft@@QEAA_NPEAE@Z
    bool OwnsMemory(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBlock@LargeBlockPool@Buffering@CoreUI@Microsoft@@QEAAXPEAEI@Z
    void ReleaseBlock(unsigned char *, unsigned int);
};
} // namespace Microsoft::CoreUI::Buffering
