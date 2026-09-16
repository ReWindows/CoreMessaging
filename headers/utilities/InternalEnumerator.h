#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Conversations::SparseItemTable {
class InternalEnumerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentSlot@InternalEnumerator@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAAXPEAIPEAPEAUStorageLevel@2345@0@Z
    void CurrentSlot(unsigned int *, WindissectOpaque * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@InternalEnumerator@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAA_NXZ
    bool MoveNext();
};
} // namespace Microsoft::CoreUI::Conversations::SparseItemTable
