#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace System::Runtime::InteropServices {
class Marshal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@Marshal@InteropServices@Runtime@System@@SAXUIntPtr@4@PEAV?$Array$2@E$00@CFlat@@HH@Z
    static void Copy(::System::IntPtr, ::CFlat::Array$2<unsigned char, 1> *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@Marshal@InteropServices@Runtime@System@@SAXPEAV?$Array$2@E$00@CFlat@@HUIntPtr@4@H@Z
    static void Copy(::CFlat::Array$2<unsigned char, 1> *, int, ::System::IntPtr, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowExceptionForHR@Marshal@InteropServices@Runtime@System@@SAXH@Z
    static void ThrowExceptionForHR(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToManaged@Marshal@InteropServices@Runtime@System@@CAXPEAX0HHH@Z
    static void CopyToManaged(void *, void *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToNative@Marshal@InteropServices@Runtime@System@@CAXPEAXH0HH@Z
    static void CopyToNative(void *, int, void *, int, int);
};
} // namespace System::Runtime::InteropServices
