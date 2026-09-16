#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 12 member(s).
namespace Microsoft::CoreUI::Messaging {
class AlpcClientState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@AlpcClientState@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@AlpcClientState@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromHandle@AlpcClientState@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VAlpcClientState@Messaging@CoreUI@Microsoft@@@CFlat@@UIntPtr@System@@@Z
    static WindissectOpaque FromHandle(::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectionCompleted@AlpcClientState@Messaging@CoreUI@Microsoft@@QEAAXPEAVCrossProcessReceivePort$AlpcReceiveSource@234@UIntPtr@System@@@Z
    void OnConnectionCompleted(WindissectOpaque$AlpcReceiveSource *, ::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@AlpcClientState@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingAndWaitWorker@AlpcClientState@Messaging@CoreUI@Microsoft@@UEAA?AW4MessagingResults@234@PEAXIIU?$Ref@_N@CFlat@@@Z
    virtual int PingAndWaitWorker(void *, unsigned int, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostBuffersWorker@AlpcClientState@Messaging@CoreUI@Microsoft@@UEAAXPEAVBufferSet@Buffering@34@@Z
    virtual void PostBuffersWorker(::Microsoft::CoreUI::Buffering::BufferSet *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForPendingConnection@AlpcClientState@Messaging@CoreUI@Microsoft@@UEAA?AW4MessagingResults@234@I_N@Z
    virtual int WaitForPendingConnection(unsigned int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlpcClientState@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~AlpcClientState();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@AlpcClientState@Messaging@CoreUI@Microsoft@@IEAAXPEAVCrossProcessReceivePort$AlpcReceiveSource@234@_NW4RegistrarClientId@Registrar@34@II@Z
    void Init$(WindissectOpaque$AlpcReceiveSource *, bool, int, unsigned int, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteAsyncConnection@AlpcClientState@Messaging@CoreUI@Microsoft@@CAXPEAVObject@System@@@Z
    static void CompleteAsyncConnection(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlatformOnDisposed@AlpcClientState@Messaging@CoreUI@Microsoft@@AEAAXXZ
    void PlatformOnDisposed();
};
} // namespace Microsoft::CoreUI::Messaging
