#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 19 member(s).
namespace CoreMessaging::Calling {
class MessageCallHostBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MessageCallHostBase@Calling@CoreMessaging@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@MessageCallHostBase@Calling@CoreMessaging@@QEAAXPEAUIMessageSession@@@Z
    void Create(IMessageSession *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MessageCallHostBase@Calling@CoreMessaging@@QEAA@XZ
    MessageCallHostBase();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MessageCallHostBase@Calling@CoreMessaging@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MessageCallHostBase@Calling@CoreMessaging@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageCallHostBase@Calling@CoreMessaging@@UEAA@XZ
    virtual ~MessageCallHostBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateBuffer@MessageCallHostBase@Calling@CoreMessaging@@MEAAJPEA_KIIPEAPEAX@Z
    virtual long AllocateBuffer(uint64_t *, unsigned int, unsigned int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelBuffer@MessageCallHostBase@Calling@CoreMessaging@@MEAAJPEA_KIPEAXI@Z
    virtual long CancelBuffer(uint64_t *, unsigned int, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalid@MessageCallHostBase@Calling@CoreMessaging@@MEAAJPEAUMsgCallState@@@Z
    virtual long NotifyInvalid(MsgCallState *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyProtocolViolation@MessageCallHostBase@Calling@CoreMessaging@@MEAAJPEAUMsgCallState@@@Z
    virtual long NotifyProtocolViolation(MsgCallState *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetireBuffer@MessageCallHostBase@Calling@CoreMessaging@@IEAAXPEAX@Z
    void RetireBuffer(void *);
};
} // namespace CoreMessaging::Calling
