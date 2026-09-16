#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Registrar {
class ConversationClientConnectionInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ConversationClientConnectionInfo@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ConversationClientConnectionInfo@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@ConversationClientConnectionInfo@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@ConversationClientConnectionInfo@Registrar@CoreUI@Microsoft@@QEAAXXZ
    void OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeerIdIsStrongRef@ConversationClientConnectionInfo@Registrar@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool PeerIdIsStrongRef();
};
} // namespace Microsoft::CoreUI::Registrar
