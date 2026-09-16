#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 8 member(s).
namespace Microsoft::CoreUI::Messaging {
class ReverseConnectionReceivePortBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ReverseConnectionReceivePortBase@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ReverseConnectionReceivePortBase@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateIdentityGroup@ReverseConnectionReceivePortBase@Messaging@CoreUI@Microsoft@@UEAAXIW4RegistrarClientId@Registrar@34@@Z
    virtual void ValidateIdentityGroup(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@ReverseConnectionReceivePortBase@Messaging@CoreUI@Microsoft@@UEAA?AUGuid@System@@XZ
    virtual ::System::Guid get_Id();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReverseConnectionReceivePortBase@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~ReverseConnectionReceivePortBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@ReverseConnectionReceivePortBase@Messaging@CoreUI@Microsoft@@IEAAXPEAVConnection@234@U?$Ref@UGuid@System@@@CFlat@@@Z
    void Init$(WindissectOpaque *, WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlatformDispose@ReverseConnectionReceivePortBase@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void PlatformDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlatformInitialize@ReverseConnectionReceivePortBase@Messaging@CoreUI@Microsoft@@AEAAXU?$In@UGuid@System@@@CFlat@@PEAVConnection@234@@Z
    void PlatformInitialize(WindissectOpaque, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Messaging
