#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Messaging {
class AnonymousStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AnonymousStream@Messaging@CoreUI@Microsoft@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AnonymousStream@Messaging@CoreUI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AnonymousStream@Messaging@CoreUI@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Send@AnonymousStream@Messaging@CoreUI@Microsoft@@UEAAJ_KPEBXI@Z
    virtual long Send(uint64_t, void const *, unsigned int);
};
} // namespace Microsoft::CoreUI::Messaging
