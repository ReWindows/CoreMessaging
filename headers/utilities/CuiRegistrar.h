#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Registrar {
class CuiRegistrar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@CuiRegistrar@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@CuiRegistrar@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@CuiRegistrar@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Run@CuiRegistrar@Registrar@CoreUI@Microsoft@@SAXUWin32Handle@Support@34@0W4ServiceRunMode@234@UGuid@System@@2@Z
    static void Run(::Microsoft::CoreUI::Support::Win32Handle, ::Microsoft::CoreUI::Support::Win32Handle, int, ::System::Guid, ::System::Guid);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CuiRegistrar@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~CuiRegistrar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@CuiRegistrar@Registrar@CoreUI@Microsoft@@CA?AV?$SmartPtr@VCuiRegistrar@Registrar@CoreUI@Microsoft@@@CFlat@@XZ
    static WindissectOpaque Create$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShutdown@CuiRegistrar@Registrar@CoreUI@Microsoft@@AEAAXW4WaitStatus@Dispatch@34@UWin32Handle@Support@34@@Z
    void OnShutdown(int, ::Microsoft::CoreUI::Support::Win32Handle);
};
} // namespace Microsoft::CoreUI::Registrar
