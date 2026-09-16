#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Messaging {
class MessageSessionPrivateWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@MessageSessionPrivateWrapper@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageSessionPrivateWrapper@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~MessageSessionPrivateWrapper();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@MessageSessionPrivateWrapper@Messaging@CoreUI@Microsoft@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(::CFlat::ComExportAdapterContainer *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@MessageSessionPrivateWrapper@Messaging@CoreUI@Microsoft@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_AllocateRemoteEndpoint$@MessageSessionPrivateWrapper@Messaging@CoreUI@Microsoft@@AEAAJU?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@0U?$Ref@UHENDPOINT@CoreUI@Microsoft@@@6@1@Z
    long Microsoft_CoreUI_IExportMessageSessionPrivate_AllocateRemoteEndpoint$(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_ClaimRemoteEndpoint$@MessageSessionPrivateWrapper@Messaging@CoreUI@Microsoft@@AEAA?AUIntPtr@System@@U?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@0PEAVExportEndpointHandler@34@@Z
    ::System::IntPtr Microsoft_CoreUI_IExportMessageSessionPrivate_ClaimRemoteEndpoint$(WindissectOpaque, WindissectOpaque, ::Microsoft::CoreUI::ExportEndpointHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_EstablishConnection$@MessageSessionPrivateWrapper@Messaging@CoreUI@Microsoft@@AEAAJU?$Ref@URoutingInfo@CoreUI@Microsoft@@@CFlat@@U?$Ref@UHENDPOINT@CoreUI@Microsoft@@@6@@Z
    long Microsoft_CoreUI_IExportMessageSessionPrivate_EstablishConnection$(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSessionPrivate_GetMessagePort$@MessageSessionPrivateWrapper@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessagePort@CoreUI@Microsoft@@@CFlat@@UHENDPOINT@34@@Z
    WindissectOpaque Microsoft_CoreUI_IExportMessageSessionPrivate_GetMessagePort$(::Microsoft::CoreUI::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_CreatePort$@MessageSessionPrivateWrapper@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessagePort@CoreUI@Microsoft@@@CFlat@@UPSECURITY_DESCRIPTOR@34@@Z
    WindissectOpaque Microsoft_CoreUI_IExportMessageSession_CreatePort$(::Microsoft::CoreUI::PSECURITY_DESCRIPTOR);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_CreateTimer$@MessageSessionPrivateWrapper@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessageTimer@CoreUI@Microsoft@@@CFlat@@PEAVTimeoutHandler@Dispatch@34@@Z
    WindissectOpaque Microsoft_CoreUI_IExportMessageSession_CreateTimer$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageSession_get_MessageRegistrar$@MessageSessionPrivateWrapper@Messaging@CoreUI@Microsoft@@AEAA?AU?$InterfacePtr@VIExportMessageRegistrar@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque Microsoft_CoreUI_IExportMessageSession_get_MessageRegistrar$();
};
} // namespace Microsoft::CoreUI::Messaging
