#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace CoreMessaging::Calling {
class ReceiveProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIIPEBXI@Z
    long UnmarshalReceive(IMessageCallReceiveHost *, MsgCallTypeDefinition const *, unsigned char const *, unsigned int, unsigned int, void const *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z
    long ReadExpectedParameterSize(unsigned int *, bool *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadStringArrayLength@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAI@Z
    long ReadStringArrayLength(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStringArrayPointers@ReceiveProcessor@Calling@CoreMessaging@@AEAAJI@Z
    long UpdateStringArrayPointers(unsigned int);
};
} // namespace CoreMessaging::Calling
