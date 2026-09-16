#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Buffering {
class BufferSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocEntry@BufferSet@Buffering@CoreUI@Microsoft@@QEAAPEAXI@Z
    void * AllocEntry(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocationCompleted@BufferSet@Buffering@CoreUI@Microsoft@@QEAAXXZ
    void AllocationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@BufferSet@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@BufferSet@Buffering@CoreUI@Microsoft@@SA?AV?$SmartPtr@VBufferSet@Buffering@CoreUI@Microsoft@@@CFlat@@_N@Z
    static WindissectOpaque Create$(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@BufferSet@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisposeList@BufferSet@Buffering@CoreUI@Microsoft@@SAXU?$Ref@V?$SmartPtr@VBufferSet@Buffering@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    static void DisposeList(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFirstBufferConsumed@BufferSet@Buffering@CoreUI@Microsoft@@QEAAXXZ
    void NotifyFirstBufferConsumed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BufferSet@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReverseList@BufferSet@Buffering@CoreUI@Microsoft@@SAXU?$Ref@V?$SmartPtr@VBufferSet@Buffering@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    static void ReverseList(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstBuffer@BufferSet@Buffering@CoreUI@Microsoft@@QEAA?AUBufferInfo@Support@34@XZ
    ::Microsoft::CoreUI::Support::BufferInfo get_FirstBuffer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferSet@Buffering@CoreUI@Microsoft@@QEAA@XZ
    ~BufferSet();
};
} // namespace Microsoft::CoreUI::Buffering
