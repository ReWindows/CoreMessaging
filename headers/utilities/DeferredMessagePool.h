#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 18 member(s).
namespace Microsoft::CoreUI::Messaging {
class DeferredMessagePool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachEndpoint@DeferredMessagePool@Messaging@CoreUI@Microsoft@@QEAAXPEAVMessageEndpoint@234@@Z
    void AttachEndpoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@DeferredMessagePool@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@DeferredMessagePool@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VDeferredMessagePool@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVMessageSession@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@DeferredMessagePool@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@DeferredMessagePool@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReceive@DeferredMessagePool@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnReceive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_DeferMessageDelivery@DeferredMessagePool@Messaging@CoreUI@Microsoft@@QEAAX_N@Z
    void set_DeferMessageDelivery(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeferredMessagePool@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~DeferredMessagePool();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@DeferredMessagePool@Messaging@CoreUI@Microsoft@@IEAAXPEAVMessageSession@234@@Z
    void Init$(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdvanceOutgoingInfos@DeferredMessagePool@Messaging@CoreUI@Microsoft@@AEAAPEAUDeferredMessagePool$MessageInfoRun@234@XZ
    WindissectOpaque$MessageInfoRun * AdvanceOutgoingInfos();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnMessage@DeferredMessagePool@Messaging@CoreUI@Microsoft@@AEAAXPEAV?$Action$1@UBufferInfo@Support@CoreUI@Microsoft@@@System@@UBufferInfo@Support@34@@Z
    void Callback_OnMessage(::System::Action$1<::Microsoft::CoreUI::Support::BufferInfo> *, ::Microsoft::CoreUI::Support::BufferInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteIncomingBufferSet@DeferredMessagePool@Messaging@CoreUI@Microsoft@@AEAA_NXZ
    bool CompleteIncomingBufferSet();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffThreadReceiver@DeferredMessagePool@Messaging@CoreUI@Microsoft@@CA?AV?$SmartPtr@VOffThreadReceiver@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVMessageSession@234@PEAVCrossProcessReceivePortBase@234@@Z
    static WindissectOpaque GetOffThreadReceiver(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@DeferredMessagePool@Messaging@CoreUI@Microsoft@@AEAA_NXZ
    bool MoveNext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBatchCompleted@DeferredMessagePool@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void OnBatchCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@DeferredMessagePool@Messaging@CoreUI@Microsoft@@AEAA?AUDeferredMessagePool$Message@234@XZ
    WindissectOpaque$Message get_Current();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEmpty@DeferredMessagePool@Messaging@CoreUI@Microsoft@@AEAA_NXZ
    bool get_IsEmpty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Port@DeferredMessagePool@Messaging@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VCrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Port();
};
} // namespace Microsoft::CoreUI::Messaging
