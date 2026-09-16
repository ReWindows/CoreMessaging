#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 20 member(s).
namespace Microsoft::CoreUI::Buffering {
class BufferManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocBufferStreamInstance@BufferManager@Buffering@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VBufferStream@Buffering@CoreUI@Microsoft@@@CFlat@@PEAVBufferAllocationPolicy@234@I@Z
    WindissectOpaque AllocBufferStreamInstance(::Microsoft::CoreUI::Buffering::BufferAllocationPolicy *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocHeapBlockInstance@BufferManager@Buffering@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VBufferHeapBlock@Buffering@CoreUI@Microsoft@@@CFlat@@PEAVBufferStream@234@I@Z
    WindissectOpaque AllocHeapBlockInstance(::Microsoft::CoreUI::Buffering::BufferStream *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocMemoryRangeInstance@BufferManager@Buffering@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VBufferMemoryRange@Buffering@CoreUI@Microsoft@@@CFlat@@PEAVBufferHeapBlock@234@PEAEII@Z
    WindissectOpaque AllocMemoryRangeInstance(::Microsoft::CoreUI::Buffering::BufferHeapBlock *, unsigned char *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@BufferManager@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBufferStream@BufferManager@Buffering@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VBufferStream@Buffering@CoreUI@Microsoft@@@CFlat@@PEAVBufferAllocationPolicy@234@I@Z
    WindissectOpaque CreateBufferStream(::Microsoft::CoreUI::Buffering::BufferAllocationPolicy *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStockAllocationPolicy@BufferManager@Buffering@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VBufferAllocationPolicy@Buffering@CoreUI@Microsoft@@@CFlat@@II_NI@Z
    WindissectOpaque CreateStockAllocationPolicy(unsigned int, unsigned int, bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@BufferManager@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BufferManager@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleBufferSetInstance@BufferManager@Buffering@CoreUI@Microsoft@@QEAAXPEAVBufferSet@234@@Z
    void RecycleBufferSetInstance(::Microsoft::CoreUI::Buffering::BufferSet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleBufferStreamInstance@BufferManager@Buffering@CoreUI@Microsoft@@QEAAXPEAVBufferStream@234@@Z
    void RecycleBufferStreamInstance(::Microsoft::CoreUI::Buffering::BufferStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleHeapBlockInstance@BufferManager@Buffering@CoreUI@Microsoft@@QEAAXPEAVBufferHeapBlock@234@@Z
    void RecycleHeapBlockInstance(::Microsoft::CoreUI::Buffering::BufferHeapBlock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleMemoryRangeInstance@BufferManager@Buffering@CoreUI@Microsoft@@QEAAXPEAVBufferMemoryRange@234@@Z
    void RecycleMemoryRangeInstance(::Microsoft::CoreUI::Buffering::BufferMemoryRange *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferManager@Buffering@CoreUI@Microsoft@@QEAA@XZ
    ~BufferManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@BufferManager@Buffering@CoreUI@Microsoft@@IEAAXPEAVEventLoop@Dispatch@34@@Z
    void Init$(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDefaultPolicyEntries@BufferManager@Buffering@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@V?$Array$2@UBufferPolicyEntry@Buffering@CoreUI@Microsoft@@$00@CFlat@@@CFlat@@XZ
    WindissectOpaque BuildDefaultPolicyEntries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultPolicyEntries@BufferManager@Buffering@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@V?$Array$2@UBufferPolicyEntry@Buffering@CoreUI@Microsoft@@$00@CFlat@@@CFlat@@XZ
    WindissectOpaque get_DefaultPolicyEntries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeBlockAllocator@BufferManager@Buffering@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VLargeBlockAllocator@Buffering@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_LargeBlockAllocator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessHeapAllocator@BufferManager@Buffering@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VProcessHeapAllocator@Buffering@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_ProcessHeapAllocator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SharedPoolAllocator@BufferManager@Buffering@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VSharedPoolAllocator@Buffering@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_SharedPoolAllocator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallBlockAllocator@BufferManager@Buffering@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VSmallBlockAllocator@Buffering@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_SmallBlockAllocator();
};
} // namespace Microsoft::CoreUI::Buffering
