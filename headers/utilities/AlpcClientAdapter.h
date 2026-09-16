#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 10 member(s).
namespace Microsoft::CoreUI::Registrar {
class AlpcClientAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ProcessIncoming@AlpcClientAdapter@Registrar@CoreUI@Microsoft@@QEAAXW4WaitStatus@Dispatch@34@UWin32Handle@Support@34@@Z
    void Callback_ProcessIncoming(int, ::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@AlpcClientAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@AlpcClientAdapter@Registrar@CoreUI@Microsoft@@SAHPEAVString@System@@U?$FastInterfacePtr@VIAlpcClientHost@Registrar@CoreUI@Microsoft@@@CFlat@@_KGU?$Ref@V?$SmartPtr@VAlpcClientAdapter@Registrar@CoreUI@Microsoft@@@CFlat@@@8@@Z
    static int Connect(::System::String *, WindissectOpaque, uint64_t, unsigned short, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@AlpcClientAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWaitRegistered@AlpcClientAdapter@Registrar@CoreUI@Microsoft@@QEAAXXZ
    void EnsureWaitRegistered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@AlpcClientAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@AlpcClientAdapter@Registrar@CoreUI@Microsoft@@QEAAXXZ
    void Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlpcClientAdapter@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~AlpcClientAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@AlpcClientAdapter@Registrar@CoreUI@Microsoft@@CA?AV?$SmartPtr@VAlpcClientAdapter@Registrar@CoreUI@Microsoft@@@CFlat@@U?$FastInterfacePtr@VIAlpcClientHost@Registrar@CoreUI@Microsoft@@@6@@Z
    static WindissectOpaque Create$(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePort@AlpcClientAdapter@Registrar@CoreUI@Microsoft@@AEAAHPEAVString@System@@_KG@Z
    int CreatePort(::System::String *, uint64_t, unsigned short);
};
} // namespace Microsoft::CoreUI::Registrar
