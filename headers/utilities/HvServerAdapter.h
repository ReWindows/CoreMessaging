#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 14 member(s).
namespace Microsoft::CoreUI::HvSockets {
class HvServerAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatch@HvServerAdapter@HvSockets@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnDispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@HvServerAdapter@HvSockets@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectClient@HvServerAdapter@HvSockets@CoreUI@Microsoft@@QEAAXPEAVHvConnectedClient@234@@Z
    void DisconnectClient(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectCurrentCaller@HvServerAdapter@HvSockets@CoreUI@Microsoft@@QEAAXXZ
    void DisconnectCurrentCaller();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HvServerAdapter@HvSockets@CoreUI@Microsoft@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@5@@Z
    HvServerAdapter(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PE Export
    // Symbol: ?OnClientDisconnected@HvServerAdapter@HvSockets@CoreUI@Microsoft@@UEAAXPEAVHvConnectedClient@234@@Z
    virtual void OnClientDisconnected(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@HvServerAdapter@HvSockets@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentCaller@HvServerAdapter@HvSockets@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VHvConnectedClient@HvSockets@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_CurrentCaller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EventLoop@HvServerAdapter@HvSockets@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VEventLoop@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_EventLoop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HvServerAdapter@HvSockets@CoreUI@Microsoft@@QEAA@XZ
    ~HvServerAdapter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@HvServerAdapter@HvSockets@CoreUI@Microsoft@@IEAAXPEAVEventLoop@Dispatch@34@PEAUGuid@System@@I@Z
    void Init$(WindissectOpaque *, ::System::Guid *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptConnection@HvServerAdapter@HvSockets@CoreUI@Microsoft@@AEAA_NU?$Ref@UHvSocket@HvSockets@CoreUI@Microsoft@@@CFlat@@U?$Ref@UGuid@System@@@6@@Z
    bool AcceptConnection(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAcceptPending@HvServerAdapter@HvSockets@CoreUI@Microsoft@@AEAAXW4WaitStatus@Dispatch@34@UWin32Handle@Support@34@@Z
    void OnAcceptPending(int, ::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsyncAccept@HvServerAdapter@HvSockets@CoreUI@Microsoft@@AEAAXXZ
    void StartAsyncAccept();
};
} // namespace Microsoft::CoreUI::HvSockets
