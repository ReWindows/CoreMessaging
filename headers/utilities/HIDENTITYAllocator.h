#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Identity {
class HIDENTITYAllocator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateHIDENTITY@HIDENTITYAllocator@Identity@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@IU?$Ref@UHIDENTITY@CoreUI@Microsoft@@@CFlat@@@Z
    int AllocateHIDENTITY(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeHIDENTITY@HIDENTITYAllocator@Identity@CoreUI@Microsoft@@QEAAXI@Z
    void FreeHIDENTITY(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HIDENTITYAllocator@Identity@CoreUI@Microsoft@@QEAA@XZ
    ~HIDENTITYAllocator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveIndex@HIDENTITYAllocator@Identity@CoreUI@Microsoft@@AEAAXU?$Ref@I@CFlat@@0@Z
    void ReserveIndex(WindissectOpaque, WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Identity
