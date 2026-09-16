#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegisteredConversationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RegisteredConversationPeer@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@RegisteredConversationPeer@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeerIdIsStrongRef@RegisteredConversationPeer@Registrar@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool PeerIdIsStrongRef();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegisteredConversationPeer@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~RegisteredConversationPeer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@RegisteredConversationPeer@Registrar@CoreUI@Microsoft@@IEAAXPEAVRegisteredConversation@234@PEAVRegistrarThreadContext@234@UConversationPeerInfo@Conversations@34@@Z
    void Init$(::Microsoft::CoreUI::Registrar::RegisteredConversation *, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
};
} // namespace Microsoft::CoreUI::Registrar
