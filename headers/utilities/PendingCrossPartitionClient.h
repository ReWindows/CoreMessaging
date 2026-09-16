#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Messaging {
class PendingCrossPartitionClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@PendingCrossPartitionClient@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@PendingCrossPartitionClient@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@PendingCrossPartitionClient@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrainCachedMessages@PendingCrossPartitionClient@Messaging@CoreUI@Microsoft@@QEAAXPEAVCrossPartitionConnectedClient@234@@Z
    void DrainCachedMessages(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Messaging
