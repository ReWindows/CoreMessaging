#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::HvSockets {
class IoReceiver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@IoReceiver@HvSockets@CoreUI@Microsoft@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@IoReceiver@HvSockets@CoreUI@Microsoft@@QEAA_NUHvSocket@234@I@Z
    bool Initialize(WindissectOpaque, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchMessages@IoReceiver@HvSockets@CoreUI@Microsoft@@AEAA_NU?$FastInterfacePtr@VIIoReceiverHost@HvSockets@CoreUI@Microsoft@@@CFlat@@@Z
    bool DispatchMessages(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Receive@IoReceiver@HvSockets@CoreUI@Microsoft@@AEAA_NUHvSocket@234@U?$FastInterfacePtr@VIIoReceiverHost@HvSockets@CoreUI@Microsoft@@@CFlat@@_N@Z
    bool Receive(WindissectOpaque, WindissectOpaque, bool);
};
} // namespace Microsoft::CoreUI::HvSockets
