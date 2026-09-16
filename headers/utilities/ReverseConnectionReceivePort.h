#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::Messaging {
class ReverseConnectionReceivePort {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIncomingHighPriorityMessages@ReverseConnectionReceivePort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void CheckIncomingHighPriorityMessages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ReverseConnectionReceivePort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ReverseConnectionReceivePort@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VReverseConnectionReceivePort@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVConnection@234@U?$Ref@UGuid@System@@@6@@Z
    static WindissectOpaque Create$(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ReverseConnectionReceivePort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReceivesHighPriorityMessages@ReverseConnectionReceivePort@Messaging@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool get_ReceivesHighPriorityMessages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_ReceivesHighPriorityMessages@ReverseConnectionReceivePort@Messaging@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void set_ReceivesHighPriorityMessages(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReverseConnectionReceivePort@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~ReverseConnectionReceivePort();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@ReverseConnectionReceivePort@Messaging@CoreUI@Microsoft@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(::CFlat::ComExportAdapterContainer *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@ReverseConnectionReceivePort@Messaging@CoreUI@Microsoft@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
};
} // namespace Microsoft::CoreUI::Messaging
