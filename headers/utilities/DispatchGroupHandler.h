#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI {
class DispatchGroupHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@DispatchGroupHandler@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportAdapter$@DispatchGroupHandler@CoreUI@Microsoft@@SAJPEAX@Z
    static long ExportAdapter$(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportAdapter$@DispatchGroupHandler@CoreUI@Microsoft@@SAXPEAV?$Box$1@U?$FunctionPointerAndUserData$1@P6AJPEAX@Z@CFlat@@@CFlat@@@Z
    static void ImportAdapter$(::CFlat::Box$1<::CFlat::FunctionPointerAndUserData$1<long ( *)(void *)> > *);
};
} // namespace Microsoft::CoreUI
