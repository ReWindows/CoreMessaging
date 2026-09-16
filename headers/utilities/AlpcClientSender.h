#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 29 member(s).
namespace Microsoft::CoreUI::Messaging {
class AlpcClientSender {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ProcessBuffer@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAAXPEAXHI@Z
    void Callback_ProcessBuffer(void *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ProcessIncoming@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAA_NXZ
    bool Callback_ProcessIncoming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ReenterInProgressProcessing@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAAXI@Z
    void Callback_ReenterInProgressProcessing(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIncomingMessages@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void CheckIncomingMessages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@AlpcClientSender@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@AlpcClientSender@Messaging@CoreUI@Microsoft@@SA?AW4MessagingResults@234@PEAVConnection@234@PEAVAlpcSendMessageAdapter@234@IU?$Ref@V?$SmartPtr@VAlpcClientSender@Messaging@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    static int Connect(WindissectOpaque *, WindissectOpaque *, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@AlpcClientSender@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallYieldCheckHandler@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAAXPEAVThreadContext@Dispatch@34@@Z
    void InstallYieldCheckHandler(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectionCompleted@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAAX_N@Z
    void OnConnectionCompleted(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@AlpcClientSender@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerDisconnected@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void OnServerDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingAndWaitWorker@AlpcClientSender@Messaging@CoreUI@Microsoft@@UEAA?AW4MessagingResults@234@PEAXIIU?$Ref@_N@CFlat@@@Z
    virtual int PingAndWaitWorker(void *, unsigned int, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostBuffersWorker@AlpcClientSender@Messaging@CoreUI@Microsoft@@UEAAXPEAVBufferSet@Buffering@34@@Z
    virtual void PostBuffersWorker(::Microsoft::CoreUI::Buffering::BufferSet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWait@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void RegisterWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryProcessPendingAsyncConnection@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAA_NXZ
    bool TryProcessPendingAsyncConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninstallYieldCheckHandler@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAAXPEAVThreadContext@Dispatch@34@@Z
    void UninstallYieldCheckHandler(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWait@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void UnregisterWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForPendingConnection@AlpcClientSender@Messaging@CoreUI@Microsoft@@UEAA?AW4MessagingResults@234@I_N@Z
    virtual int WaitForPendingConnection(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WaitHandle@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAA?AUWin32Handle@Support@34@XZ
    ::Microsoft::CoreUI::Support::Win32Handle get_WaitHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_ReceivesHighPriorityMessages@AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAAX_N@Z
    void set_ReceivesHighPriorityMessages(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlpcClientSender@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~AlpcClientSender();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@AlpcClientSender@Messaging@CoreUI@Microsoft@@IEAAXXZ
    void Init$();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_CleanupDisconnectedClient@AlpcClientSender@Messaging@CoreUI@Microsoft@@CAXPEAVObject@System@@@Z
    static void Callback_CleanupDisconnectedClient(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnConnectionCompleted@AlpcClientSender@Messaging@CoreUI@Microsoft@@CAXPEAVObject@System@@_N@Z
    static void Callback_OnConnectionCompleted(::System::Object *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnReceive@AlpcClientSender@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void Callback_OnReceive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAlpcPort@AlpcClientSender@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void CloseAlpcPort();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAlpcPort@AlpcClientSender@Messaging@CoreUI@Microsoft@@AEAAHPEAVString@System@@W4RegistrarClientId@Registrar@34@@Z
    int CreateAlpcPort(::System::String *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedRemoteIds@AlpcClientSender@Messaging@CoreUI@Microsoft@@AEAAXU?$Ref@I@CFlat@@0U?$Ref@W4RegistrarClientId@Registrar@CoreUI@Microsoft@@@6@U?$Ref@_N@6@@Z
    void GetAdjustedRemoteIds(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForConnection@AlpcClientSender@Messaging@CoreUI@Microsoft@@AEAA?AW4MessagingResults@234@I@Z
    int WaitForConnection(unsigned int);
};
} // namespace Microsoft::CoreUI::Messaging
