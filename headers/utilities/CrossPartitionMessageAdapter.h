#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 12 member(s).
namespace Microsoft::CoreUI::Messaging {
class CrossPartitionMessageAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachConnection@CrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@UEAA?AW4MessagingResults@234@PEAVConnection@234@U?$Ref@I@CFlat@@IU?$Ref@V?$SmartPtr@VObject@System@@@CFlat@@@8@@Z
    virtual int AttachConnection(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BatchedFlush@CrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVMessageBatchFlusher@234@PEAVMessageStream@234@@Z
    virtual void BatchedFlush(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@CrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@CrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VCrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVMessageSession@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@CrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachConnection@CrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@U?$Ref@V?$SmartPtr@VObject@System@@@CFlat@@@CFlat@@@Z
    virtual void DetachConnection(WindissectOpaque *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@UEAA?AV?$SmartPtr@VMessageStream@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVConnection@234@W4FlushPolicy@234@W4ExternalPriority@Dispatch@34@@Z
    virtual WindissectOpaque GetStream(WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingAndWait@CrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@UEAA?AW4MessagingResults@234@PEAVConnection@234@PEAXI@Z
    virtual int PingAndWait(WindissectOpaque *, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbatchedFlush@CrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@PEAVMessageStream@234@_N@Z
    virtual void UnbatchedFlush(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~CrossPartitionMessageAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachServerToClientConnection@CrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@AEAA?AW4MessagingResults@234@PEAVConnection@234@U?$Ref@I@CFlat@@U?$Ref@V?$SmartPtr@VObject@System@@@CFlat@@@8@@Z
    int AttachServerToClientConnection(WindissectOpaque *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushStream@CrossPartitionMessageAdapter@Messaging@CoreUI@Microsoft@@AEAAXPEAVConnection@234@PEAVMessageStream@234@_N@Z
    void FlushStream(WindissectOpaque *, WindissectOpaque *, bool);
};
} // namespace Microsoft::CoreUI::Messaging
