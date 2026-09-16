#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Messaging {
class AlpcServerThunk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptConnection@AlpcServerThunk@Messaging@CoreUI@Microsoft@@UEAAJ_NKKAEBUConnectionParams@@PEAXPEAPEAXPEA_N@Z
    virtual long AcceptConnection(bool, unsigned long, unsigned long, ConnectionParams const &, void *, void * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ProcessAsynchronousBuffer@AlpcServerThunk@Messaging@CoreUI@Microsoft@@UEAAJPEAUIAlpcConnection@@PEAXKPEBXH@Z
    virtual long Callback_ProcessAsynchronousBuffer(IAlpcConnection *, void *, unsigned long, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ReenterInProgressProcessing@AlpcServerThunk@Messaging@CoreUI@Microsoft@@UEAAJPEAUIAlpcConnection@@PEAXK@Z
    virtual long Callback_ReenterInProgressProcessing(IAlpcConnection *, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidBufferReceived@AlpcServerThunk@Messaging@CoreUI@Microsoft@@UEAAJPEAXK@Z
    virtual long InvalidBufferReceived(void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientDisconnected@AlpcServerThunk@Messaging@CoreUI@Microsoft@@UEAAJPEAXK0@Z
    virtual long OnClientDisconnected(void *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSynchronousCall@AlpcServerThunk@Messaging@CoreUI@Microsoft@@UEAAJ_NPEAUIAlpcServerConnection@@PEAXK2PEBXH@Z
    virtual long ProcessSynchronousCall(bool, IAlpcServerConnection *, void *, unsigned long, void *, void const *, int);
};
} // namespace Microsoft::CoreUI::Messaging
