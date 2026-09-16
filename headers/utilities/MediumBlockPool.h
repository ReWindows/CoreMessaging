#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Buffering {
class MediumBlockPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@MediumBlockPool@Buffering@CoreUI@Microsoft@@QEAAPEAEPEAI@Z
    unsigned char * Allocate(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@MediumBlockPool@Buffering@CoreUI@Microsoft@@QEAAXPEAEI@Z
    void Free(unsigned char *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MediumBlockPool@Buffering@CoreUI@Microsoft@@QEAAXXZ
    void Initialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireMemory@MediumBlockPool@Buffering@CoreUI@Microsoft@@AEAAXPEAUChunkInfo@234@@Z
    void AcquireMemory(::Microsoft::CoreUI::Buffering::ChunkInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForMemory@MediumBlockPool@Buffering@CoreUI@Microsoft@@AEAAXPEAUChunkInfo@234@@Z
    void WaitForMemory(::Microsoft::CoreUI::Buffering::ChunkInfo *);
};
} // namespace Microsoft::CoreUI::Buffering
