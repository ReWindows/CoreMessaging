#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI {
class ProtocolException {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ProtocolException@CoreUI@Microsoft@@SA?AV?$SmartPtr@VProtocolException@CoreUI@Microsoft@@@CFlat@@W4ProtocolError@23@@Z
    static WindissectOpaque Create$(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ProtocolException@CoreUI@Microsoft@@SA?AV?$SmartPtr@VProtocolException@CoreUI@Microsoft@@@CFlat@@W4ProtocolError@23@PEAVString@System@@@Z
    static WindissectOpaque Create$(int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ProtocolException@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowVirtual$@ProtocolException@CoreUI@Microsoft@@UEAAXXZ
    virtual void ThrowVirtual$();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@ProtocolException@CoreUI@Microsoft@@IEAAXW4ProtocolError@23@@Z
    void Init$(int);
};
} // namespace Microsoft::CoreUI
