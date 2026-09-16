#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Dispatch {
class WaitCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@WaitCallback@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportAdapter$@WaitCallback@Dispatch@CoreUI@Microsoft@@SAJPEAXK0@Z
    static long ExportAdapter$(void *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportAdapter$@WaitCallback@Dispatch@CoreUI@Microsoft@@SAXPEAV?$Box$1@U?$FunctionPointerAndUserData$1@P6AJPEAXK0@Z@CFlat@@@CFlat@@W4WaitStatus@234@UWin32Handle@Support@34@@Z
    static void ImportAdapter$(::CFlat::Box$1<::CFlat::FunctionPointerAndUserData$1<long ( *)(void *, unsigned long, void *)> > *, int, ::Microsoft::CoreUI::Support::Win32Handle);
};
} // namespace Microsoft::CoreUI::Dispatch
