#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Registrar {
class AlpcAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@AlpcAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@AlpcAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateString@AlpcAdapter@Registrar@CoreUI@Microsoft@@SAXPEAVString@System@@@Z
    static void ValidateString(::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WaitHandle@AlpcAdapter@Registrar@CoreUI@Microsoft@@QEAA?AUWin32Handle@Support@34@XZ
    ::Microsoft::CoreUI::Support::Win32Handle get_WaitHandle();
};
} // namespace Microsoft::CoreUI::Registrar
