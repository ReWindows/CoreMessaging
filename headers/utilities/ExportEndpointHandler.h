#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI {
class ExportEndpointHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ExportEndpointHandler@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportAdapter$@ExportEndpointHandler@CoreUI@Microsoft@@SAJPEAXPEBXH@Z
    static long ExportAdapter$(void *, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportAdapter$@ExportEndpointHandler@CoreUI@Microsoft@@SAXPEAV?$Box$1@U?$FunctionPointerAndUserData$1@P6AJPEAXPEBXH@Z@CFlat@@@CFlat@@PEAXH@Z
    static void ImportAdapter$(::CFlat::Box$1<::CFlat::FunctionPointerAndUserData$1<long ( *)(void *, void const *, int)> > *, void *, int);
};
} // namespace Microsoft::CoreUI
