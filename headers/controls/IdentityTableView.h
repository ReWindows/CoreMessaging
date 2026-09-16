#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 12 member(s).
namespace Microsoft::CoreUI::Identity {
class IdentityTableView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateHandle@IdentityTableView@Identity@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@UHIDENTITY@34@@Z
    int AllocateHandle(::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateThunkHandle@IdentityTableView@Identity@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@UHIDENTITY@34@_K@Z
    int AllocateThunkHandle(::Microsoft::CoreUI::HIDENTITY, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@IdentityTableView@Identity@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearThunkTarget@IdentityTableView@Identity@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@UHIDENTITY@34@@Z
    int ClearThunkTarget(::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@IdentityTableView@Identity@CoreUI@Microsoft@@SA?AV?$SmartPtr@VIdentityTableView@Identity@CoreUI@Microsoft@@@CFlat@@IUIdentityTable@234@@Z
    static WindissectOpaque Create$(unsigned int, ::Microsoft::CoreUI::Identity::IdentityTable);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@IdentityTableView@Identity@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeGroup@IdentityTableView@Identity@CoreUI@Microsoft@@QEAAXI@Z
    void FreeGroup(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeHandle@IdentityTableView@Identity@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@UHIDENTITY@34@@Z
    int FreeHandle(::Microsoft::CoreUI::HIDENTITY);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleData@IdentityTableView@Identity@CoreUI@Microsoft@@QEAA?AU?$InterfacePtr@VIIdentityObject@Identity@CoreUI@Microsoft@@@CFlat@@UHIDENTITY@34@@Z
    WindissectOpaque GetHandleData(::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@IdentityTableView@Identity@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveGroup@IdentityTableView@Identity@CoreUI@Microsoft@@QEAAXI@Z
    void ReserveGroup(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandleData@IdentityTableView@Identity@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@UHIDENTITY@34@U?$FastInterfacePtr@VIIdentityObject@Identity@CoreUI@Microsoft@@@CFlat@@I@Z
    int SetHandleData(::Microsoft::CoreUI::HIDENTITY, WindissectOpaque, unsigned int);
};
} // namespace Microsoft::CoreUI::Identity
