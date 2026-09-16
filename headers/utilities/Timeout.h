#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 12 member(s).
namespace Microsoft::CoreUI::Dispatch {
class Timeout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@Timeout@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@Timeout@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VTimeout@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVTimeoutManager@234@PEAVTimeoutHandler@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Timeout@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease@Timeout@Dispatch@CoreUI@Microsoft@@UEAA_N_NU?$Ref@UIntPtr@System@@@CFlat@@@Z
    virtual bool OnFinalRelease(bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAbsoluteDueTimeOnRepeat@Timeout@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void UpdateAbsoluteDueTimeOnRepeat();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TimerHandle@Timeout@Dispatch@CoreUI@Microsoft@@QEAA?AUWin32Handle@Support@34@XZ
    ::Microsoft::CoreUI::Support::Win32Handle get_TimerHandle();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Timeout@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~Timeout();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CFlat_IImplementsComInterface_QueryInterface$@Timeout@Dispatch@CoreUI@Microsoft@@IEAAPEAXU?$Ref@U_GUID@@@CFlat@@PEAVObject@System@@@Z
    void * CFlat_IImplementsComInterface_QueryInterface$(WindissectOpaque, ::System::Object *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageTimer_SetAbsolute$@Timeout@Dispatch@CoreUI@Microsoft@@AEAAXPEAUFILETIME@234@_J@Z
    void Microsoft_CoreUI_IExportMessageTimer_SetAbsolute$(WindissectOpaque *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWait@Timeout@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void RegisterWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWait@Timeout@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void UnregisterWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyEditable@Timeout@Dispatch@CoreUI@Microsoft@@AEAAXXZ
    void VerifyEditable();
};
} // namespace Microsoft::CoreUI::Dispatch
