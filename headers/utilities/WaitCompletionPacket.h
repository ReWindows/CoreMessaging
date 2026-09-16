#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Support {
class WaitCompletionPacket {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@WaitCompletionPacket@Support@CoreUI@Microsoft@@SA?AU1234@XZ
    static ::Microsoft::CoreUI::Support::WaitCompletionPacket Create();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCancel@WaitCompletionPacket@Support@CoreUI@Microsoft@@QEAA_NU?$Ref@_N@CFlat@@@Z
    bool TryCancel(WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Support
