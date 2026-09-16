#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Conversations {
class SparseItemTable {
public:
    class InternalEnumerator;
    class StorageLevel;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanAccomodateCustomIDSpaceChange@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAA_NIIPEAUIDSpaceReservation@34@@Z
    bool CanAccomodateCustomIDSpaceChange(unsigned int, unsigned int, ::Microsoft::CoreUI::IDSpaceReservation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveId@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAA_NI@Z
    bool ReserveId(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@SparseItemTable@Conversations@CoreUI@Microsoft@@QEAA_NIPEAX@Z
    bool SetData(unsigned int, void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseIndexToAllocate@SparseItemTable@Conversations@CoreUI@Microsoft@@AEAAII@Z
    unsigned int ChooseIndexToAllocate(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseIndexToAllocateWorker@SparseItemTable@Conversations@CoreUI@Microsoft@@AEAAIII@Z
    unsigned int ChooseIndexToAllocateWorker(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncreaseTierLevel@SparseItemTable@Conversations@CoreUI@Microsoft@@AEAAXXZ
    void IncreaseTierLevel();
};
} // namespace Microsoft::CoreUI::Conversations
