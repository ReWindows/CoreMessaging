#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 10 member(s).
namespace CFlat {
class Abandonment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fail@Abandonment@CFlat@@SAXPEB_SPEAX@Z
    static void Fail(char16_t const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fail@Abandonment@CFlat@@SAXPEB_S@Z
    static void Fail(char16_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailWithException@Abandonment@CFlat@@SAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@@Z
    static void FailWithException(_EXCEPTION_RECORD *, _CONTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailWithHR@Abandonment@CFlat@@SAXHPEAXH@Z
    static void FailWithHR(int, void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotSupported@Abandonment@CFlat@@SAXXZ
    static void NotSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutOfMemory@Abandonment@CFlat@@SAX_KPEAX@Z
    static void OutOfMemory(uint64_t, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutOfMemory@Abandonment@CFlat@@SAX_K@Z
    static void OutOfMemory(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnexpectedException@Abandonment@CFlat@@SAXPEAVException@System@@@Z
    static void UnexpectedException(::System::Exception *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnreachableCode@Abandonment@CFlat@@SAXXZ
    static void UnreachableCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseOfInvalidatedExportAdapter@Abandonment@CFlat@@SAXXZ
    static void UseOfInvalidatedExportAdapter();
};
} // namespace CFlat
