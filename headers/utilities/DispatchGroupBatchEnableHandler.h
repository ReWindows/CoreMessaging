#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI {
class DispatchGroupBatchEnableHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@DispatchGroupBatchEnableHandler@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportAdapter$@DispatchGroupBatchEnableHandler@CoreUI@Microsoft@@SAJPEAXPEA_N@Z
    static long ExportAdapter$(void *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportAdapter$@DispatchGroupBatchEnableHandler@CoreUI@Microsoft@@SAXPEAV?$Box$1@U?$FunctionPointerAndUserData$1@P6AJPEAXPEA_N@Z@CFlat@@@CFlat@@U?$Ref@_N@5@@Z
    static void ImportAdapter$(::CFlat::Box$1<::CFlat::FunctionPointerAndUserData$1<long ( *)(void *, bool *)> > *, WindissectOpaque);
};
} // namespace Microsoft::CoreUI
