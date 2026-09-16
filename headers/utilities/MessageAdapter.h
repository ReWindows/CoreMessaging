#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 10 member(s).
namespace Microsoft::CoreUI::Messaging {
class MessageAdapter {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?AllSharedMappingsReleased@MessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVObject@System@@@Z
    virtual void AllSharedMappingsReleased(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachConnection@MessageAdapter@Messaging@CoreUI@Microsoft@@UEAA?AW4MessagingResults@234@PEAVConnection@234@U?$Ref@I@CFlat@@IU?$Ref@V?$SmartPtr@VObject@System@@@CFlat@@@8@@Z
    virtual int AttachConnection(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@MessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PE Export
    // Symbol: ?CompleteConnection@MessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@PEAVObject@System@@@Z
    virtual void CompleteConnection(WindissectOpaque *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPendingSends@MessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVMessageStream@234@@Z
    virtual void NotifyPendingSends(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyStreamDisposed@MessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVMessageStream@234@@Z
    virtual void NotifyStreamDisposed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutOfBandFlush@MessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@PEAVMessageStream@234@_N@Z
    virtual void OutOfBandFlush(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?PrepareToDetachConnection@MessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@U?$Ref@V?$SmartPtr@VObject@System@@@CFlat@@@CFlat@@@Z
    virtual void PrepareToDetachConnection(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PE Export
    // Symbol: ?ReleaseStream@MessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVMessageStream@234@@Z
    virtual void ReleaseStream(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Session@MessageAdapter@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VMessageSession@Messaging@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Session();
};
} // namespace Microsoft::CoreUI::Messaging
