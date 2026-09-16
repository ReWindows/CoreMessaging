#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 25 member(s).
namespace Cn::Threading {
class InterconnectQueue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUserKey@InterconnectQueue@Threading@Cn@@SAXPEAVContext@3@I@Z
    static void AddUserKey(::Cn::Context *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ProcessNextItem@InterconnectQueue@Threading@Cn@@QEAA_NU?$FastInterfacePtr@VIInterconnectBufferHandler@Threading@Cn@@@CFlat@@W4DrainMode@23@@Z
    bool Callback_ProcessNextItem(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@InterconnectQueue@Threading@Cn@@SAXPEAVContext@3@@Z
    static void Disable(::Cn::Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropPendingAndDisableMemorySharing@InterconnectQueue@Threading@Cn@@SAXPEAVContext@3@U?$FastInterfacePtr@VIInterconnectBufferHandler@Threading@Cn@@@CFlat@@@Z
    static void DropPendingAndDisableMemorySharing(::Cn::Context *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enable@InterconnectQueue@Threading@Cn@@SAXPEAVContext@3@@Z
    static void Enable(::Cn::Context *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByThreadNL@InterconnectQueue@Threading@Cn@@SAXIPEAPEAV123@PEAPEAXPEAI@Z
    static void FindByThreadNL(unsigned int, ::Cn::Threading::InterconnectQueue * *, void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeClass@InterconnectQueue@Threading@Cn@@SAX_N@Z
    static void InitializeClass(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeHost@InterconnectQueue@Threading@Cn@@SAXPEAVContext@3@IP6AXPEAX@Z1PEAPEAV123@@Z
    static void InitializeHost(::Cn::Context *, unsigned int, void ( *)(void *), void *, ::Cn::Threading::InterconnectQueue * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InterconnectQueue@Threading@Cn@@QEAA@XZ
    InterconnectQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostItem_LockedByCaller@InterconnectQueue@Threading@Cn@@SA_NPEAV123@IPEAUInterconnectItem@23@HW4RegistrarClientId@Registrar@CoreUI@Microsoft@@IIIW4InterconnectBufferFlags@23@PEAW4923@@Z
    static bool PostItem_LockedByCaller(::Cn::Threading::InterconnectQueue *, unsigned int, ::Cn::Threading::InterconnectItem *, int, int, unsigned int, unsigned int, unsigned int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveUserKey@InterconnectQueue@Threading@Cn@@SAXI@Z
    static void RemoveUserKey(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InterconnectQueue@Threading@Cn@@UEAA@XZ
    virtual ~InterconnectQueue();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateEntry@InterconnectQueue@Threading@Cn@@CAPEAUQueueEntry@123@XZ
    static WindissectOpaque * AllocateEntry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateNoZero@InterconnectQueue@Threading@Cn@@CAPEAXH@Z
    static void * AllocateNoZero(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeEnabled@InterconnectQueue@Threading@Cn@@CAXPEAV123@PEAUUsingExclusiveLock@23@_N@Z
    static void ChangeEnabled(::Cn::Threading::InterconnectQueue *, ::Cn::Threading::UsingExclusiveLock *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear_NoLockByCaller@InterconnectQueue@Threading@Cn@@AEAAXU?$FastInterfacePtr@VIInterconnectBufferHandler@Threading@Cn@@@CFlat@@@Z
    void Clear_NoLockByCaller(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@InterconnectQueue@Threading@Cn@@CAPEAV123@AEAV?$SmartPtr@VProcessItem@Engine@Cn@@@CFlat@@@Z
    static ::Cn::Threading::InterconnectQueue * Create(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@InterconnectQueue@Threading@Cn@@AEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrainInterconnect@InterconnectQueue@Threading@Cn@@AEAAXXZ
    void DrainInterconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@InterconnectQueue@Threading@Cn@@CAXPEAXH@Z
    static void Free(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeEntries@InterconnectQueue@Threading@Cn@@CAXPEAUQueueEntry@123@@Z
    static void FreeEntries(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostReplyNL@InterconnectQueue@Threading@Cn@@CAXPEAV123@IW4RegistrarClientId@Registrar@CoreUI@Microsoft@@II@Z
    static void PostReplyNL(::Cn::Threading::InterconnectQueue *, unsigned int, int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessNextItemEpilog@InterconnectQueue@Threading@Cn@@AEAAXXZ
    void ProcessNextItemEpilog();
};
} // namespace Cn::Threading
