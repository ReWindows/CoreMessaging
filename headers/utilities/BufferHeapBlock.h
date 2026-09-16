#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Buffering {
class BufferHeapBlock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@BufferHeapBlock@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@BufferHeapBlock@Buffering@CoreUI@Microsoft@@SA?AV?$SmartPtr@VBufferHeapBlock@Buffering@CoreUI@Microsoft@@@CFlat@@_N@Z
    static WindissectOpaque Create$(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@BufferHeapBlock@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BufferHeapBlock@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferHeapBlock@Buffering@CoreUI@Microsoft@@QEAA@XZ
    ~BufferHeapBlock();
};
} // namespace Microsoft::CoreUI::Buffering
