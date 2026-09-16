#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 8 member(s).
namespace Microsoft::CoreUI::Dispatch {
class RegisteredWait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RegisteredWait@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCallback@RegisteredWait@Dispatch@CoreUI@Microsoft@@UEAAXW4WaitStatus@234@UWin32Handle@Support@34@@Z
    virtual void DoCallback(int, ::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPendingCompletion@RegisteredWait@Dispatch@CoreUI@Microsoft@@QEAAXPEAVWaitCollection@234@@Z
    void OnPendingCompletion(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessWakeCompletion@RegisteredWait@Dispatch@CoreUI@Microsoft@@QEAAXPEAVWaitCollection@234@W4WaitStatus@234@@Z
    void ProcessWakeCompletion(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueWakeCompletion@RegisteredWait@Dispatch@CoreUI@Microsoft@@QEAAXPEAVWaitCollection@234@U?$Ref@UWakeRecord@Dispatch@CoreUI@Microsoft@@@CFlat@@@Z
    void QueueWakeCompletion(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlinkUnstarted@RegisteredWait@Dispatch@CoreUI@Microsoft@@SAXPEAV1234@U?$Ref@V?$SmartPtr@VRegisteredWait@Dispatch@CoreUI@Microsoft@@@CFlat@@@CFlat@@1@Z
    static void UnlinkUnstarted(WindissectOpaque *, WindissectOpaque, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegisteredWait@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~RegisteredWait();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@RegisteredWait@Dispatch@CoreUI@Microsoft@@IEAAXUWin32Handle@Support@34@PEAVWaitCallback@234@_N@Z
    void Init$(::Microsoft::CoreUI::Support::Win32Handle, WindissectOpaque *, bool);
};
} // namespace Microsoft::CoreUI::Dispatch
