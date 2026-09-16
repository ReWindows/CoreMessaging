#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 28 member(s).
namespace Microsoft::CoreUI::Messaging {
class InterconnectMessageAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllSharedMappingsReleased@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVObject@System@@@Z
    virtual void AllSharedMappingsReleased(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachConnection@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAA?AW4MessagingResults@234@PEAVConnection@234@U?$Ref@I@CFlat@@IU?$Ref@V?$SmartPtr@VObject@System@@@CFlat@@@8@@Z
    virtual int AttachConnection(WindissectOpaque *, WindissectOpaque, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BatchedFlush@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVMessageBatchFlusher@234@PEAVMessageStream@234@@Z
    virtual void BatchedFlush(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteConnection@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@PEAVObject@System@@@Z
    virtual void CompleteConnection(WindissectOpaque *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteInitialization@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void CompleteInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VInterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVMessageSession@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachConnection@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@U?$Ref@V?$SmartPtr@VObject@System@@@CFlat@@@CFlat@@@Z
    virtual void DetachConnection(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void Disable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enable@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void Enable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableMemorySharing@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@QEAAX_N@Z
    void EnableMemorySharing(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPingReply@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@QEAAXW4RegistrarClientId@Registrar@34@IUIntPtr@System@@IUWin32Handle@Support@34@@Z
    void GetPingReply(int, unsigned int, ::System::IntPtr, unsigned int, ::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAA?AV?$SmartPtr@VMessageStream@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVConnection@234@W4FlushPolicy@234@W4ExternalPriority@Dispatch@34@@Z
    virtual WindissectOpaque GetStream(WindissectOpaque *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThreadDisconnected@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@QEAAXW4RegistrarClientId@Registrar@34@I@Z
    void NotifyThreadDisconnected(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingAndWait@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAA?AW4MessagingResults@234@PEAVConnection@234@PEAXI@Z
    virtual int PingAndWait(WindissectOpaque *, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareToDetachConnection@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@U?$Ref@V?$SmartPtr@VObject@System@@@CFlat@@@CFlat@@@Z
    virtual void PrepareToDetachConnection(WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseStream@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVMessageStream@234@@Z
    virtual void ReleaseStream(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPendingPingResult@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@QEAAXPEAXI@Z
    void SetPendingPingResult(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnbatchedFlush@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@UEAAXPEAVConnection@234@PEAVMessageStream@234@_N@Z
    virtual void UnbatchedFlush(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~InterconnectMessageAdapter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@IEAAXPEAVMessageSession@234@@Z
    void Init$(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddConnectedClient@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@AEAAXW4RegistrarClientId@Registrar@34@II@Z
    void AddConnectedClient(int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnReceive@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void Callback_OnReceive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearConnectedClients@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void ClearConnectedClients();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushStream@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@AEAAXPEAVConnection@234@PEAVMessageStream@234@@Z
    void FlushStream(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleReceiveIfNeeded@InterconnectMessageAdapter@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void ScheduleReceiveIfNeeded();
};
} // namespace Microsoft::CoreUI::Messaging
