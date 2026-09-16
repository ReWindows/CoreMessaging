#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 20 member(s).
namespace Microsoft::CoreUI::Messaging {
class Connection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelQueuedMessages@Connection@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void CancelQueuedMessages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@Connection@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Connection@Messaging@CoreUI@Microsoft@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@5@@Z
    Connection(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Connection@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndpointToIdentity@Connection@Messaging@CoreUI@Microsoft@@QEAA?AUHIDENTITY@34@UHENDPOINT@34@@Z
    ::Microsoft::CoreUI::HIDENTITY EndpointToIdentity(::Microsoft::CoreUI::HENDPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushNow@Connection@Messaging@CoreUI@Microsoft@@QEAAX_N@Z
    void FlushNow(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@Connection@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VMessageStream@Messaging@CoreUI@Microsoft@@@CFlat@@W4ExternalPriority@Dispatch@34@_N@Z
    WindissectOpaque GetStream(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Connection@Messaging@CoreUI@Microsoft@@QEAA_NPEAVMessageSession@234@PEAVMessageAdapter@234@W4RegistrarClientId@Registrar@34@II_NIU?$In@UGuid@System@@@CFlat@@@Z
    bool Initialize(WindissectOpaque *, WindissectOpaque *, int, unsigned int, unsigned int, bool, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeZombieConnection@Connection@Messaging@CoreUI@Microsoft@@QEAAXPEAVMessageSession@234@PEAVMessageAdapter@234@W4RegistrarClientId@Registrar@34@II_NIUGuid@System@@@Z
    void InitializeZombieConnection(WindissectOpaque *, WindissectOpaque *, int, unsigned int, unsigned int, bool, unsigned int, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@Connection@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingAndWait@Connection@Messaging@CoreUI@Microsoft@@QEAA?AW4MessagingResults@234@PEAXI@Z
    int PingAndWait(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LocalPort@Connection@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VCrossProcessReceivePortBase@Messaging@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_LocalPort();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@Connection@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    WindissectOpaque get_Name();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourceTracker@Connection@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VResourceTracker@Resources@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_ResourceTracker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SharedMappingTracker@Connection@Messaging@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VResourceTracker@Resources@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_SharedMappingTracker();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Connection@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~Connection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteInitialization@Connection@Messaging@CoreUI@Microsoft@@AEAA_NPEAVMessageSession@234@W4RegistrarClientId@Registrar@34@II_NUHIDENTITY@34@3IUGuid@System@@4@Z
    bool CompleteInitialization(WindissectOpaque *, int, unsigned int, unsigned int, bool, ::Microsoft::CoreUI::HIDENTITY, ::Microsoft::CoreUI::HIDENTITY, unsigned int, ::System::Guid, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateReverseConnectionPort@Connection@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void CreateReverseConnectionPort();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharedMappingTrackerStateChanged@Connection@Messaging@CoreUI@Microsoft@@AEAAX_N@Z
    void SharedMappingTrackerStateChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZombieThunkHandles@Connection@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void ZombieThunkHandles();
};
} // namespace Microsoft::CoreUI::Messaging
