#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 24 member(s).
namespace Windows::System {
class DispatcherQueueController {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DispatcherQueueController@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDispatcherQueueControllerHelper@DispatcherQueueController@System@Windows@@SAJPEAPEAUIDispatcherQueueController@23@@Z
    static long CreateDispatcherQueueControllerHelper(::Windows::System::IDispatcherQueueController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOnNewThread@DispatcherQueueController@System@Windows@@SAJW4DISPATCHERQUEUE_THREAD_APARTMENTTYPE@@PEAPEAUIDispatcherQueueController@23@@Z
    static long CreateOnNewThread(int, ::Windows::System::IDispatcherQueueController * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DispatcherQueueController@System@Windows@@QEAA@XZ
    DispatcherQueueController();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DispatcherQueueController@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DispatcherQueueController@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DispatcherQueueController@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DispatcherQueueController@System@Windows@@SAPEB_WXZ
    static wchar_t const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DispatcherQueueController@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DispatcherQueueController@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DispatcherQueueController@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DispatcherQueueController@System@Windows@@UEAAJ_N@Z
    virtual long RuntimeClassInitialize(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownQueueAsync@DispatcherQueueController@System@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@3@@Z
    virtual long ShutdownQueueAsync(::Windows::Foundation::IAsyncAction * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DispatcherQueue@DispatcherQueueController@System@Windows@@UEAAJPEAPEAUIDispatcherQueue@23@@Z
    virtual long get_DispatcherQueue(::Windows::System::IDispatcherQueue * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatcherQueueThreadProc@DispatcherQueueController@System@Windows@@CAKPEAX@Z
    static unsigned long DispatcherQueueThreadProc(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DispatcherQueueController@System@Windows@@EEAA@XZ
    virtual ~DispatcherQueueController();
};
} // namespace Windows::System
