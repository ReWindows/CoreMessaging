#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::HvSockets {
class HvConnectedClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatch@HvConnectedClient@HvSockets@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnDispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@HvConnectedClient@HvSockets@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@HvConnectedClient@HvSockets@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HvConnectedClient@HvSockets@CoreUI@Microsoft@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@5@@Z
    HvConnectedClient(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@HvConnectedClient@HvSockets@CoreUI@Microsoft@@QEAA_NPEAVHvServerAdapter@234@UHvSocket@234@U?$Ref@UGuid@System@@@CFlat@@@Z
    bool Initialize(WindissectOpaque *, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@HvConnectedClient@HvSockets@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Adapter@HvConnectedClient@HvSockets@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VHvServerAdapter@HvSockets@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Adapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IoSender@HvConnectedClient@HvSockets@CoreUI@Microsoft@@QEAA?AUIoSender@234@XZ
    WindissectOpaque get_IoSender();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HvConnectedClient@HvSockets@CoreUI@Microsoft@@QEAA@XZ
    ~HvConnectedClient();
};
} // namespace Microsoft::CoreUI::HvSockets
