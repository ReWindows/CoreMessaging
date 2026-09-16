#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 13 member(s).
namespace Microsoft::CoreUI::Dispatch {
class TimeoutManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatch@TimeoutManager@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnDispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@TimeoutManager@Dispatch@CoreUI@Microsoft@@QEAAXPEAVTimeout@234@@Z
    void Cancel(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@TimeoutManager@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@TimeoutManager@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VTimeoutManager@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVEventLoop@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@TimeoutManager@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@TimeoutManager@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimerSignaled@TimeoutManager@Dispatch@CoreUI@Microsoft@@QEAAXPEAVTimeout@234@@Z
    void OnTimerSignaled(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Schedule@TimeoutManager@Dispatch@CoreUI@Microsoft@@QEAAXPEAVTimeout@234@_N@Z
    void Schedule(WindissectOpaque *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TimeoutManager@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~TimeoutManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@TimeoutManager@Dispatch@CoreUI@Microsoft@@IEAAXPEAVEventLoop@234@@Z
    void Init$(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableTimer@TimeoutManager@Dispatch@CoreUI@Microsoft@@AEAAXPEAVTimeout@234@@Z
    void DisableTimer(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableAbsoluteTimer@TimeoutManager@Dispatch@CoreUI@Microsoft@@AEAAXPEAVTimeout@234@@Z
    void EnableAbsoluteTimer(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTimerDelay@TimeoutManager@Dispatch@CoreUI@Microsoft@@CAXUWin32Handle@Support@34@_N_J@Z
    static void SetTimerDelay(::Microsoft::CoreUI::Support::Win32Handle, bool, int64_t);
};
} // namespace Microsoft::CoreUI::Dispatch
