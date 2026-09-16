#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 12 member(s).
namespace Microsoft::CoreUI::Dispatch {
class OffThreadReceiver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatch@OffThreadReceiver@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnDispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@OffThreadReceiver@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@OffThreadReceiver@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VOffThreadReceiver@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVEventLoop@234@W4InternalPriority@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@OffThreadReceiver@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelled@OffThreadReceiver@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnCancelled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@OffThreadReceiver@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceHasEvents@OffThreadReceiver@Dispatch@CoreUI@Microsoft@@QEAAXPEAVOffThreadSource@234@_N@Z
    void OnSourceHasEvents(WindissectOpaque *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OffThreadReceiver@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~OffThreadReceiver();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@OffThreadReceiver@Dispatch@CoreUI@Microsoft@@IEAAXPEAVEventLoop@234@W4InternalPriority@234@@Z
    void Init$(WindissectOpaque *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceReceiveMode@OffThreadReceiver@Dispatch@CoreUI@Microsoft@@AEAAXW4OffThreadReceiveMode@234@@Z
    void ForceReceiveMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateReceiveMode@OffThreadReceiver@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void UpdateReceiveMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentSource@OffThreadReceiver@Dispatch@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VOffThreadSource@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_CurrentSource();
};
} // namespace Microsoft::CoreUI::Dispatch
