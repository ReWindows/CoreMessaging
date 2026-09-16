#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 14 member(s).
namespace Microsoft::CoreUI::Messaging {
class AlpcSendMessageAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachConnection@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@UEAA?AW4MessagingResults@234@PEAVConnection@234@U?$Ref@I@CFlat@@IU?$Ref@V?$SmartPtr@VObject@System@@@CFlat@@@8@@Z
    virtual int AttachConnection(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BatchedFlush@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVMessageBatchFlusher@234@PEAVMessageStream@234@@Z
    virtual void BatchedFlush(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PE Export
    // Symbol: ?DetachConnection@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@U?$Ref@V?$SmartPtr@VObject@System@@@CFlat@@@CFlat@@@Z
    virtual void DetachConnection(WindissectOpaque *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@UEAA?AV?$SmartPtr@VMessageStream@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVConnection@234@W4FlushPolicy@234@W4ExternalPriority@Dispatch@34@@Z
    virtual WindissectOpaque GetStream(WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingAndWait@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@UEAA?AW4MessagingResults@234@PEAVConnection@234@PEAXI@Z
    virtual int PingAndWait(WindissectOpaque *, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareToDetachConnection@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@U?$Ref@V?$SmartPtr@VObject@System@@@CFlat@@@CFlat@@@Z
    virtual void PrepareToDetachConnection(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseStream@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVMessageStream@234@@Z
    virtual void ReleaseStream(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPendingPingResult@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@QEAAXPEAXI@Z
    void SetPendingPingResult(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbatchedFlush@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@PEAVMessageStream@234@_N@Z
    virtual void UnbatchedFlush(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~AlpcSendMessageAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushStream@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@AEAAXPEAVConnection@234@PEAVMessageStream@234@_N@Z
    void FlushStream(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllocationPolicy@AlpcSendMessageAdapter@Messaging@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VBufferAllocationPolicy@Buffering@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_AllocationPolicy();
};
} // namespace Microsoft::CoreUI::Messaging
