#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Messaging {
class AlpcClientThunk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ProcessAsynchronousBuffer@AlpcClientThunk@Messaging@CoreUI@Microsoft@@UEAAJPEAUIAlpcConnection@@PEAXKPEBXH@Z
    virtual long Callback_ProcessAsynchronousBuffer(IAlpcConnection *, void *, unsigned long, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ReenterInProgressProcessing@AlpcClientThunk@Messaging@CoreUI@Microsoft@@UEAAJPEAUIAlpcConnection@@PEAXK@Z
    virtual long Callback_ReenterInProgressProcessing(IAlpcConnection *, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidBufferReceived@AlpcClientThunk@Messaging@CoreUI@Microsoft@@UEAAJPEAXK@Z
    virtual long InvalidBufferReceived(void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectionCompleted@AlpcClientThunk@Messaging@CoreUI@Microsoft@@UEAAJPEAUIAlpcClientConnection@@_N@Z
    virtual long OnConnectionCompleted(IAlpcClientConnection *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerDisconnected@AlpcClientThunk@Messaging@CoreUI@Microsoft@@UEAAJPEAUIAlpcClientConnection@@@Z
    virtual long OnServerDisconnected(IAlpcClientConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessReply@AlpcClientThunk@Messaging@CoreUI@Microsoft@@UEAAJPEAUIAlpcClientConnection@@PEBXH@Z
    virtual long ProcessReply(IAlpcClientConnection *, void const *, int);
};
} // namespace Microsoft::CoreUI::Messaging
