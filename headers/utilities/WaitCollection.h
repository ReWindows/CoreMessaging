#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 16 member(s).
namespace Microsoft::CoreUI::Dispatch {
class WaitCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_DeliverCompletion@WaitCollection@Dispatch@CoreUI@Microsoft@@QEAA_NU?$Ref@UWakeRecord@Dispatch@CoreUI@Microsoft@@@CFlat@@@Z
    bool Callback_DeliverCompletion(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_DoGeneralWait@WaitCollection@Dispatch@CoreUI@Microsoft@@QEAAXIPEAUWin32Handle@Support@34@IW4WaitFlags@34@U?$Ref@UWakeRecord@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVWakeRecordHandler@234@@Z
    void Callback_DoGeneralWait(unsigned int, ::Microsoft::CoreUI::Support::Win32Handle *, unsigned int, int, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@WaitCollection@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@WaitCollection@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VWaitCollection@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVEventLoop@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@WaitCollection@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoTargetedWaitWithContextLock@WaitCollection@Dispatch@CoreUI@Microsoft@@QEAA_NUWin32Handle@Support@34@I@Z
    bool DoTargetedWaitWithContextLock(::Microsoft::CoreUI::Support::Win32Handle, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@WaitCollection@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReadyToWait@WaitCollection@Dispatch@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool OnReadyToWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWaitReadyToStartWaitCycle@WaitCollection@Dispatch@CoreUI@Microsoft@@UEAAXPEAVRegisteredWait@234@@Z
    virtual void OnWaitReadyToStartWaitCycle(WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnWaitRemoved@WaitCollection@Dispatch@CoreUI@Microsoft@@UEAAXPEAVRegisteredWait@234@@Z
    virtual void OnWaitRemoved(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWait@WaitCollection@Dispatch@CoreUI@Microsoft@@QEAAXUWin32Handle@Support@34@PEAVWaitCallback@234@_N@Z
    void RegisterWait(::Microsoft::CoreUI::Support::Win32Handle, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveExternalWaits@WaitCollection@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void RemoveExternalWaits();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWait@WaitCollection@Dispatch@CoreUI@Microsoft@@QEAAXUWin32Handle@Support@34@_N@Z
    void UnregisterWait(::Microsoft::CoreUI::Support::Win32Handle, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyEmpty@WaitCollection@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void VerifyEmpty();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WaitCollection@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~WaitCollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@WaitCollection@Dispatch@CoreUI@Microsoft@@IEAAXPEAVEventLoop@234@@Z
    void Init$(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Dispatch
