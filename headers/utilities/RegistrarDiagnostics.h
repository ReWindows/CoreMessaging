#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegistrarDiagnostics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RegistrarDiagnostics@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@RegistrarDiagnostics@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VRegistrarDiagnostics@Registrar@CoreUI@Microsoft@@@CFlat@@I@Z
    static WindissectOpaque Create$(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RegistrarDiagnostics@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Log@RegistrarDiagnostics@Registrar@CoreUI@Microsoft@@QEAAXPEAVString@System@@@Z
    void Log(::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveString@RegistrarDiagnostics@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    WindissectOpaque RemoveString();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@RegistrarDiagnostics@Registrar@CoreUI@Microsoft@@IEAAXI@Z
    void Init$(unsigned int);
};
} // namespace Microsoft::CoreUI::Registrar
