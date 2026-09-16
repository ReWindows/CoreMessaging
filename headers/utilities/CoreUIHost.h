#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 8 member(s).
class CoreUIHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallbackError@CoreUIHost@@UEAAXJPEAX@Z
    virtual void OnCallbackError(long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterInvalidContext@CoreUIHost@@UEAAXPEAX@Z
    virtual void OnEnterInvalidContext(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnterUninitializedContext@CoreUIHost@@UEAAXPEAJPEAX@Z
    virtual void OnEnterUninitializedContext(long *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvalidCallback@CoreUIHost@@UEAAXPEAX@Z
    virtual void OnInvalidCallback(void *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnProcessShutdownLeak@CoreUIHost@@UEAAXXZ
    virtual void OnProcessShutdownLeak();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThrowException@CoreUIHost@@UEAAXPEAVException@System@@@Z
    virtual void OnThrowException(::System::Exception *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThrowExceptionForHR@CoreUIHost@@UEAAXH@Z
    virtual void OnThrowExceptionForHR(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnhandledException@CoreUIHost@@UEAAXPEAVException@System@@JPEAJ@Z
    virtual void OnUnhandledException(::System::Exception *, long, long *);
};
