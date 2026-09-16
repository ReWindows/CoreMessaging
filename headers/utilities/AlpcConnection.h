#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 29 member(s).
class AlpcConnection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@AlpcConnection@@QEAAJXZ
    long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImpersonateCaller@AlpcConnection@@QEAAJXZ
    long ImpersonateCaller();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AlpcConnection@@QEAAXXZ
    void Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_HandleBatchBuffer@AlpcConnection@@IEAAJPEAUIAlpcConnectionHost@@PEA_N@Z
    long Callback_HandleBatchBuffer(IAlpcConnectionHost *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_HandleReceivedBuffer@AlpcConnection@@IEAAJPEAUIAlpcConnectionHost@@_NPEA_N@Z
    long Callback_HandleReceivedBuffer(IAlpcConnectionHost *, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_HandleRequest@AlpcConnection@@IEAAJPEAUIAlpcConnectionHost@@PEA_N@Z
    long Callback_HandleRequest(IAlpcConnectionHost *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ProcessIncoming@AlpcConnection@@IEAAXPEAUIAlpcConnectionHost@@PEA_N@Z
    void Callback_ProcessIncoming(IAlpcConnectionHost *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupAccumulatedBatch@AlpcConnection@@IEAAXPEAUAccumulatedBatch@@0_N@Z
    void CleanupAccumulatedBatch(AccumulatedBatch *, AccumulatedBatch *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoReply@AlpcConnection@@IEAAXPEAU_PORT_MESSAGE@@_NG@Z
    void DoReply(_PORT_MESSAGE *, bool, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePingRequest@AlpcConnection@@IEAAXPEAUPortInfo@@_N@Z
    void HandlePingRequest(PortInfo *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSubsequentBufferInBatch@AlpcConnection@@IEAAJPEAUIAlpcConnectionHost@@PEA_N@Z
    long HandleSubsequentBufferInBatch(IAlpcConnectionHost *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromSettings@AlpcConnection@@IEAAXPEBUAlpcConnectionConfig@@@Z
    void InitializeFromSettings(AlpcConnectionConfig const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMessageAttributes@AlpcConnection@@KAXPEAV?$HeapBuffer@U_ALPC_MESSAGE_ATTRIBUTES@@@@@Z
    static void InitializeMessageAttributes(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LinkChunkedBufferInBatch@AlpcConnection@@IEAAJPEAUAlpcBuffer@@PEAUAccumulatedBatch@@@Z
    long LinkChunkedBufferInBatch(AlpcBuffer *, AccumulatedBatch *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingAndWait@AlpcConnection@@IEAAJPEAUPortInfo@@PEAXIIPEA_N2@Z
    long PingAndWait(PortInfo *, void *, unsigned int, unsigned int, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostBuffers@AlpcConnection@@IEAAJPEAUPortInfo@@PEAPEAUAlpcBuffer@@G@Z
    long PostBuffers(PortInfo *, AlpcBuffer * *, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPendingPingResult@AlpcConnection@@IEAAJPEAXIPEA_N@Z
    long SetPendingPingResult(void *, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateBufferHeader@AlpcConnection@@IEAAJPEAUAlpcBuffer@@@Z
    long ValidateBufferHeader(AlpcBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSubsequentBufferInBatch@AlpcConnection@@IEAAJPEAUAlpcBuffer@@PEAUAccumulatedBatch@@1@Z
    long ValidateSubsequentBufferInBatch(AlpcBuffer *, AccumulatedBatch *, AccumulatedBatch *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlpcConnection@@MEAA@XZ
    virtual ~AlpcConnection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsIAlpcConnection@AlpcConnection@@AEAAPEAUIAlpcConnection@@XZ
    IAlpcConnection * AsIAlpcConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChunkCountForBuffer@AlpcConnection@@AEAAGPEAUAlpcBuffer@@@Z
    unsigned short ChunkCountForBuffer(AlpcBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LinkBufferIntoBatch@AlpcConnection@@AEAAXPEAUAlpcBuffer@@PEAUAccumulatedBatch@@@Z
    void LinkBufferIntoBatch(AlpcBuffer *, AccumulatedBatch *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageAttributesBufferSize@AlpcConnection@@CA_KXZ
    static uint64_t MessageAttributesBufferSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostChunkedBuffer@AlpcConnection@@AEAAXPEAXPEAUAlpcBuffer@@KGGPEA_N@Z
    void PostChunkedBuffer(void *, AlpcBuffer *, unsigned long, unsigned short, unsigned short, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostSingleBuffer@AlpcConnection@@AEAAXPEAXPEAUAlpcBuffer@@PEA_N@Z
    void PostSingleBuffer(void *, AlpcBuffer *, bool *);
};
