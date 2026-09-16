#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI {
class ActionCallback {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActionCallback@CoreUI@Microsoft@@QEAA@XZ
    ActionCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ActionCallback@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportAdapter$@ActionCallback@CoreUI@Microsoft@@SAJPEAX@Z
    static long ExportAdapter$(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportAdapter$@ActionCallback@CoreUI@Microsoft@@SAXPEAV?$Box$1@U?$FunctionPointerAndUserData$1@P6AJPEAX@Z@CFlat@@@CFlat@@@Z
    static void ImportAdapter$(::CFlat::Box$1<::CFlat::FunctionPointerAndUserData$1<long ( *)(void *)> > *);
};
} // namespace Microsoft::CoreUI
