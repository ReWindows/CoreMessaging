#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 20 member(s).
namespace Microsoft::CoreUI::Messaging {
class CrossProcessReceivePort {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VCrossProcessReceivePort@Messaging@CoreUI@Microsoft@@@CFlat@@UIntPtr@System@@PEAVString@8@PEAVMessageSession@234@@Z
    static WindissectOpaque Create$(::System::IntPtr, ::System::String *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectClient@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@QEAAXII@Z
    void DisconnectClient(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInProcessState@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@QEAA_NU?$In@UGuid@System@@@CFlat@@UIntPtr@System@@PEAVMessageSession@234@PEAUGuid@8@@Z
    bool InitializeInProcessState(WindissectOpaque, ::System::IntPtr, WindissectOpaque *, ::System::Guid *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalUsage@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnFinalUsage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateIdentityGroup@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@UEAAXIW4RegistrarClientId@Registrar@34@@Z
    virtual void ValidateIdentityGroup(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@UEAA?AUGuid@System@@XZ
    virtual ::System::Guid get_Id();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReceivesHighPriorityMessages@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@UEAA_NXZ
    virtual bool get_ReceivesHighPriorityMessages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_ReceivesHighPriorityMessages@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@UEAAX_N@Z
    virtual void set_ReceivesHighPriorityMessages(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~CrossProcessReceivePort();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@MEAAXPEAVComExportAdapterContainer@CFlat@@PEAVObject@System@@@Z
    virtual void CFlat_IImplementsComInterface_OnAdapterContainerInvalidation$(::CFlat::ComExportAdapterContainer *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@MEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    virtual void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@IEAAXUIntPtr@System@@PEAVString@6@PEAVMessageSession@234@PEAUGuid@6@@Z
    void Init$(::System::IntPtr, ::System::String *, WindissectOpaque *, ::System::Guid *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnClientConnected@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@AEAAXII@Z
    void Callback_OnClientConnected(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnClientDisconnected@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@AEAAXII@Z
    void Callback_OnClientDisconnected(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientConnected@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@AEAAXII@Z
    void OnClientConnected(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientDisconnected@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@AEAAXII@Z
    void OnClientDisconnected(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Publish@CrossProcessReceivePort@Messaging@CoreUI@Microsoft@@AEAA?AW4MessagingResults@234@PEAVString@System@@@Z
    int Publish(::System::String *);
};
} // namespace Microsoft::CoreUI::Messaging
