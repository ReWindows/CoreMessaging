#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Buffering {
class BufferStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@BufferStream@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@BufferStream@Buffering@CoreUI@Microsoft@@SA?AV?$SmartPtr@VBufferStream@Buffering@CoreUI@Microsoft@@@CFlat@@_N@Z
    static WindissectOpaque Create$(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBufferSet@BufferStream@Buffering@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VBufferSet@Buffering@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque CreateBufferSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@BufferStream@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BufferStream@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveRange@BufferStream@Buffering@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VBufferMemoryRange@Buffering@CoreUI@Microsoft@@@CFlat@@I@Z
    WindissectOpaque ReserveRange(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferStream@Buffering@CoreUI@Microsoft@@QEAA@XZ
    ~BufferStream();
};
} // namespace Microsoft::CoreUI::Buffering
