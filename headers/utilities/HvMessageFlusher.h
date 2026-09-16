#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Registrar {
class HvMessageFlusher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatch@HvMessageFlusher@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnDispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@HvMessageFlusher@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@HvMessageFlusher@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VHvMessageFlusher@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVDispatcher@Dispatch@34@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@HvMessageFlusher@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCancelFlush@HvMessageFlusher@Registrar@CoreUI@Microsoft@@QEAAXPEAVHvRegistrarConnectedClient@234@@Z
    void TryCancelFlush(::Microsoft::CoreUI::Registrar::HvRegistrarConnectedClient *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HvMessageFlusher@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~HvMessageFlusher();
};
} // namespace Microsoft::CoreUI::Registrar
