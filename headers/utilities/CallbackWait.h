#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Dispatch {
class CallbackWait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@CallbackWait@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@CallbackWait@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWaitCycle@CallbackWait@Dispatch@CoreUI@Microsoft@@QEAA_NPEAVWaitCollection@234@@Z
    bool StartWaitCycle(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCancel@CallbackWait@Dispatch@CoreUI@Microsoft@@UEAA_NU?$Ref@_N@CFlat@@@Z
    virtual bool TryCancel(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CallbackWait@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~CallbackWait();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExamineHandle@CallbackWait@Dispatch@CoreUI@Microsoft@@CA?AW4WaitStatus@234@UWin32Handle@Support@34@@Z
    static int ExamineHandle(::Microsoft::CoreUI::Support::Win32Handle);
};
} // namespace Microsoft::CoreUI::Dispatch
