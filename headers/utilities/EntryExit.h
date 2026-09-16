#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 9 member(s).
namespace CFlat {
class EntryExit {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCachedComImportAdapter@EntryExit@CFlat@@SAXPEAX0PEAVComImportAdapter@2@@Z
    static void AddCachedComImportAdapter(void *, void *, ::CFlat::ComImportAdapter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureHostData@EntryExit@CFlat@@SAPEAX_N@Z
    static void * CaptureHostData(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginCallToCFlat@EntryExit@CFlat@@SAJPEAX0H@Z
    static long OnBeginCallToCFlat(void *, void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginCallToNative@EntryExit@CFlat@@SAXPEAX@Z
    static void OnBeginCallToNative(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndCallToCFlat@EntryExit@CFlat@@SAXPEAX@Z
    static void OnEndCallToCFlat(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseComInterfaceFromCFlatCode@EntryExit@CFlat@@SAXPEAX0@Z
    static void ReleaseComInterfaceFromCFlatCode(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseHostData@EntryExit@CFlat@@SAXPEAX@Z
    static void ReleaseHostData(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCall@EntryExit@CFlat@@SAPEAXPEAX0H@Z
    static void * ValidateCall(void *, void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateCall@EntryExit@CFlat@@SAPEAXPEAX0@Z
    static void * ValidateCall(void *, void *);
};
} // namespace CFlat
