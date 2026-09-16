#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Dispatch {
class DispatchCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@DispatchCallback@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportAdapter$@DispatchCallback@Dispatch@CoreUI@Microsoft@@SAJPEAX_NPEAU_FILETIME@@@Z
    static long ExportAdapter$(void *, bool, _FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportAdapter$@DispatchCallback@Dispatch@CoreUI@Microsoft@@SAXPEAV?$Box$1@U?$FunctionPointerAndUserData$1@P6AJPEAX_NPEAU_FILETIME@@@Z@CFlat@@@CFlat@@_NU?$Ref@UFILETIME@Dispatch@CoreUI@Microsoft@@@6@@Z
    static void ImportAdapter$(::CFlat::Box$1<::CFlat::FunctionPointerAndUserData$1<long ( *)(void *, bool, _FILETIME *)> > *, bool, WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Dispatch
