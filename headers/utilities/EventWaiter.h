#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI::Support {
class EventWaiter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWait@EventWaiter@Support@CoreUI@Microsoft@@SAXUWin32Handle@234@@Z
    static void DoWait(::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWaitWithDispatchingThread@EventWaiter@Support@CoreUI@Microsoft@@SAXUWin32Event@234@@Z
    static void DoWaitWithDispatchingThread(::Microsoft::CoreUI::Support::Win32Event);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWaitWithThread@EventWaiter@Support@CoreUI@Microsoft@@CAXIUWin32Handle@234@@Z
    static void DoWaitWithThread(unsigned int, ::Microsoft::CoreUI::Support::Win32Handle);
};
} // namespace Microsoft::CoreUI::Support
