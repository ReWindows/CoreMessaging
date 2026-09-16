#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI {
class MsgScopeID {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToInternal@MsgScopeID@CoreUI@Microsoft@@QEAA?AUScopeID@Registrar@23@U?$Ref@_N@CFlat@@@Z
    ::Microsoft::CoreUI::Registrar::ScopeID ToInternal(WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastToPort@MsgScopeID@CoreUI@Microsoft@@CA?AV?$SmartPtr@VCrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@@CFlat@@UIntPtr@System@@@Z
    static WindissectOpaque CastToPort(::System::IntPtr);
};
} // namespace Microsoft::CoreUI
