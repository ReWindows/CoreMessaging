#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
class RegistrarService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSingleton@RegistrarService@@SAXXZ
    static void CreateSingleton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RegistrarService@@AEAAXXZ
    void Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ServiceControlHandler@RegistrarService@@CAKKKPEAX0@Z
    static unsigned long ServiceControlHandler(unsigned long, unsigned long, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@RegistrarService@@EEAAXXZ
    virtual void Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateServiceStatus@RegistrarService@@AEAAXKKK@Z
    void UpdateServiceStatus(unsigned long, unsigned long, unsigned long);
};
