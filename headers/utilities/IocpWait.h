#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Dispatch {
class IocpWait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@IocpWait@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@IocpWait@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VIocpWait@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque Clone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@IocpWait@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@IocpWait@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseHandle@IocpWait@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void ReleaseHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCancel@IocpWait@Dispatch@CoreUI@Microsoft@@UEAA_NU?$Ref@_N@CFlat@@@Z
    virtual bool TryCancel(WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@IocpWait@Dispatch@CoreUI@Microsoft@@AEAAXUWin32Handle@Support@34@PEAVWaitCallback@234@_N2@Z
    void Init$(::Microsoft::CoreUI::Support::Win32Handle, WindissectOpaque *, bool, bool);
};
} // namespace Microsoft::CoreUI::Dispatch
