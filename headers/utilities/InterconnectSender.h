#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 13 member(s).
namespace Microsoft::CoreUI::Threading {
class InterconnectSender {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@InterconnectSender@Threading@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@InterconnectSender@Threading@CoreUI@Microsoft@@SA_NPEAVConnection@Messaging@34@U?$Ref@V?$SmartPtr@VInterconnectSender@Threading@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    static bool Connect(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@InterconnectSender@Threading@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@InterconnectSender@Threading@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Send@InterconnectSender@Threading@CoreUI@Microsoft@@QEAAXPEAVBufferSet@Buffering@34@IW4InterconnectBufferFlags@2Cn@@U?$Ref@W4InterconnectBufferFlags@Threading@Cn@@@CFlat@@@Z
    void Send(::Microsoft::CoreUI::Buffering::BufferSet *, unsigned int, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDeferCloseConnection@InterconnectSender@Threading@CoreUI@Microsoft@@QEAAXXZ
    void TryDeferCloseConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterTargetQueueHandle@InterconnectSender@Threading@CoreUI@Microsoft@@QEAAXXZ
    void UnregisterTargetQueueHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForPingResult@InterconnectSender@Threading@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@UWin32Handle@Support@34@@Z
    int WaitForPingResult(::Microsoft::CoreUI::Support::Win32Handle);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_DeferredCloseConnection@InterconnectSender@Threading@CoreUI@Microsoft@@CAXPEAVObject@System@@@Z
    static void Callback_DeferredCloseConnection(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@InterconnectSender@Threading@CoreUI@Microsoft@@CA?AV?$SmartPtr@VInterconnectSender@Threading@CoreUI@Microsoft@@@CFlat@@XZ
    static WindissectOpaque Create$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorTargetQueue@InterconnectSender@Threading@CoreUI@Microsoft@@AEAA_NXZ
    bool MonitorTargetQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThreadQueueHandleSignaled@InterconnectSender@Threading@CoreUI@Microsoft@@AEAAXW4WaitStatus@Dispatch@34@UWin32Handle@Support@34@@Z
    void OnThreadQueueHandleSignaled(int, ::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmonitorTargetQueue@InterconnectSender@Threading@CoreUI@Microsoft@@AEAAXXZ
    void UnmonitorTargetQueue();
};
} // namespace Microsoft::CoreUI::Threading
