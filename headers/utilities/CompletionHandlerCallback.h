#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI {
class CompletionHandlerCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@CompletionHandlerCallback@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportAdapter$@CompletionHandlerCallback@CoreUI@Microsoft@@SAJPEAX00@Z
    static long ExportAdapter$(void *, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportAdapter$@CompletionHandlerCallback@CoreUI@Microsoft@@SAXPEAV?$Box$1@U?$FunctionPointerAndUserData$1@P6AJPEAX00@Z@CFlat@@@CFlat@@UUIntPtr@System@@1@Z
    static void ImportAdapter$(::CFlat::Box$1<::CFlat::FunctionPointerAndUserData$1<long ( *)(void *, void *, void *)> > *, ::System::UIntPtr, ::System::UIntPtr);
};
} // namespace Microsoft::CoreUI
