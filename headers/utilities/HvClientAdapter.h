#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 13 member(s).
namespace Microsoft::CoreUI::HvSockets {
class HvClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatch@HvClientAdapter@HvSockets@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnDispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@HvClientAdapter@HvSockets@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@UGuid@System@@II@Z
    int Connect(::System::Guid, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HvClientAdapter@HvSockets@CoreUI@Microsoft@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@5@@Z
    HvClientAdapter(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PE Export
    // Symbol: ?OnBeforeReceivePending@HvClientAdapter@HvSockets@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnBeforeReceivePending();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@HvClientAdapter@HvSockets@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PE Export
    // Symbol: ?OnPendingConnectionComplete@HvClientAdapter@HvSockets@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnPendingConnectionComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerDisconnected@HvClientAdapter@HvSockets@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnServerDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EventLoop@HvClientAdapter@HvSockets@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VEventLoop@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_EventLoop();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@HvClientAdapter@HvSockets@CoreUI@Microsoft@@IEAAXPEAVEventLoop@Dispatch@34@@Z
    void Init$(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@HvClientAdapter@HvSockets@CoreUI@Microsoft@@AEAAXW4WaitStatus@Dispatch@34@UWin32Handle@Support@34@@Z
    void OnConnected(int, ::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@HvClientAdapter@HvSockets@CoreUI@Microsoft@@AEAA_NXZ
    bool OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterReceiverWait@HvClientAdapter@HvSockets@CoreUI@Microsoft@@AEAAXXZ
    void RegisterReceiverWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterReceiverWait@HvClientAdapter@HvSockets@CoreUI@Microsoft@@AEAAXXZ
    void UnregisterReceiverWait();
};
} // namespace Microsoft::CoreUI::HvSockets
