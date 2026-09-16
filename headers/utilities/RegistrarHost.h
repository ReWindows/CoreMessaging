#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 8 member(s).
class RegistrarHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSingleton@RegistrarHost@@SAXW4ServiceRunMode@Registrar@CoreUI@Microsoft@@PEBU_GUID@@1@Z
    static void CreateSingleton(int, _GUID const *, _GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeSingleton@RegistrarHost@@SAXXZ
    static void FreeSingleton();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RegistrarHost@@IEAAXW4ServiceRunMode@Registrar@CoreUI@Microsoft@@PEBU_GUID@@1@Z
    void Initialize(int, _GUID const *, _GUID const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistrarHost@@MEAA@XZ
    virtual ~RegistrarHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegistrarThreadProc@RegistrarHost@@CAKPEAX@Z
    static unsigned long RegistrarThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@RegistrarHost@@EEAAXXZ
    virtual void Uninitialize();
};
