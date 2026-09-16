#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 17 member(s).
namespace Cn {
class Context {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContext@Context@Cn@@SA?AV?$SmartPtr@VContext@Cn@@@CFlat@@XZ
    static WindissectOpaque CreateContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCurrent@Context@Cn@@SAPEAV12@PEAV12@@Z
    static ::Cn::Context * EnsureCurrent(::Cn::Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_GetFreeThreadedContext@Context@Cn@@SAXP6AXPEAV12@@ZPEAPEAV12@@Z
    static void NoContext_GetFreeThreadedContext(void ( *)(::Cn::Context *), ::Cn::Context * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_GetThreadContextOrNullAndLock@Context@Cn@@SAPEAV12@XZ
    static ::Cn::Context * NoContext_GetThreadContextOrNullAndLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoContext_NotifyReturn@Context@Cn@@QEAAXPEAX@Z
    void NoContext_NotifyReturn(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyUnhandledExternalExceptionNL@Context@Cn@@QEAAXPEAX@Z
    void NotifyUnhandledExternalExceptionNL(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownAdapters@Context@Cn@@QEAAXXZ
    void ShutdownAdapters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeContext@Context@Cn@@SAXPEAV12@@Z
    static void UninitializeContext(::Cn::Context *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Context@Cn@@UEAA@XZ
    virtual ~Context();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddContextNL@Context@Cn@@CAXPEAV12@@Z
    static void AddContextNL(::Cn::Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocAndInitializeContext@Context@Cn@@CAPEAV12@_N@Z
    static ::Cn::Context * AllocAndInitializeContext(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStage1@Context@Cn@@AEAAX_N@Z
    void CreateStage1(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@Context@Cn@@AEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDestroy@Context@Cn@@EEAAXXZ
    virtual void NotifyDestroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentContext@Context@Cn@@CAXPEAV12@@Z
    static void SetCurrentContext(::Cn::Context *);
};
} // namespace Cn
