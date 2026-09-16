#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 8 member(s).
namespace Microsoft::CoreUI::Dispatch {
class OffThreadSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@OffThreadSource@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@OffThreadSource@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VOffThreadSource@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVOffThreadReceiver@234@PEAVAction@System@@@Z
    static WindissectOpaque Create$(WindissectOpaque *, ::System::Action *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@OffThreadSource@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@OffThreadSource@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PE Export
    // Symbol: ?OnReceive@OffThreadSource@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnReceive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReceiver@OffThreadSource@Dispatch@CoreUI@Microsoft@@QEAAXPEAVOffThreadReceiver@234@@Z
    void SetReceiver(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_HasEvents@OffThreadSource@Dispatch@CoreUI@Microsoft@@QEAAX_N@Z
    void set_HasEvents(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OffThreadSource@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~OffThreadSource();
};
} // namespace Microsoft::CoreUI::Dispatch
