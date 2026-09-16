#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Conversations {
class ItemGroup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ItemGroup@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ItemGroup@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ItemGroup@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItem@ItemGroup@Conversations@CoreUI@Microsoft@@QEAA_NIIW4ItemGroupOwner@234@U?$Ref@UIntPtr@System@@@CFlat@@U?$Ref@_N@7@@Z
    bool RemoveItem(unsigned int, unsigned int, int, WindissectOpaque, WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Conversations
