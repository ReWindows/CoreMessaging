#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Conversations {
class IDLRUAllocator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@IDLRUAllocator@Conversations@CoreUI@Microsoft@@SA?AV?$SmartPtr@VIDLRUAllocator@Conversations@CoreUI@Microsoft@@@CFlat@@HH@Z
    static WindissectOpaque Create$(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@IDLRUAllocator@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeID@IDLRUAllocator@Conversations@CoreUI@Microsoft@@UEAA_NI@Z
    virtual bool FreeID(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IDLRUAllocator@Conversations@CoreUI@Microsoft@@QEAA@XZ
    ~IDLRUAllocator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToLRU@IDLRUAllocator@Conversations@CoreUI@Microsoft@@AEAA_NIU?$Ref@I@CFlat@@@Z
    bool AddToLRU(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindInLRU@IDLRUAllocator@Conversations@CoreUI@Microsoft@@AEAA_NI@Z
    bool FindInLRU(unsigned int);
};
} // namespace Microsoft::CoreUI::Conversations
