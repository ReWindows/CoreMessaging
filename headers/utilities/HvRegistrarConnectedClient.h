#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Registrar {
class HvRegistrarConnectedClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@HvRegistrarConnectedClient@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@HvRegistrarConnectedClient@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@HvRegistrarConnectedClient@Registrar@CoreUI@Microsoft@@QEAAXXZ
    void Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@HvRegistrarConnectedClient@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendInPlace@HvRegistrarConnectedClient@Registrar@CoreUI@Microsoft@@QEAAPEAXI@Z
    void * SendInPlace(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HvRegistrarConnectedClient@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~HvRegistrarConnectedClient();
};
} // namespace Microsoft::CoreUI::Registrar
