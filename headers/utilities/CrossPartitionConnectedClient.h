#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Messaging {
class CrossPartitionConnectedClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@CrossPartitionConnectedClient@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@CrossPartitionConnectedClient@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@CrossPartitionConnectedClient@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTrafficHeader@CrossPartitionConnectedClient@Messaging@CoreUI@Microsoft@@QEAAXPEAXI@Z
    void ProcessTrafficHeader(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Send@CrossPartitionConnectedClient@Messaging@CoreUI@Microsoft@@QEAAXPEAVBufferSet@Buffering@34@@Z
    void Send(::Microsoft::CoreUI::Buffering::BufferSet *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CrossPartitionConnectedClient@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~CrossPartitionConnectedClient();
};
} // namespace Microsoft::CoreUI::Messaging
