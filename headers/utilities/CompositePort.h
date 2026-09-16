#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Messaging {
class CompositePort {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPendingConnection@CompositePort@Messaging@CoreUI@Microsoft@@QEAAXPEAVConnection@234@@Z
    void AddPendingConnection(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@CompositePort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@CompositePort@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VCompositePort@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVMessageSession@234@UIntPtr@System@@PEAVString@9@PEAUGuid@9@@Z
    static WindissectOpaque Create$(WindissectOpaque *, ::System::IntPtr, ::System::String *, ::System::Guid *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@CompositePort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientInitialized@CompositePort@Messaging@CoreUI@Microsoft@@QEAAXPEAVCrossPartitionConnectedClient@234@@Z
    void OnClientInitialized(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@CompositePort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProtocolException@CompositePort@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void OnProtocolException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCrossPartition@CompositePort@Messaging@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool get_IsCrossPartition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositePort@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~CompositePort();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@CompositePort@Messaging@CoreUI@Microsoft@@IEAAXPEAVMessageSession@234@UIntPtr@System@@PEAVString@7@PEAUGuid@7@@Z
    void Init$(WindissectOpaque *, ::System::IntPtr, ::System::String *, ::System::Guid *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPendingConnectionTermination@CompositePort@Messaging@CoreUI@Microsoft@@AEAAXW4RegistrarClientId@Registrar@34@III@Z
    void OnPendingConnectionTermination(int, unsigned int, unsigned int, unsigned int);
};
} // namespace Microsoft::CoreUI::Messaging
