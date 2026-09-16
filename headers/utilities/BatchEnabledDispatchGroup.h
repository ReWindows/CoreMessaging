#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI {
class BatchEnabledDispatchGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatchCore@BatchEnabledDispatchGroup@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnDispatchCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@BatchEnabledDispatchGroup@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@BatchEnabledDispatchGroup@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@BatchEnabledDispatchGroup@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BatchEnabledDispatchGroup@CoreUI@Microsoft@@QEAA@XZ
    ~BatchEnabledDispatchGroup();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@BatchEnabledDispatchGroup@CoreUI@Microsoft@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(::CFlat::ComExportAdapterContainer *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@BatchEnabledDispatchGroup@CoreUI@Microsoft@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@BatchEnabledDispatchGroup@CoreUI@Microsoft@@IEAAXPEAVDispatcher@Dispatch@23@PEAVDispatchGroupBatchEnableHandler@23@PEAVDispatchGroupHandler@23@@Z
    void Init$(WindissectOpaque *, ::Microsoft::CoreUI::DispatchGroupBatchEnableHandler *, ::Microsoft::CoreUI::DispatchGroupHandler *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?YieldCheckHandler@BatchEnabledDispatchGroup@CoreUI@Microsoft@@AEAAXXZ
    void YieldCheckHandler();
};
} // namespace Microsoft::CoreUI
