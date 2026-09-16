#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Support {
class IoCompletionPort {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@IoCompletionPort@Support@CoreUI@Microsoft@@SA?AU1234@XZ
    static ::Microsoft::CoreUI::Support::IoCompletionPort Create();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportAssociationError@IoCompletionPort@Support@CoreUI@Microsoft@@AEAAXUWaitCompletionPacket@234@UWin32Handle@234@UIntPtr@System@@2I@Z
    void ReportAssociationError(::Microsoft::CoreUI::Support::WaitCompletionPacket, ::Microsoft::CoreUI::Support::Win32Handle, ::System::IntPtr, ::System::IntPtr, unsigned int);
};
} // namespace Microsoft::CoreUI::Support
