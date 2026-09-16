#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 17 member(s).
namespace Windows::System {
class ShutdownStartingEventArgsImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShutdownStartingEventArgsImpl@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShutdownStartingEventArgsImpl@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShutdownStartingEventArgsImpl@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShutdownStartingEventArgsImpl@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShutdownStartingEventArgsImpl@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShutdownStartingEventArgsImpl@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShutdownStartingEventArgsImpl@System@Windows@@UEAAJPEAVDispatcherQueue@23@@Z
    virtual long RuntimeClassInitialize(::Windows::System::DispatcherQueue *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShutdownStartingEventArgsImpl@System@Windows@@QEAA@XZ
    ShutdownStartingEventArgsImpl();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShutdownStartingEventArgsImpl@System@Windows@@EEAA@XZ
    virtual ~ShutdownStartingEventArgsImpl();
};
} // namespace Windows::System
