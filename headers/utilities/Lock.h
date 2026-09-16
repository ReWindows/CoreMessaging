#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Cn::Engine {
class Lock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@Lock@Engine@Cn@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@Lock@Engine@Cn@@QEAAXXZ
    void Enter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@Lock@Engine@Cn@@QEAAXXZ
    void Leave();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Lock@Engine@Cn@@UEAA@XZ
    virtual ~Lock();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Lock@Engine@Cn@@CAXULockPriority@23@_NPEAPEAV123@@Z
    static void Create(::Cn::Engine::LockPriority, bool, ::Cn::Engine::Lock * *);
};
} // namespace Cn::Engine
