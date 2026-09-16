#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI {
class Dispatch {
public:
    class BaseUserData;
    class CallbackWait;
    class DeferredCall;
    class DeferredCallDispatcher;
    class DeferredUserDispatcher;
    class DispatchCallback;
    class DispatchItem;
    class Dispatcher;
    class EnqueuedWaitCollection;
    class EventLoop;
    class EventLoopBridge;
    class IocpWait;
    class ManuallyDispatchedEventLoopBridge;
    class OffThreadReceiver;
    class OffThreadSource;
    class RegisteredThreadPoolWait;
    class RegisteredWait;
    class TebUtil;
    class ThreadContext;
    class ThreadPoolEventLoopBridge;
    class Timeout;
    class TimeoutHandler;
    class TimeoutManager;
    class UserAdapter;
    class UserData;
    class WaitCallback;
    class WaitCollection;
    class WaitController;
    class WakeRecord;
    class WakeRecordHandler;
    class Win32EventLoopBridge;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThreadContext_ThreadSignaledOrInterconnectAck@Dispatch@CoreUI@Microsoft@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    void ThreadContext_ThreadSignaledOrInterconnectAck(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserAdapter_ScheduleCoreMessagingDispatch@Dispatch@CoreUI@Microsoft@@YAIPEAUHWND__@@W4tagCoreMsgDispatchPriority@@_K_JPEAI@Z
    unsigned int UserAdapter_ScheduleCoreMessagingDispatch(HWND__*, int, uint64_t, int64_t, unsigned int *);
};
} // namespace Microsoft::CoreUI
