#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::Conversations::SparseItemTable {
class StorageLevel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTierOfIndirection@StorageLevel@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAAXGI_N@Z
    void AddTierOfIndirection(unsigned short, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@StorageLevel@SparseItemTable@Conversations@CoreUI@Microsoft@@SAPEAU12345@G_N@Z
    static WindissectOpaque * Allocate(unsigned short, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSlot@StorageLevel@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAAXPEAV2345@AEAUSlotMetadata@12345@I@Z
    void ClearSlot(::Microsoft::CoreUI::Conversations::SparseItemTable *, WindissectOpaque &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrillDownToFirstLeaf@StorageLevel@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAAPEAU12345@XZ
    WindissectOpaque * DrillDownToFirstLeaf();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextLeaf@StorageLevel@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAAPEAU12345@XZ
    WindissectOpaque * GetNextLeaf();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeafTransition@StorageLevel@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAA_NUCountCategory@2345@0PEAV2345@_N@Z
    bool LeafTransition(WindissectOpaque, WindissectOpaque, ::Microsoft::CoreUI::Conversations::SparseItemTable *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeAndLinkNewChild@StorageLevel@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAAPEAU12345@GG_N@Z
    WindissectOpaque * MakeAndLinkNewChild(unsigned short, unsigned short, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkInUse@StorageLevel@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAAIIPEAV2345@@Z
    unsigned int MarkInUse(unsigned int, ::Microsoft::CoreUI::Conversations::SparseItemTable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecursiveDestroy@StorageLevel@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAAXH@Z
    void RecursiveDestroy(int);
};
} // namespace Microsoft::CoreUI::Conversations::SparseItemTable
