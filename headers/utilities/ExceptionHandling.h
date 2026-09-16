#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace CFlat {
class ExceptionHandling {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThrowExceptionForHR@ExceptionHandling@CFlat@@SAXHPEAVException@System@@_N1@Z
    static void OnThrowExceptionForHR(int, ::System::Exception *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnexpectedStructuredExceptionFilter@ExceptionHandling@CFlat@@SAHPEAU_EXCEPTION_POINTERS@@PEAX@Z
    static int UnexpectedStructuredExceptionFilter(_EXCEPTION_POINTERS *, void *);
};
} // namespace CFlat
