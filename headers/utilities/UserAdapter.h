#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 42 member(s).
namespace Microsoft::CoreUI::Dispatch {
class UserAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_HostModeRun@UserAdapter@Dispatch@CoreUI@Microsoft@@QEAAXW4RunMode@234@@Z
    void Callback_HostModeRun(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@UserAdapter@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateForThread@UserAdapter@Dispatch@CoreUI@Microsoft@@SA_NPEAVWin32EventLoopBridge@234@_NU?$Ref@V?$SmartPtr@VUserAdapter@Dispatch@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    static bool CreateForThread(WindissectOpaque *, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@UserAdapter@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@UserAdapter@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSharedTebInitialized@UserAdapter@Dispatch@CoreUI@Microsoft@@SAXPEAVEventLoop@234@@Z
    static void EnsureSharedTebInitialized(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureUserDispatchScheduled@UserAdapter@Dispatch@CoreUI@Microsoft@@QEAAXW4InternalPriority@234@@Z
    void EnsureUserDispatchScheduled(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureUserDispatchScheduled@UserAdapter@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void EnsureUserDispatchScheduled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalWindowMessagesHavePrecedence@UserAdapter@Dispatch@CoreUI@Microsoft@@QEAA_NW4InternalPriority@234@H@Z
    bool ExternalWindowMessagesHavePrecedence(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeClass@UserAdapter@Dispatch@CoreUI@Microsoft@@SAX_N@Z
    static void InitializeClass(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentThreadUserInitialized@UserAdapter@Dispatch@CoreUI@Microsoft@@SA_NXZ
    static bool IsCurrentThreadUserInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGuiThreadInitCallback@UserAdapter@Dispatch@CoreUI@Microsoft@@SAXW4tagCoreMessagingNotification@@IPEAX@Z
    static void OnGuiThreadInitCallback(int, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RescheduleDeferredMessages@UserAdapter@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void RescheduleDeferredMessages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleDispatch@UserAdapter@Dispatch@CoreUI@Microsoft@@QEAAXW4InternalPriority@234@PEAX_NI@Z
    void ScheduleDispatch(int, void *, bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeSharedTeb@UserAdapter@Dispatch@CoreUI@Microsoft@@SAXXZ
    static void UninitializeSharedTeb();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WakeDispatchThreadIfNecessary@UserAdapter@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void WakeDispatchThreadIfNecessary();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreTlsFlagsSet@UserAdapter@Dispatch@CoreUI@Microsoft@@CA_NW4UserAdapter$TlsFlags@234@@Z
    static bool AreTlsFlagsSet(int$TlsFlags);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncPostMessage@UserAdapter@Dispatch@CoreUI@Microsoft@@CAXPEAUHWND__@@_K_J@Z
    static void AsyncPostMessage(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncSendMessage@UserAdapter@Dispatch@CoreUI@Microsoft@@CAXPEAUHWND__@@_K_J@Z
    static void AsyncSendMessage(HWND__*, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_WaitWorker@UserAdapter@Dispatch@CoreUI@Microsoft@@AEAA?AW4WaitStatus@234@PEAUWin32Handle@Support@34@IIW4WaitFlags@34@U?$Ref@I@CFlat@@@Z
    int Callback_WaitWorker(::Microsoft::CoreUI::Support::Win32Handle *, unsigned int, unsigned int, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@UserAdapter@Dispatch@CoreUI@Microsoft@@CA?AV?$SmartPtr@VUserAdapter@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVWin32EventLoopBridge@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowWithReentrancyCheck@UserAdapter@Dispatch@CoreUI@Microsoft@@CAPEAUHWND__@@_NPEAUUIntPtr@System@@PEAIPEAKPEA_N@Z
    static HWND__* CreateWindowWithReentrancyCheck(bool, ::System::UIntPtr *, unsigned int *, unsigned long *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredGuiThreadInitCallback@UserAdapter@Dispatch@CoreUI@Microsoft@@CAXPEAX@Z
    static void DeferredGuiThreadInitCallback(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchNextUserQueueItemNative@UserAdapter@Dispatch@CoreUI@Microsoft@@CA?AW4UserAdapter$DispatchedMessageCategory@234@_N@Z
    static int$DispatchedMessageCategory DispatchNextUserQueueItemNative(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@UserAdapter@Dispatch@CoreUI@Microsoft@@CAXPEAUHWND__@@W4UserAdapter$UserPriority@234@_N@Z
    static void DoWork(HWND__*, int$UserPriority, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrainCoreMessagingQueue@UserAdapter@Dispatch@CoreUI@Microsoft@@AEAAXW4UserAdapter$UserPriority@234@PEAPEAX@Z
    void DrainCoreMessagingQueue(int$UserPriority, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeUserData@UserAdapter@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void FreeUserData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleEmptyQueue@UserAdapter@Dispatch@CoreUI@Microsoft@@AEAA_NXZ
    bool HandleEmptyQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWindow@UserAdapter@Dispatch@CoreUI@Microsoft@@AEAA_N_N@Z
    bool InitializeWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_CreateWindow@UserAdapter@Dispatch@CoreUI@Microsoft@@CAPEAUHWND__@@XZ
    static HWND__* NoContext_CreateWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_InitializeWindowClass@UserAdapter@Dispatch@CoreUI@Microsoft@@CAXPEAUHINSTANCE__@@@Z
    static void NoContext_InitializeWindowClass(HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScheduleUserDispatchFailure@UserAdapter@Dispatch@CoreUI@Microsoft@@CAXPEAXI@Z
    static void OnScheduleUserDispatchFailure(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserDispatch@UserAdapter@Dispatch@CoreUI@Microsoft@@AEAAX_NW4UserAdapter$UserPriority@234@PEAPEAX@Z
    void OnUserDispatch(bool, int$UserPriority, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserQueueReportsEmpty@UserAdapter@Dispatch@CoreUI@Microsoft@@AEAA_NXZ
    bool OnUserQueueReportsEmpty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPendingWaitsCommon@UserAdapter@Dispatch@CoreUI@Microsoft@@AEAA_NXZ
    bool ProcessPendingWaitsCommon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReschedulePendingDispatches@UserAdapter@Dispatch@CoreUI@Microsoft@@AEAAX_N@Z
    void ReschedulePendingDispatches(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunIntegratedLoop@UserAdapter@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void RunIntegratedLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleInputPriorityUserDispatch@UserAdapter@Dispatch@CoreUI@Microsoft@@CAXPEAUHWND__@@_N@Z
    static void ScheduleInputPriorityUserDispatch(HWND__*, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackupTimer@UserAdapter@Dispatch@CoreUI@Microsoft@@CAXPEAXI@Z
    static void SetBackupTimer(void *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTlsFlags@UserAdapter@Dispatch@CoreUI@Microsoft@@CAXW4UserAdapter$TlsFlags@234@@Z
    static void SetTlsFlags(int$TlsFlags);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeWindow@UserAdapter@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void UninitializeWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowProc@UserAdapter@Dispatch@CoreUI@Microsoft@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t WindowProc(HWND__*, unsigned int, uint64_t, int64_t);
};
} // namespace Microsoft::CoreUI::Dispatch
