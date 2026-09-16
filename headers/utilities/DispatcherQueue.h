#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 48 member(s).
namespace Windows::System {
class DispatcherQueue {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DispatcherQueue@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteShutdown@DispatcherQueue@System@Windows@@QEAAXXZ
    void CompleteShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTimer@DispatcherQueue@System@Windows@@UEAAJPEAPEAUIDispatcherQueueTimer@23@@Z
    virtual long CreateTimer(::Windows::System::IDispatcherQueueTimer * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DispatcherQueue@System@Windows@@QEAA@XZ
    DispatcherQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDispatcherQueueForThread@DispatcherQueue@System@Windows@@SA_NPEAPEAV123@@Z
    static bool GetDispatcherQueueForThread(::Windows::System::DispatcherQueue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DispatcherQueue@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageSession@DispatcherQueue@System@Windows@@UEAAJPEAPEAUIMessageSession@@@Z
    virtual long GetMessageSession(IMessageSession * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateForCurrentThread@DispatcherQueue@System@Windows@@SAJPEAPEAUIDispatcherQueue@23@@Z
    static long GetOrCreateForCurrentThread(::Windows::System::IDispatcherQueue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DispatcherQueue@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DispatcherQueue@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DispatcherQueue@System@Windows@@SAPEB_WXZ
    static wchar_t const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DispatcherQueue@System@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DispatcherQueue@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DispatcherQueue@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DispatcherQueue@System@Windows@@UEAAJ_NPEAVDispatcherQueueController@23@@Z
    virtual long RuntimeClassInitialize(bool, ::Windows::System::DispatcherQueueController *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownDeferCompleted@DispatcherQueue@System@Windows@@QEAAXXZ
    void ShutdownDeferCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartShutdownAsync@DispatcherQueue@System@Windows@@QEAAXXZ
    void StartShutdownAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnqueue@DispatcherQueue@System@Windows@@UEAAJPEAUIDispatcherQueueHandler@23@PEAE@Z
    virtual long TryEnqueue(::Windows::System::IDispatcherQueueHandler *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnqueueWithPriority@DispatcherQueue@System@Windows@@UEAAJW4DispatcherQueuePriority@23@PEAUIDispatcherQueueHandler@23@PEAE@Z
    virtual long TryEnqueueWithPriority(int, ::Windows::System::IDispatcherQueueHandler *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ShutdownCompleted@DispatcherQueue@System@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVDispatcherQueue@System@Windows@@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z
    virtual long add_ShutdownCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ShutdownStarting@DispatcherQueue@System@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVDispatcherQueue@System@Windows@@PEAVDispatcherQueueShutdownStartingEventArgs@23@@Foundation@3@PEAUEventRegistrationToken@@@Z
    virtual long add_ShutdownStarting(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasThreadAccess@DispatcherQueue@System@Windows@@UEAAJPEAE@Z
    virtual long get_HasThreadAccess(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ShutdownCompleted@DispatcherQueue@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ShutdownCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ShutdownStarting@DispatcherQueue@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ShutdownStarting(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferInvokeCallback@DispatcherQueue@System@Windows@@CAJPEAX@Z
    static long DeferInvokeCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueDrainedCallback@DispatcherQueue@System@Windows@@CAJPEAX@Z
    static long QueueDrainedCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@DispatcherQueue@System@Windows@@AEAAXW4MsgExitOptions@@PEB_N@Z
    void Run(int, bool const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownStartingCallback@DispatcherQueue@System@Windows@@CAJPEAX@Z
    static long ShutdownStartingCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNextShutdownStartingStage@DispatcherQueue@System@Windows@@AEAAXXZ
    void StartNextShutdownStartingStage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnqueueWorker@DispatcherQueue@System@Windows@@AEAAJW4DispatcherQueuePriority@23@PEAUIDispatcherQueueHandler@23@PEAE@Z
    long TryEnqueueWorker(int, ::Windows::System::IDispatcherQueueHandler *, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DispatcherQueue@System@Windows@@EEAA@XZ
    virtual ~DispatcherQueue();
};
} // namespace Windows::System
