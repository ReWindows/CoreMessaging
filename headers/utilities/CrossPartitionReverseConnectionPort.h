#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 15 member(s).
namespace Microsoft::CoreUI::Messaging {
class CrossPartitionReverseConnectionPort {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?CheckIncomingHighPriorityMessages@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void CheckIncomingHighPriorityMessages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@QEAA?AW4MessagingResults@234@I@Z
    int Connect(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VCrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVConnection@234@U?$Ref@UGuid@System@@@6@@Z
    static WindissectOpaque Create$(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProtocolException@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void OnProtocolException();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerDisconnected@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void OnServerDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCrossPartition@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool get_IsCrossPartition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReceivesHighPriorityMessages@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool get_ReceivesHighPriorityMessages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_ReceivesHighPriorityMessages@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void set_ReceivesHighPriorityMessages(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~CrossPartitionReverseConnectionPort();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(::CFlat::ComExportAdapterContainer *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_CleanupDisconnectedClient@CrossPartitionReverseConnectionPort@Messaging@CoreUI@Microsoft@@CAXPEAVObject@System@@@Z
    static void Callback_CleanupDisconnectedClient(::System::Object *);
};
} // namespace Microsoft::CoreUI::Messaging
