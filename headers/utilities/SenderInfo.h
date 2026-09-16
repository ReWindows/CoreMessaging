#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Messaging {
class SenderInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCrossProcess@SenderInfo@Messaging@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsCrossProcess();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Inequality$@SenderInfo@Messaging@CoreUI@Microsoft@@CA_NU1234@0@Z
    static bool op_Inequality$(WindissectOpaque, WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Messaging
