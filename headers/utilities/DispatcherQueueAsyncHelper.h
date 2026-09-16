#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 30 member(s).
namespace Windows::System {
class DispatcherQueueAsyncHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DispatcherQueueAsyncHelper@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishAndFire@DispatcherQueueAsyncHelper@System@Windows@@QEAAXJ@Z
    void FinishAndFire(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DispatcherQueueAsyncHelper@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DispatcherQueueAsyncHelper@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DispatcherQueueAsyncHelper@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DispatcherQueueAsyncHelper@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DispatcherQueueAsyncHelper@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DispatcherQueueAsyncHelper@System@Windows@@UEAAJ_N@Z
    virtual long RuntimeClassInitialize(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOperation@DispatcherQueueAsyncHelper@System@Windows@@QEAAXXZ
    void StartOperation();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@DispatcherQueueAsyncHelper@System@Windows@@EEAAJXZ
    virtual long GetResults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@DispatcherQueueAsyncHelper@System@Windows@@EEAAXXZ
    virtual void OnCancel();
    // Category: Method | Source: PE Export
    // Symbol: ?OnClose@DispatcherQueueAsyncHelper@System@Windows@@EEAAXXZ
    virtual void OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@DispatcherQueueAsyncHelper@System@Windows@@EEAAJXZ
    virtual long OnStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@DispatcherQueueAsyncHelper@System@Windows@@EEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@3@@Z
    virtual long get_Completed(::Windows::Foundation::IAsyncActionCompletedHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@DispatcherQueueAsyncHelper@System@Windows@@EEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z
    virtual long put_Completed(::Windows::Foundation::IAsyncActionCompletedHandler *);
};
} // namespace Windows::System
