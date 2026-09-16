#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 13 member(s).
namespace Microsoft::CoreUI::Identity {
class IdentityGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateHandle@IdentityGroup@Identity@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@UHIDENTITY@34@@Z
    int AllocateHandle(::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@IdentityGroup@Identity@CoreUI@Microsoft@@SAXPEAPEAV1234@@Z
    static void Create(::Microsoft::CoreUI::Identity::IdentityGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeHandle@IdentityGroup@Identity@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@II@Z
    int FreeHandle(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetNL@IdentityGroup@Identity@CoreUI@Microsoft@@QEAA_KUHIDENTITY@34@PEAIPEA_N2@Z
    uint64_t GetTargetNL(::Microsoft::CoreUI::HIDENTITY, unsigned int *, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetNL@IdentityGroup@Identity@CoreUI@Microsoft@@QEAA_K_KIIPEA_N1@Z
    uint64_t GetTargetNL(uint64_t, unsigned int, unsigned int, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandleData@IdentityGroup@Identity@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@UHIDENTITY@34@U?$FastInterfacePtr@VIIdentityObject@Identity@CoreUI@Microsoft@@@CFlat@@I@Z
    int SetHandleData(::Microsoft::CoreUI::HIDENTITY, WindissectOpaque, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IdentityGroup@Identity@CoreUI@Microsoft@@UEAA@XZ
    virtual ~IdentityGroup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumHandlesHandler@IdentityGroup@Identity@CoreUI@Microsoft@@CAXPEAXIPEAVIdentityEntry@234@@Z
    static void EnumHandlesHandler(void *, unsigned int, ::Microsoft::CoreUI::Identity::IdentityEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IdentityEntryFromHandle@IdentityGroup@Identity@CoreUI@Microsoft@@AEAA?AW4MessagingResults@Messaging@34@IIPEAPEAVIdentityEntry@234@@Z
    int IdentityEntryFromHandle(unsigned int, unsigned int, ::Microsoft::CoreUI::Identity::IdentityEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IdentityEntryFromHandle@IdentityGroup@Identity@CoreUI@Microsoft@@AEAA?AW4MessagingResults@Messaging@34@UHIDENTITY@34@PEAPEAVIdentityEntry@234@@Z
    int IdentityEntryFromHandle(::Microsoft::CoreUI::HIDENTITY, ::Microsoft::CoreUI::Identity::IdentityEntry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyGroupFreedForItem@IdentityGroup@Identity@CoreUI@Microsoft@@CAXPEAXIPEAVIdentityEntry@234@@Z
    static void NotifyGroupFreedForItem(void *, unsigned int, ::Microsoft::CoreUI::Identity::IdentityEntry *);
};
} // namespace Microsoft::CoreUI::Identity
