#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Buffering {
class BufferMemoryRange {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@BufferMemoryRange@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@BufferMemoryRange@Buffering@CoreUI@Microsoft@@SA?AV?$SmartPtr@VBufferMemoryRange@Buffering@CoreUI@Microsoft@@@CFlat@@_N@Z
    static WindissectOpaque Create$(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@BufferMemoryRange@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BufferMemoryRange@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@BufferMemoryRange@Buffering@CoreUI@Microsoft@@QEAAXXZ
    void Trim();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferMemoryRange@Buffering@CoreUI@Microsoft@@QEAA@XZ
    ~BufferMemoryRange();
};
} // namespace Microsoft::CoreUI::Buffering
