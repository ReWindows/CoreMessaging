#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Identity {
class IdentityGroupManager {
public:
    class FreezeValidHandleMemory;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@IdentityGroupManager@Identity@CoreUI@Microsoft@@SAXPEAPEAV1234@@Z
    static void Create(::Microsoft::CoreUI::Identity::IdentityGroupManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupForID@IdentityGroupManager@Identity@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVIdentityTableView@234@I_NPEAPEAVIdentityGroup@234@@Z
    int GroupForID(::Microsoft::CoreUI::Identity::IdentityTableView *, unsigned int, bool, ::Microsoft::CoreUI::Identity::IdentityGroup * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IdentityGroupManager@Identity@CoreUI@Microsoft@@UEAA@XZ
    virtual ~IdentityGroupManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDestroy@IdentityGroupManager@Identity@CoreUI@Microsoft@@MEAAXXZ
    virtual void NotifyDestroy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeDeletedGroups@IdentityGroupManager@Identity@CoreUI@Microsoft@@AEAAXPEAVIdentityGroup@234@@Z
    void FreeDeletedGroups(::Microsoft::CoreUI::Identity::IdentityGroup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTableDestroyedForEntry@IdentityGroupManager@Identity@CoreUI@Microsoft@@CAXPEAXIPEAUIdentityGroupEntry@234@@Z
    static void NotifyTableDestroyedForEntry(void *, unsigned int, ::Microsoft::CoreUI::Identity::IdentityGroupEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGroupWorker@IdentityGroupManager@Identity@CoreUI@Microsoft@@AEAAXPEAUIdentityGroupEntry@234@@Z
    void RemoveGroupWorker(::Microsoft::CoreUI::Identity::IdentityGroupEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeMemoryDeallocationNL@IdentityGroupManager@Identity@CoreUI@Microsoft@@AEAAXXZ
    void ResumeMemoryDeallocationNL();
};
} // namespace Microsoft::CoreUI::Identity
