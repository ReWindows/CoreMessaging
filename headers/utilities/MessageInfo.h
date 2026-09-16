#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Messaging {
class MessageInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@MessageInfo@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VMessageInfo@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVMessageSession@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@MessageInfo@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageInfo@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~MessageInfo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@MessageInfo@Messaging@CoreUI@Microsoft@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(::CFlat::ComExportAdapterContainer *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@MessageInfo@Messaging@CoreUI@Microsoft@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageInfo_get_CurrentSenderInfo$@MessageInfo@Messaging@CoreUI@Microsoft@@AEAA?AUSenderInfo@234@XZ
    WindissectOpaque Microsoft_CoreUI_IExportMessageInfo_get_CurrentSenderInfo$();
};
} // namespace Microsoft::CoreUI::Messaging
