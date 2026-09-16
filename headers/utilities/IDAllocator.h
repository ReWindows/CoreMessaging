#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Conversations {
class IDAllocator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateID@IDAllocator@Conversations@CoreUI@Microsoft@@UEAA_NU?$Ref@I@CFlat@@@Z
    virtual bool AllocateID(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateKnownID@IDAllocator@Conversations@CoreUI@Microsoft@@UEAA_NI@Z
    virtual bool AllocateKnownID(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@IDAllocator@Conversations@CoreUI@Microsoft@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeID@IDAllocator@Conversations@CoreUI@Microsoft@@UEAA_NI@Z
    virtual bool FreeID(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidID@IDAllocator@Conversations@CoreUI@Microsoft@@UEAA_NI@Z
    virtual bool IsValidID(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@IDAllocator@Conversations@CoreUI@Microsoft@@IEAAXH@Z
    void Init$(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GrowStorage@IDAllocator@Conversations@CoreUI@Microsoft@@AEAAXH@Z
    void GrowStorage(int);
};
} // namespace Microsoft::CoreUI::Conversations
