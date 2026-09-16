#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 3 member(s).
namespace Microsoft::CoreUI {
class RoutingInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RoutingInfo@CoreUI@Microsoft@@QEAA@XZ
    RoutingInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@RoutingInfo@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    WindissectOpaque ToString();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Inequality$@RoutingInfo@CoreUI@Microsoft@@CA_NU123@0@Z
    static bool op_Inequality$(::Microsoft::CoreUI::RoutingInfo, ::Microsoft::CoreUI::RoutingInfo);
};
} // namespace Microsoft::CoreUI
