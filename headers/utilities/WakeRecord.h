#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Dispatch {
class WakeRecord {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WakeRecord@Dispatch@CoreUI@Microsoft@@QEAA@PEAVRegisteredWait@123@W4WaitStatus@123@UWin32Handle@Support@23@II@Z
    WakeRecord(WindissectOpaque *, int, ::Microsoft::CoreUI::Support::Win32Handle, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WakeRecord@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    WakeRecord();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WakeRecord@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~WakeRecord();
};
} // namespace Microsoft::CoreUI::Dispatch
