#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Identity {
class IdentityTable {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetNL@IdentityTable@Identity@CoreUI@Microsoft@@QEAA_KIUHIDENTITY@34@U?$Ref@_N@CFlat@@1@Z
    uint64_t GetTargetNL(unsigned int, ::Microsoft::CoreUI::HIDENTITY, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetNL@IdentityTable@Identity@CoreUI@Microsoft@@QEAA_KIUHIDENTITY@34@U?$Ref@I@CFlat@@U?$Ref@_N@7@2@Z
    uint64_t GetTargetNL(unsigned int, ::Microsoft::CoreUI::HIDENTITY, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IdentityTable@Identity@CoreUI@Microsoft@@QEAA@AEBU0123@@Z
    IdentityTable(::Microsoft::CoreUI::Identity::IdentityTable const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@IdentityTable@Identity@CoreUI@Microsoft@@QEAAXXZ
    void Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IdentityTable@Identity@CoreUI@Microsoft@@QEAA@XZ
    ~IdentityTable();
};
} // namespace Microsoft::CoreUI::Identity
