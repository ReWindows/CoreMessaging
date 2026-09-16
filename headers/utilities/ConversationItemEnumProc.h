#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI {
class ConversationItemEnumProc {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ConversationItemEnumProc@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportAdapter$@ConversationItemEnumProc@CoreUI@Microsoft@@SAJPEAXIIPEBX@Z
    static long ExportAdapter$(void *, unsigned int, unsigned int, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImportAdapter$@ConversationItemEnumProc@CoreUI@Microsoft@@SAXPEAV?$Box$1@U?$FunctionPointerAndUserData$1@P6AJPEAXIIPEBX@Z@CFlat@@@CFlat@@IIPEAX@Z
    static void ImportAdapter$(::CFlat::Box$1<::CFlat::FunctionPointerAndUserData$1<long ( *)(void *, unsigned int, unsigned int, void const *)> > *, unsigned int, unsigned int, void *);
};
} // namespace Microsoft::CoreUI
