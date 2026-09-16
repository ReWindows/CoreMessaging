#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Registrar {
class AlpcClientThunk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ProcessAsynchronousBuffer@AlpcClientThunk@Registrar@CoreUI@Microsoft@@UEAAJPEAUIAlpcConnection@@PEAXKPEBXH@Z
    virtual long Callback_ProcessAsynchronousBuffer(IAlpcConnection *, void *, unsigned long, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ReenterInProgressProcessing@AlpcClientThunk@Registrar@CoreUI@Microsoft@@UEAAJPEAUIAlpcConnection@@PEAXK@Z
    virtual long Callback_ReenterInProgressProcessing(IAlpcConnection *, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidBufferReceived@AlpcClientThunk@Registrar@CoreUI@Microsoft@@UEAAJPEAXK@Z
    virtual long InvalidBufferReceived(void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectionCompleted@AlpcClientThunk@Registrar@CoreUI@Microsoft@@UEAAJPEAUIAlpcClientConnection@@_N@Z
    virtual long OnConnectionCompleted(IAlpcClientConnection *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerDisconnected@AlpcClientThunk@Registrar@CoreUI@Microsoft@@UEAAJPEAUIAlpcClientConnection@@@Z
    virtual long OnServerDisconnected(IAlpcClientConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessReply@AlpcClientThunk@Registrar@CoreUI@Microsoft@@UEAAJPEAUIAlpcClientConnection@@PEBXH@Z
    virtual long ProcessReply(IAlpcClientConnection *, void const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlpcClientThunk@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~AlpcClientThunk();
};
} // namespace Microsoft::CoreUI::Registrar
