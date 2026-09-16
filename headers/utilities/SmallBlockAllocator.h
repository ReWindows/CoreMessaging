#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Buffering {
class SmallBlockAllocator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@SmallBlockAllocator@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@SmallBlockAllocator@Buffering@CoreUI@Microsoft@@SA?AV?$SmartPtr@VSmallBlockAllocator@Buffering@CoreUI@Microsoft@@@CFlat@@PEAVBufferManager@234@PEAVSharedPoolAllocator@234@@Z
    static WindissectOpaque Create$(::Microsoft::CoreUI::Buffering::BufferManager *, ::Microsoft::CoreUI::Buffering::SharedPoolAllocator *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@SmallBlockAllocator@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@SmallBlockAllocator@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SmallBlockAllocator@Buffering@CoreUI@Microsoft@@QEAA@XZ
    ~SmallBlockAllocator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@SmallBlockAllocator@Buffering@CoreUI@Microsoft@@IEAAXPEAVBufferManager@234@PEAVSharedPoolAllocator@234@@Z
    void Init$(::Microsoft::CoreUI::Buffering::BufferManager *, ::Microsoft::CoreUI::Buffering::SharedPoolAllocator *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBackingMemory@SmallBlockAllocator@Buffering@CoreUI@Microsoft@@AEAAXXZ
    void ReleaseBackingMemory();
};
} // namespace Microsoft::CoreUI::Buffering
