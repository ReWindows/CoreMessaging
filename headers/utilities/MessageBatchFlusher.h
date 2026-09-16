#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Messaging {
class MessageBatchFlusher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatch@MessageBatchFlusher@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnDispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@MessageBatchFlusher@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@MessageBatchFlusher@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VMessageBatchFlusher@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVDispatcher@Dispatch@34@W4InternalPriority@834@@Z
    static WindissectOpaque Create$(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@MessageBatchFlusher@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushPendingStreams@MessageBatchFlusher@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void FlushPendingStreams();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeFlush@MessageBatchFlusher@Messaging@CoreUI@Microsoft@@QEAAXPEAVMessageStream@234@@Z
    void RevokeFlush(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageBatchFlusher@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~MessageBatchFlusher();
};
} // namespace Microsoft::CoreUI::Messaging
