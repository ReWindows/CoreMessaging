#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 12 member(s).
namespace Microsoft::CoreUI::Messaging {
class MessageStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateMessage@MessageStream@Messaging@CoreUI@Microsoft@@QEAAPEAXUHIDENTITY@34@I@Z
    void * AllocateMessage(::Microsoft::CoreUI::HIDENTITY, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateRawMessage@MessageStream@Messaging@CoreUI@Microsoft@@QEAAPEAXI@Z
    void * AllocateRawMessage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@MessageStream@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@MessageStream@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VMessageStream@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVMessageSession@234@PEAVConnection@234@W4FlushPolicy@234@W4ExternalPriority@Dispatch@34@PEAVBufferAllocationPolicy@Buffering@34@I@Z
    static WindissectOpaque Create$(WindissectOpaque *, WindissectOpaque *, int, int, ::Microsoft::CoreUI::Buffering::BufferAllocationPolicy *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@MessageStream@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VMessageStream@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVMessageSession@234@PEAVConnection@234@W4FlushPolicy@234@W4ExternalPriority@Dispatch@34@@Z
    static WindissectOpaque Create$(WindissectOpaque *, WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@MessageStream@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessageStream@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RelinquishBuffersForTransport@MessageStream@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VBufferSet@Buffering@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque RelinquishBuffersForTransport();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Connection@MessageStream@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VConnection@Messaging@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Connection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Session@MessageStream@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VMessageSession@Messaging@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Session();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageStream@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~MessageStream();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@MessageStream@Messaging@CoreUI@Microsoft@@IEAAXPEAVMessageSession@234@PEAVConnection@234@W4FlushPolicy@234@W4ExternalPriority@Dispatch@34@PEAVBufferAllocationPolicy@Buffering@34@I@Z
    void Init$(WindissectOpaque *, WindissectOpaque *, int, int, ::Microsoft::CoreUI::Buffering::BufferAllocationPolicy *, unsigned int);
};
} // namespace Microsoft::CoreUI::Messaging
