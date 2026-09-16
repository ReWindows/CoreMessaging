#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 8 member(s).
namespace Microsoft::CoreUI::Registrar {
class AlpcServerThunk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptConnection@AlpcServerThunk@Registrar@CoreUI@Microsoft@@UEAAJ_NKKAEBUConnectionParams@@PEAXPEAPEAXPEA_N@Z
    virtual long AcceptConnection(bool, unsigned long, unsigned long, ConnectionParams const &, void *, void * *, bool *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AlpcServerThunk@Registrar@CoreUI@Microsoft@@QEAA@PEAVAlpcServerAdapter@123@U?$FastInterfacePtr@VIAlpcServerHost@Registrar@CoreUI@Microsoft@@@CFlat@@@Z
    AlpcServerThunk(::Microsoft::CoreUI::Registrar::AlpcServerAdapter *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ProcessAsynchronousBuffer@AlpcServerThunk@Registrar@CoreUI@Microsoft@@UEAAJPEAUIAlpcConnection@@PEAXKPEBXH@Z
    virtual long Callback_ProcessAsynchronousBuffer(IAlpcConnection *, void *, unsigned long, void const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ReenterInProgressProcessing@AlpcServerThunk@Registrar@CoreUI@Microsoft@@UEAAJPEAUIAlpcConnection@@PEAXK@Z
    virtual long Callback_ReenterInProgressProcessing(IAlpcConnection *, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidBufferReceived@AlpcServerThunk@Registrar@CoreUI@Microsoft@@UEAAJPEAXK@Z
    virtual long InvalidBufferReceived(void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientDisconnected@AlpcServerThunk@Registrar@CoreUI@Microsoft@@UEAAJPEAXK0@Z
    virtual long OnClientDisconnected(void *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSynchronousCall@AlpcServerThunk@Registrar@CoreUI@Microsoft@@UEAAJ_NPEAUIAlpcServerConnection@@PEAXK2PEBXH@Z
    virtual long ProcessSynchronousCall(bool, IAlpcServerConnection *, void *, unsigned long, void *, void const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlpcServerThunk@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~AlpcServerThunk();
};
} // namespace Microsoft::CoreUI::Registrar
