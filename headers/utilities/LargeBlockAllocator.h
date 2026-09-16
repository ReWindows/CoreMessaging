#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Buffering {
class LargeBlockAllocator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@LargeBlockAllocator@Buffering@CoreUI@Microsoft@@QEAAPEAEU?$Ref@I@CFlat@@@Z
    unsigned char * Allocate(WindissectOpaque);
    // Category: Method | Source: PE Export
    // Symbol: ?ClearReferenceFields$@LargeBlockAllocator@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@LargeBlockAllocator@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitClass@LargeBlockAllocator@Buffering@CoreUI@Microsoft@@SAX_N@Z
    static void InitClass(bool);
};
} // namespace Microsoft::CoreUI::Buffering
