#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 20 member(s).
namespace Microsoft::CoreUI::Dispatch {
class DeferredCallDispatcher {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnDispatch@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Callback_OnDispatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@SA?AV?$SmartPtr@VDeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@@CFlat@@PEAVDispatcher@234@@Z
    static WindissectOpaque Create$(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Post@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@QEAAXW4ExternalPriority@234@PEAVActionCallback@34@@Z
    void Post(int, ::Microsoft::CoreUI::ActionCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Post@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@QEAAXW4InternalPriority@234@PEAVWaitCollection@234@U?$Ref@UWakeRecord@Dispatch@CoreUI@Microsoft@@@CFlat@@@Z
    void Post(int, WindissectOpaque *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Post@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@QEAAXW4ExternalPriority@234@PEAV?$Action$2@V?$SmartPtr@VObject@System@@@CFlat@@_N@System@@PEAVObject@7@_N@Z
    void Post(int, ::System::Action$2<WindissectOpaque, bool> *, ::System::Object *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Post@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@QEAAXW4ExternalPriority@234@PEAV?$Action$1@V?$SmartPtr@VObject@System@@@CFlat@@@System@@PEAVObject@7@@Z
    void Post(int, ::System::Action$1<WindissectOpaque > *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Post@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@QEAAXW4InternalPriority@234@PEAV?$Action$2@V?$SmartPtr@VObject@System@@@CFlat@@I@System@@PEAVObject@7@I@Z
    void Post(int, ::System::Action$2<WindissectOpaque, unsigned int> *, ::System::Object *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Post@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@QEAAXW4ExternalPriority@234@PEAV?$Action$4@W4RegistrarClientId@Registrar@CoreUI@Microsoft@@III@System@@W4RegistrarClientId@Registrar@34@III@Z
    void Post(int, ::System::Action$4<int, unsigned int, unsigned int, unsigned int> *, int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Post@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@QEAAXW4ExternalPriority@234@PEAV?$Action$1@I@System@@I@Z
    void Post(int, ::System::Action$1<unsigned int> *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Post@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@QEAAXW4InternalPriority@234@PEAV?$Action$1@UWin32Handle@Support@CoreUI@Microsoft@@@System@@UWin32Handle@Support@34@@Z
    void Post(int, ::System::Action$1<::Microsoft::CoreUI::Support::Win32Handle> *, ::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Post@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@QEAAXW4InternalPriority@234@PEAV?$Action$2@II@System@@II@Z
    void Post(int, ::System::Action$2<unsigned int, unsigned int> *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@QEAAXXZ
    void Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@QEAA@XZ
    ~DeferredCallDispatcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGroup@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VDoubleListItem$FIFO@Support@CoreUI@Microsoft@@@CFlat@@W4InternalPriority@234@@Z
    WindissectOpaque EnsureGroup(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostItem@DeferredCallDispatcher@Dispatch@CoreUI@Microsoft@@AEAAXW4ExternalPriority@234@PEAVDeferredCall@234@@Z
    void PostItem(int, WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Dispatch
