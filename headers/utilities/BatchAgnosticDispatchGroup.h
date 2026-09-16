#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI {
class BatchAgnosticDispatchGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatchCore@BatchAgnosticDispatchGroup@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnDispatchCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@BatchAgnosticDispatchGroup@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@BatchAgnosticDispatchGroup@CoreUI@Microsoft@@SA?AV?$SmartPtr@VBatchAgnosticDispatchGroup@CoreUI@Microsoft@@@CFlat@@PEAVDispatcher@Dispatch@23@PEAVDispatchGroupHandler@23@1@Z
    static WindissectOpaque Create$(WindissectOpaque *, ::Microsoft::CoreUI::DispatchGroupHandler *, ::Microsoft::CoreUI::DispatchGroupHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@BatchAgnosticDispatchGroup@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BatchAgnosticDispatchGroup@CoreUI@Microsoft@@QEAA@XZ
    ~BatchAgnosticDispatchGroup();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@BatchAgnosticDispatchGroup@CoreUI@Microsoft@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(::CFlat::ComExportAdapterContainer *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@BatchAgnosticDispatchGroup@CoreUI@Microsoft@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
};
} // namespace Microsoft::CoreUI
