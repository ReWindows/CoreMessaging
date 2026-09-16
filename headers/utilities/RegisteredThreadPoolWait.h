#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 12 member(s).
namespace Microsoft::CoreUI::Dispatch {
class RegisteredThreadPoolWait {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@RegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VRegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVWaitCollection@234@UWin32Handle@Support@34@PEAVWaitCallback@234@_N@Z
    static WindissectOpaque Create$(WindissectOpaque *, ::Microsoft::CoreUI::Support::Win32Handle, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCallbackContext@RegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void InitializeCallbackContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeClass@RegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@SAX_N@Z
    static void InitializeClass(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartWaitCycle@RegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@UEAA?AW4WaitStatus@234@XZ
    virtual int OnStartWaitCycle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTryCancel@RegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnTryCancel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnSignaled@RegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@AEAAXUIntPtr@System@@PEAPEAX@Z
    void Callback_OnSignaled(::System::IntPtr, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredReleaseCallback@RegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@CAXPEAX@Z
    static void DeferredReleaseCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@RegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitProc@RegisteredThreadPoolWait@Dispatch@CoreUI@Microsoft@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    static void WaitProc(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
};
} // namespace Microsoft::CoreUI::Dispatch
