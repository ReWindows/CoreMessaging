#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 29 member(s).
namespace Windows::System {
class DispatcherQueueTimer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DispatcherQueueTimer@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DispatcherQueueTimer@System@Windows@@QEAA@XZ
    DispatcherQueueTimer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DispatcherQueueTimer@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DispatcherQueueTimer@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DispatcherQueueTimer@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DispatcherQueueTimer@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DispatcherQueueTimer@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DispatcherQueueTimer@System@Windows@@UEAAJPEAVDispatcherQueue@23@@Z
    virtual long RuntimeClassInitialize(::Windows::System::DispatcherQueue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@DispatcherQueueTimer@System@Windows@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@DispatcherQueueTimer@System@Windows@@UEAAJXZ
    virtual long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Tick@DispatcherQueueTimer@System@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVDispatcherQueueTimer@System@Windows@@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z
    virtual long add_Tick(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Interval@DispatcherQueueTimer@System@Windows@@UEAAJPEAUTimeSpan@Foundation@3@@Z
    virtual long get_Interval(::Windows::Foundation::TimeSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRepeating@DispatcherQueueTimer@System@Windows@@UEAAJPEAE@Z
    virtual long get_IsRepeating(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsRunning@DispatcherQueueTimer@System@Windows@@UEAAJPEAE@Z
    virtual long get_IsRunning(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Interval@DispatcherQueueTimer@System@Windows@@UEAAJUTimeSpan@Foundation@3@@Z
    virtual long put_Interval(::Windows::Foundation::TimeSpan);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsRepeating@DispatcherQueueTimer@System@Windows@@UEAAJE@Z
    virtual long put_IsRepeating(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Tick@DispatcherQueueTimer@System@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Tick(EventRegistrationToken);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterval@DispatcherQueueTimer@System@Windows@@AEAA?AUTimeSpan@Foundation@3@XZ
    ::Windows::Foundation::TimeSpan GetInterval();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsRepeating@DispatcherQueueTimer@System@Windows@@AEAA_NXZ
    bool GetIsRepeating();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimerCallback@DispatcherQueueTimer@System@Windows@@CAJPEAX@Z
    static long TimerCallback(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DispatcherQueueTimer@System@Windows@@EEAA@XZ
    virtual ~DispatcherQueueTimer();
};
} // namespace Windows::System
