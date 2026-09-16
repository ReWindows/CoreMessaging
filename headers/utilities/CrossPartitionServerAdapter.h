#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::Messaging {
class CrossPartitionServerAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@CrossPartitionServerAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@CrossPartitionServerAdapter@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VCrossPartitionServerAdapter@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVEventLoop@Dispatch@34@PEAUGuid@System@@PEAVCompositePort@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *, ::System::Guid *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateConnectedClient@CrossPartitionServerAdapter@Messaging@CoreUI@Microsoft@@UEAA?AV?$SmartPtr@VHvConnectedClient@HvSockets@CoreUI@Microsoft@@@CFlat@@XZ
    virtual WindissectOpaque CreateConnectedClient();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@CrossPartitionServerAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchBufferCore@CrossPartitionServerAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAXI@Z
    virtual void DispatchBufferCore(void *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectedClient$FastReturn$@CrossPartitionServerAdapter@Messaging@CoreUI@Microsoft@@QEAAPEAVCrossPartitionConnectedClient@234@PEAVConnection@234@@Z
    WindissectOpaque * GetConnectedClient$FastReturn$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@CrossPartitionServerAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReceivedInvalidHeader@CrossPartitionServerAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnReceivedInvalidHeader();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CrossPartitionServerAdapter@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~CrossPartitionServerAdapter();
};
} // namespace Microsoft::CoreUI::Messaging
