#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Registrar {
class ScopeID {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScopeID@Registrar@CoreUI@Microsoft@@QEAA@W4RegistrarScope@23@IUGuid@System@@@Z
    ScopeID(int, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProcessID@ScopeID@Registrar@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_ProcessID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SessionID@ScopeID@Registrar@CoreUI@Microsoft@@QEAAIXZ
    unsigned int get_SessionID();
};
} // namespace Microsoft::CoreUI::Registrar
