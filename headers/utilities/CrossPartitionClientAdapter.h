#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Messaging {
class CrossPartitionClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@CrossPartitionClientAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@CrossPartitionClientAdapter@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VCrossPartitionClientAdapter@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVEventLoop@Dispatch@34@PEAVCrossPartitionReverseConnectionPort@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@CrossPartitionClientAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchBuffer@CrossPartitionClientAdapter@Messaging@CoreUI@Microsoft@@UEAA_NPEAXI@Z
    virtual bool DispatchBuffer(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@CrossPartitionClientAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPendingConnectionComplete@CrossPartitionClientAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnPendingConnectionComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReceivedInvalidHeader@CrossPartitionClientAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnReceivedInvalidHeader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerDisconnected@CrossPartitionClientAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnServerDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Send@CrossPartitionClientAdapter@Messaging@CoreUI@Microsoft@@QEAA_NPEAVBufferSet@Buffering@34@@Z
    bool Send(::Microsoft::CoreUI::Buffering::BufferSet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendClientId@CrossPartitionClientAdapter@Messaging@CoreUI@Microsoft@@QEAA_NW4RegistrarClientId@Registrar@34@@Z
    bool SendClientId(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CrossPartitionClientAdapter@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~CrossPartitionClientAdapter();
};
} // namespace Microsoft::CoreUI::Messaging
