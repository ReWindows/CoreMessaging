#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Registrar {
class AlpcServerAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@AlpcServerAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@AlpcServerAdapter@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VAlpcServerAdapter@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVString@System@@UIntPtr@8@U?$FastInterfacePtr@VIAlpcServerHost@Registrar@CoreUI@Microsoft@@@6@G@Z
    static WindissectOpaque Create$(::System::String *, ::System::IntPtr, WindissectOpaque, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@AlpcServerAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCapabilityCheck@AlpcServerAdapter@Registrar@CoreUI@Microsoft@@QEAA_NPEAVString@System@@@Z
    bool DoCapabilityCheck(::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GeneratePortName@AlpcServerAdapter@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEAVString@System@@@Z
    static WindissectOpaque GeneratePortName(::System::String *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPortSecurityDescriptor@AlpcServerAdapter@Registrar@CoreUI@Microsoft@@SAXPEAVString@System@@U?$Ref@UIntPtr@System@@@CFlat@@@Z
    static void GetPortSecurityDescriptor(::System::String *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@AlpcServerAdapter@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplyWithProtocolExceptionAndDiagnostics@AlpcServerAdapter@Registrar@CoreUI@Microsoft@@QEAAXPEAVProtocolExceptionWithDiagnostics@34@@Z
    void ReplyWithProtocolExceptionAndDiagnostics(::Microsoft::CoreUI::ProtocolExceptionWithDiagnostics *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlpcServerAdapter@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~AlpcServerAdapter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@AlpcServerAdapter@Registrar@CoreUI@Microsoft@@IEAAXPEAVString@System@@UIntPtr@6@U?$FastInterfacePtr@VIAlpcServerHost@Registrar@CoreUI@Microsoft@@@CFlat@@G@Z
    void Init$(::System::String *, ::System::IntPtr, WindissectOpaque, unsigned short);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePort@AlpcServerAdapter@Registrar@CoreUI@Microsoft@@AEAAXPEAVString@System@@UIntPtr@6@G@Z
    void CreatePort(::System::String *, ::System::IntPtr, unsigned short);
};
} // namespace Microsoft::CoreUI::Registrar
