#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 13 member(s).
namespace Microsoft::CoreUI::Messaging {
class MessageEndpoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@MessageEndpoint@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundConnectionID@MessageEndpoint@Messaging@CoreUI@Microsoft@@QEAA?AUGuid@System@@XZ
    ::System::Guid GetBoundConnectionID();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoutingInfo@MessageEndpoint@Messaging@CoreUI@Microsoft@@QEAA?AURoutingInfo@34@XZ
    ::Microsoft::CoreUI::RoutingInfo GetRoutingInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEndpoint@MessageEndpoint@Messaging@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVThreadContext@Dispatch@34@PEAVCrossProcessReceivePortBase@234@@Z
    void InitializeEndpoint(::System::Object *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEndpoint@MessageEndpoint@Messaging@CoreUI@Microsoft@@QEAAXPEAVObject@System@@PEAVThreadContext@Dispatch@34@UHIDENTITY@34@PEAVCrossProcessReceivePortBase@234@@Z
    void InitializeEndpoint(::System::Object *, WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@MessageEndpoint@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebindPort@MessageEndpoint@Messaging@CoreUI@Microsoft@@QEAAXPEAVCrossProcessReceivePortBase@234@@Z
    void RebindPort(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleasePort@MessageEndpoint@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void ReleasePort();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMessageHandler@MessageEndpoint@Messaging@CoreUI@Microsoft@@QEAAXPEAVMessageEndpoint$MessageHandler@234@@Z
    void SetMessageHandler(WindissectOpaque$MessageHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Context@MessageEndpoint@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VThreadContext@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Context();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MessageEndpoint@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~MessageEndpoint();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeIdentity@MessageEndpoint@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void FreeIdentity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEndpointCommon@MessageEndpoint@Messaging@CoreUI@Microsoft@@AEAAXPEAVObject@System@@PEAVThreadContext@Dispatch@34@UHIDENTITY@34@PEAVCrossProcessReceivePortBase@234@@Z
    void InitializeEndpointCommon(::System::Object *, WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Messaging
