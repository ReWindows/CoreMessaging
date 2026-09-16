#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Support {
class ThreadPoolWait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWait@ThreadPoolWait@Support@CoreUI@Microsoft@@QEAA_NUWin32Handle@234@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z2@Z
    bool RegisterWait(::Microsoft::CoreUI::Support::Win32Handle, void ( *)(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long), void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_Cancel@ThreadPoolWait@Support@CoreUI@Microsoft@@AEAAXXZ
    void NoContext_Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_Close@ThreadPoolWait@Support@CoreUI@Microsoft@@AEAAXXZ
    void NoContext_Close();
};
} // namespace Microsoft::CoreUI::Support
