#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Messaging {
class CrossProcessReceivePortBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnPeerDisconnected@CrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@QEAAXII@Z
    void Callback_OnPeerDisconnected(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@CrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@QEAAXU?$In@UGuid@System@@@CFlat@@@Z
    void Initialize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@CrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasListeners@CrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@QEAA_NXZ
    bool get_HasListeners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCrossPartition@CrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool get_IsCrossPartition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Listeners@CrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@V?$List$1@U?$InterfacePtr@VICallbackMessagePortListener@CoreUI@Microsoft@@@CFlat@@@Generic@Collections@System@@@CFlat@@XZ
    WindissectOpaque get_Listeners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Session@CrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VMessageSession@Messaging@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Session();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~CrossProcessReceivePortBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessagePort_AddListener$@CrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@AEAAXU?$FastInterfacePtr@VICallbackMessagePortListener@CoreUI@Microsoft@@@CFlat@@@Z
    void Microsoft_CoreUI_IExportMessagePort_AddListener$(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessagePort_RemoveListener$@CrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@AEAAXU?$FastInterfacePtr@VICallbackMessagePortListener@CoreUI@Microsoft@@@CFlat@@@Z
    void Microsoft_CoreUI_IExportMessagePort_RemoveListener$(WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Messaging
