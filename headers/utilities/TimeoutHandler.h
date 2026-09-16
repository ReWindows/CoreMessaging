#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Dispatch {
class TimeoutHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@TimeoutHandler@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportAdapter$@TimeoutHandler@Dispatch@CoreUI@Microsoft@@SAJPEAX@Z
    static long ExportAdapter$(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportAdapter$@TimeoutHandler@Dispatch@CoreUI@Microsoft@@SAXPEAV?$Box$1@U?$FunctionPointerAndUserData$1@P6AJPEAX@Z@CFlat@@@CFlat@@@Z
    static void ImportAdapter$(::CFlat::Box$1<::CFlat::FunctionPointerAndUserData$1<long ( *)(void *)> > *);
};
} // namespace Microsoft::CoreUI::Dispatch
