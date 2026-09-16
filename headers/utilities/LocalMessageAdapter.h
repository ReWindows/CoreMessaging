#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 15 member(s).
namespace Microsoft::CoreUI::Messaging {
class LocalMessageAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BatchedFlush@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVMessageBatchFlusher@234@PEAVMessageStream@234@@Z
    virtual void BatchedFlush(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteConnection@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@PEAVObject@System@@@Z
    virtual void CompleteConnection(WindissectOpaque *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachConnection@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@U?$Ref@V?$SmartPtr@VObject@System@@@CFlat@@@CFlat@@@Z
    virtual void DetachConnection(WindissectOpaque *, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@UEAA?AV?$SmartPtr@VMessageStream@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVConnection@234@W4FlushPolicy@234@W4ExternalPriority@Dispatch@34@@Z
    virtual WindissectOpaque GetStream(WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPendingSends@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVMessageStream@234@@Z
    virtual void NotifyPendingSends(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutOfBandFlush@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@PEAVMessageStream@234@_N@Z
    virtual void OutOfBandFlush(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingAndWait@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@UEAA?AW4MessagingResults@234@PEAVConnection@234@PEAXI@Z
    virtual int PingAndWait(WindissectOpaque *, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbatchedFlush@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@PEAVMessageStream@234@_N@Z
    virtual void UnbatchedFlush(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LocalMessageAdapter@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~LocalMessageAdapter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@IEAAXPEAVMessageSession@234@@Z
    void Init$(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatch@LocalMessageAdapter@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void Callback_OnDispatch();
};
} // namespace Microsoft::CoreUI::Messaging
