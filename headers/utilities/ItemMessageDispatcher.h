#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Conversations {
class ItemMessageDispatcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnMessageCore@ItemMessageDispatcher@Conversations@CoreUI@Microsoft@@UEAAXUBufferInfo@Support@34@@Z
    virtual void Callback_OnMessageCore(::Microsoft::CoreUI::Support::BufferInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ItemMessageDispatcher@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ItemMessageDispatcher@Conversations@CoreUI@Microsoft@@SA?AV?$SmartPtr@VItemMessageDispatcher@Conversations@CoreUI@Microsoft@@@CFlat@@PEAVThreadContext@Dispatch@34@PEAVConversation@234@PEAVObject@System@@PEAVCrossProcessReceivePortBase@Messaging@34@@Z
    static WindissectOpaque Create$(WindissectOpaque *, ::Microsoft::CoreUI::Conversations::Conversation *, ::System::Object *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ItemMessageDispatcher@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemMessageDispatcher@Conversations@CoreUI@Microsoft@@QEAA@XZ
    ~ItemMessageDispatcher();
};
} // namespace Microsoft::CoreUI::Conversations
