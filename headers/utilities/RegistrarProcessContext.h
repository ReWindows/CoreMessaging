#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegistrarProcessContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RegistrarProcessContext@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RegistrarProcessContext@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RegistrarProcessContext@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimGroup@RegistrarProcessContext@Registrar@CoreUI@Microsoft@@QEAAXI_N@Z
    void ReclaimGroup(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveGroup@RegistrarProcessContext@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@U?$Ref@I@CFlat@@@Z
    int ReserveGroup(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistrarProcessContext@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~RegistrarProcessContext();
};
} // namespace Microsoft::CoreUI::Registrar
