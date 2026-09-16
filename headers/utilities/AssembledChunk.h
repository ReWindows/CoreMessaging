#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
class AssembledChunk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChunkComponent@AssembledChunk@@QEAAJPEAUChunkComponent@@_K@Z
    long AddChunkComponent(ChunkComponent *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessageHeaderSize@AssembledChunk@@SAJG_KPEA_K@Z
    static long AddMessageHeaderSize(unsigned short, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChunkPayload@AssembledChunk@@QEAAJPEAPEAX@Z
    long ChunkPayload(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPortMessageForReply@AssembledChunk@@QEAAJGPEAPEAU_PORT_MESSAGE@@PEAPEAU_ALPC_MESSAGE_ATTRIBUTES@@@Z
    long GetPortMessageForReply(unsigned short, _PORT_MESSAGE * *, _ALPC_MESSAGE_ATTRIBUTES * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AssembledChunk@@SAJPEAUChunkComponent@@_KPEAPEAU1@@Z
    static long Initialize(ChunkComponent *, uint64_t, AssembledChunk * *);
};
