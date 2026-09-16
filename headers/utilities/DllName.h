#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Cn {
class DllName {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Import@DllName@Cn@@QEAAXPEBDPEAPEAX@Z
    void Import(char const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryImport@DllName@Cn@@QEAA_NPEBDPEAPEAX@Z
    bool TryImport(char const *, void * *);
};
} // namespace Cn
