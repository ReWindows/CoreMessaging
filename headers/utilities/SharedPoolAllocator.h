#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Buffering {
class SharedPoolAllocator {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?ClearReferenceFields$@SharedPoolAllocator@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@SharedPoolAllocator@Buffering@CoreUI@Microsoft@@SA?AV?$SmartPtr@VSharedPoolAllocator@Buffering@CoreUI@Microsoft@@@CFlat@@XZ
    static WindissectOpaque Create$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@SharedPoolAllocator@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitClass@SharedPoolAllocator@Buffering@CoreUI@Microsoft@@SAX_N@Z
    static void InitClass(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@SharedPoolAllocator@Buffering@CoreUI@Microsoft@@IEAAXXZ
    void Init$();
};
} // namespace Microsoft::CoreUI::Buffering
