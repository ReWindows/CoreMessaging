#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 22 member(s).
namespace Microsoft::CoreUI::Conversations {
class ItemTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddItemWithCustomID@ItemTable@Conversations@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@IIIUIntPtr@System@@U?$Ref@V?$SmartPtr@VConversationPeer@Conversations@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    int AddItemWithCustomID(unsigned int, unsigned int, unsigned int, ::System::IntPtr, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateGroupsForPeer@ItemTable@Conversations@CoreUI@Microsoft@@QEAAXPEAVConversationPeer@234@@Z
    void AllocateGroupsForPeer(::Microsoft::CoreUI::Conversations::ConversationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanAccomodateCustomIDSpaceChange@ItemTable@Conversations@CoreUI@Microsoft@@QEAA_NIIIU?$Ref@UIDSpaceReservation@CoreUI@Microsoft@@@CFlat@@@Z
    bool CanAccomodateCustomIDSpaceChange(unsigned int, unsigned int, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ItemTable@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ItemTable@Conversations@CoreUI@Microsoft@@SA?AV?$SmartPtr@VItemTable@Conversations@CoreUI@Microsoft@@@CFlat@@PEAVConversation@234@I@Z
    static WindissectOpaque Create$(::Microsoft::CoreUI::Conversations::Conversation *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ItemTable@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteItemAcknowledged@ItemTable@Conversations@CoreUI@Microsoft@@QEAA_NUItemID@234@I@Z
    bool DeleteItemAcknowledged(::Microsoft::CoreUI::Conversations::ItemID, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteItemRemote@ItemTable@Conversations@CoreUI@Microsoft@@QEAA_NUItemID@234@IU?$Ref@V?$SmartPtr@VConversationPeer@Conversations@CoreUI@Microsoft@@@CFlat@@@CFlat@@U?$Ref@UIntPtr@System@@@7@U?$Ref@_N@7@@Z
    bool DeleteItemRemote(::Microsoft::CoreUI::Conversations::ItemID, unsigned int, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeGroupsForPeer@ItemTable@Conversations@CoreUI@Microsoft@@QEAAXPEAVConversationPeer@234@@Z
    void FreeGroupsForPeer(::Microsoft::CoreUI::Conversations::ConversationPeer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroup@ItemTable@Conversations@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VItemGroup@Conversations@CoreUI@Microsoft@@@CFlat@@IW4ConversationItemOwner@34@_N@Z
    WindissectOpaque GetGroup(unsigned int, int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@ItemTable@Conversations@CoreUI@Microsoft@@QEAA_NUItemID@234@U?$Ref@UIntPtr@System@@@CFlat@@@Z
    bool GetItem(::Microsoft::CoreUI::Conversations::ItemID, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ItemTable@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeerForID@ItemTable@Conversations@CoreUI@Microsoft@@QEAA_NIIU?$Ref@V?$SmartPtr@VConversationPeer@Conversations@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    bool PeerForID(unsigned int, unsigned int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItemData@ItemTable@Conversations@CoreUI@Microsoft@@QEAA_NUItemID@234@UIntPtr@System@@@Z
    bool SetItemData(::Microsoft::CoreUI::Conversations::ItemID, ::System::IntPtr);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetGroup@ItemTable@Conversations@CoreUI@Microsoft@@QEAA_NIW4ConversationItemOwner@34@_NU?$Ref@V?$SmartPtr@VItemGroup@Conversations@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    bool TryGetGroup(unsigned int, int, bool, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemTable@Conversations@CoreUI@Microsoft@@QEAA@XZ
    ~ItemTable();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@ItemTable@Conversations@CoreUI@Microsoft@@IEAAXPEAVConversation@234@I@Z
    void Init$(::Microsoft::CoreUI::Conversations::Conversation *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGroup@ItemTable@Conversations@CoreUI@Microsoft@@AEAAXPEAVItemGroup@234@IW4ConversationItemOwner@34@_N@Z
    void AddGroup(::Microsoft::CoreUI::Conversations::ItemGroup *, unsigned int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeGroup@ItemTable@Conversations@CoreUI@Microsoft@@AEAAXI_N@Z
    void FreeGroup(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupForGroupIndex@ItemTable@Conversations@CoreUI@Microsoft@@AEAA_NIU?$Ref@V?$SmartPtr@VItemGroup@Conversations@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    bool GroupForGroupIndex(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupForItem@ItemTable@Conversations@CoreUI@Microsoft@@AEAA_NUItemID@234@U?$Ref@V?$SmartPtr@VItemGroup@Conversations@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    bool GroupForItem(::Microsoft::CoreUI::Conversations::ItemID, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetLocalHubGroup@ItemTable@Conversations@CoreUI@Microsoft@@AEAA?AV?$SmartPtr@VItemGroup@Conversations@CoreUI@Microsoft@@@CFlat@@XZ
    WindissectOpaque TryGetLocalHubGroup();
};
} // namespace Microsoft::CoreUI::Conversations
