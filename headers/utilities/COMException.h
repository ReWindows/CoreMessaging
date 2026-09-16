#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace System::Runtime::InteropServices {
class COMException {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@COMException@InteropServices@Runtime@System@@SA?AV?$SmartPtr@VCOMException@InteropServices@Runtime@System@@@CFlat@@PEAVString@4@H@Z
    static WindissectOpaque Create$(::System::String *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@COMException@InteropServices@Runtime@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowVirtual$@COMException@InteropServices@Runtime@System@@UEAAXXZ
    virtual void ThrowVirtual$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@COMException@InteropServices@Runtime@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque ToString();
};
} // namespace System::Runtime::InteropServices
