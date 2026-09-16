#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegistrarThreadContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToRegisteredPorts@RegistrarThreadContext@Registrar@CoreUI@Microsoft@@QEAAXUGuid@System@@PEAVString@6@0@Z
    void AddToRegisteredPorts(::System::Guid, ::System::String *, ::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@RegistrarThreadContext@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VRegistrarThreadContext@Registrar@CoreUI@Microsoft@@@CFlat@@W4RegistrarClientCategory@234@I@Z
    static WindissectOpaque Create$(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RegistrarThreadContext@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRegisteredPort@RegistrarThreadContext@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VRegisteredPort@Registrar@CoreUI@Microsoft@@@CFlat@@UGuid@System@@@Z
    WindissectOpaque FindRegisteredPort(::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromRegisteredPorts@RegistrarThreadContext@Registrar@CoreUI@Microsoft@@QEAA_NUGuid@System@@@Z
    bool RemoveFromRegisteredPorts(::System::Guid);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistrarThreadContext@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~RegistrarThreadContext();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOfRegisteredPort@RegistrarThreadContext@Registrar@CoreUI@Microsoft@@AEAAHUGuid@System@@@Z
    int IndexOfRegisteredPort(::System::Guid);
};
} // namespace Microsoft::CoreUI::Registrar
