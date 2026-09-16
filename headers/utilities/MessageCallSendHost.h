#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Support {
class MessageCallSendHost {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MessageCallSendHost@Support@CoreUI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelBuffer@MessageCallSendHost@Support@CoreUI@Microsoft@@UEAAJPEA_KIPEAXI@Z
    virtual long CancelBuffer(uint64_t *, unsigned int, void *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MessageCallSendHost@Support@CoreUI@Microsoft@@QEAA@XZ
    MessageCallSendHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalid@MessageCallSendHost@Support@CoreUI@Microsoft@@UEAAJPEAUMsgCallState@@@Z
    virtual long NotifyInvalid(MsgCallState *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MessageCallSendHost@Support@CoreUI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MessageCallSendHost@Support@CoreUI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Microsoft::CoreUI::Support
