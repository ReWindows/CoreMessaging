#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 29 member(s).
namespace Microsoft::CoreUI::Dispatch {
class ThreadContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateEndpointIdentity@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAA?AUHIDENTITY@34@PEAVMessageEndpoint@Messaging@34@PEAVCrossProcessReceivePortBase@734@@Z
    ::Microsoft::CoreUI::HIDENTITY AllocateEndpointIdentity(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateExternalThreadEndpointIdentity@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAAXIU?$Ref@UHIDENTITY@CoreUI@Microsoft@@@CFlat@@@Z
    void AllocateExternalThreadEndpointIdentity(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateThreadEndpointIdentity@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAAXIU?$Ref@UHIDENTITY@CoreUI@Microsoft@@@CFlat@@@Z
    void AllocateThreadEndpointIdentity(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearErrorLog@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void ClearErrorLog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ThreadContext@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ThreadContext@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateIdentityTable@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAAXPEAVIdentityTableView$EnumerateHandlesCallback@Identity@34@@Z
    void EnumerateIdentityTable(::Microsoft::CoreUI::Identity::IdentityTableView$EnumerateHandlesCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeHandle@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAAXUHIDENTITY@34@@Z
    void FreeHandle(::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeClass@ThreadContext@Dispatch@CoreUI@Microsoft@@SAX_N@Z
    static void InitializeClass(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeExternalThreadEndpoint@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VExternalThreadEndpoint@Services@CoreUI@Microsoft@@@CFlat@@PEAVExportEndpointHandler@34@@Z
    WindissectOpaque InitializeExternalThreadEndpoint(::Microsoft::CoreUI::ExportEndpointHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCreate@ThreadContext@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VThreadContext@Dispatch@CoreUI@Microsoft@@@CFlat@@_N000@Z
    static WindissectOpaque InternalCreate(bool, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalDispose@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void InternalDispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEndpointIdentityPort@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAAXPEAVMessageEndpoint@Messaging@34@PEAVCrossProcessReceivePortBase@634@@Z
    void SetEndpointIdentityPort(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandleData@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAAXUHIDENTITY@34@PEAVMessageEndpoint@Messaging@34@PEAVCrossProcessReceivePortBase@734@@Z
    void SetHandleData(::Microsoft::CoreUI::HIDENTITY, WindissectOpaque *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ThreadContext@Dispatch@CoreUI@Microsoft@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@5@@Z
    ThreadContext(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackError@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVObject@6@1@Z
    void TrackError(::System::String *, ::System::Object *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackError@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAAXPEAVString@System@@PEAVObject@6@@Z
    void TrackError(::System::String *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeExternalThreadEndpoint@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void UninitializeExternalThreadEndpoint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@ThreadContext@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VThreadContext@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    static WindissectOpaque get_Current();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EventLoop@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VEventLoop@Dispatch@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_EventLoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCurrentThreadDispatchThread@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsCurrentThreadDispatchThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Messaging@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VMessageSession@Messaging@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Messaging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Registrar@ThreadContext@Dispatch@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VRegistrarClient@Registrar@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque get_Registrar();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThreadContext@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~ThreadContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@ThreadContext@Dispatch@CoreUI@Microsoft@@IEAAX_N000@Z
    void Init$(bool, bool, bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ThreadContext@Dispatch@CoreUI@Microsoft@@CA?AV?$SmartPtr@VThreadContext@Dispatch@CoreUI@Microsoft@@@CFlat@@_N000@Z
    static WindissectOpaque Create$(bool, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareKeepAlive@ThreadContext@Dispatch@CoreUI@Microsoft@@AEAAXPEAX@Z
    void PrepareKeepAlive(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowExceptionForIdentityTableResult@ThreadContext@Dispatch@CoreUI@Microsoft@@AEAAXW4MessagingResults@Messaging@34@@Z
    void ThrowExceptionForIdentityTableResult(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackErrorWorker@ThreadContext@Dispatch@CoreUI@Microsoft@@AEAAXPEAVObject@System@@@Z
    void TrackErrorWorker(::System::Object *);
};
} // namespace Microsoft::CoreUI::Dispatch
