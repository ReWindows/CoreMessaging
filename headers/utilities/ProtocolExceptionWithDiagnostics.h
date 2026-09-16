#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI {
class ProtocolExceptionWithDiagnostics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ProtocolExceptionWithDiagnostics@CoreUI@Microsoft@@SA?AV?$SmartPtr@VProtocolExceptionWithDiagnostics@CoreUI@Microsoft@@@CFlat@@W4ProtocolError@23@PEAVRegistrarDiagnostics@Registrar@23@@Z
    static WindissectOpaque Create$(int, ::Microsoft::CoreUI::Registrar::RegistrarDiagnostics *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ProtocolExceptionWithDiagnostics@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowVirtual$@ProtocolExceptionWithDiagnostics@CoreUI@Microsoft@@UEAAXXZ
    virtual void ThrowVirtual$();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProtocolExceptionWithDiagnostics@CoreUI@Microsoft@@QEAA@XZ
    ~ProtocolExceptionWithDiagnostics();
};
} // namespace Microsoft::CoreUI
