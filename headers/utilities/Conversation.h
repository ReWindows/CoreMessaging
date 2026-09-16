#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 37 member(s).
namespace Microsoft::CoreUI::Conversations {
class Conversation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_AttachPeer@Conversation@Conversations@CoreUI@Microsoft@@QEAAXPEAVConversationPeer@234@@Z
    void Callback_AttachPeer(::Microsoft::CoreUI::Conversations::ConversationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Check@Conversation@Conversations@CoreUI@Microsoft@@QEAAXW4MessagingResults@Messaging@34@@Z
    void Check(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpAfterDepartedPeer@Conversation@Conversations@CoreUI@Microsoft@@QEAAXPEAVConversationPeer@234@_N11@Z
    void CleanUpAfterDepartedPeer(::Microsoft::CoreUI::Conversations::ConversationPeer *, bool, bool, bool);
    // Category: Method | Source: PE Export
    // Symbol: ?CleanupEndpoints@Conversation@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void CleanupEndpoints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@Conversation@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Conversation@Conversations@CoreUI@Microsoft@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@5@@Z
    Conversation(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeItemTable@Conversation@Conversations@CoreUI@Microsoft@@QEAAXII@Z
    void InitializeItemTable(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeUniqueID@Conversation@Conversations@CoreUI@Microsoft@@QEAAX_K@Z
    void InitializeUniqueID(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertPeerAtHead@Conversation@Conversations@CoreUI@Microsoft@@QEAAXPEAVConversationPeer@234@@Z
    void InsertPeerAtHead(::Microsoft::CoreUI::Conversations::ConversationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@Conversation@Conversations@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPeerDisconnectedStatic@Conversation@Conversations@CoreUI@Microsoft@@SAX_KI@Z
    static void OnPeerDisconnectedStatic(uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SlowSearchForPeer$FastReturn$@Conversation@Conversations@CoreUI@Microsoft@@QEAAPEAVConversationPeer@234@I@Z
    ::Microsoft::CoreUI::Conversations::ConversationPeer * SlowSearchForPeer$FastReturn$(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StreamFromPeer@Conversation@Conversations@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VMessageStream@Messaging@CoreUI@Microsoft@@@CFlat@@PEAVConversationPeer@234@@Z
    WindissectOpaque StreamFromPeer(::Microsoft::CoreUI::Conversations::ConversationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetConversation@Conversation@Conversations@CoreUI@Microsoft@@SA_N_KU?$Ref@V?$SmartPtr@VConversation@Conversations@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    static bool TryGetConversation(uint64_t, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Verify@Conversation@Conversations@CoreUI@Microsoft@@QEAAXW4MessagingResults@Messaging@34@@Z
    void Verify(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSinglePersistentManualServer@Conversation@Conversations@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsSinglePersistentManualServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@Conversation@Conversations@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    WindissectOpaque get_Name();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Conversation@Conversations@CoreUI@Microsoft@@QEAA@XZ
    ~Conversation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@Conversation@Conversations@CoreUI@Microsoft@@IEAAXPEAVString@System@@UScopeID@Registrar@34@PEAVThreadContext@Dispatch@34@W4ConversationItemOwner@34@U?$FastInterfacePtr@VICallbackMessageConversationHost@CoreUI@Microsoft@@@CFlat@@@Z
    void Init$(::System::String *, ::Microsoft::CoreUI::Registrar::ScopeID, WindissectOpaque *, int, WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_CallOnConnectionDenied@Conversation@Conversations@CoreUI@Microsoft@@AEAA_NU?$FastInterfacePtr@VICallbackMessageConversationHost@CoreUI@Microsoft@@@CFlat@@IIPEAVString@System@@@Z
    bool Callback_CallOnConnectionDenied(WindissectOpaque, unsigned int, unsigned int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_CallOnPeerRequestsConnect@Conversation@Conversations@CoreUI@Microsoft@@AEAAXU?$FastInterfacePtr@VICallbackMessageConversationHost@CoreUI@Microsoft@@@CFlat@@IU?$Ref@I@6@U?$Ref@V?$SmartPtr@VString@System@@@CFlat@@@6@@Z
    void Callback_CallOnPeerRequestsConnect(WindissectOpaque, unsigned int, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_FlushItemDeletion@Conversation@Conversations@CoreUI@Microsoft@@AEAAXUItemID@234@I_N@Z
    void Callback_FlushItemDeletion(::Microsoft::CoreUI::Conversations::ItemID, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_IsPeerAllowedToConnect@Conversation@Conversations@CoreUI@Microsoft@@AEAA_NPEAVConversationPeer@234@@Z
    bool Callback_IsPeerAllowedToConnect(::Microsoft::CoreUI::Conversations::ConversationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredOnPeerDisconnected@Conversation@Conversations@CoreUI@Microsoft@@CAXPEAVObject@System@@@Z
    static void DeferredOnPeerDisconnected(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueReserveItem@Conversation@Conversations@CoreUI@Microsoft@@AEAAXPEAVConversationPeer@234@UItemID@234@@Z
    void EnqueueReserveItem(::Microsoft::CoreUI::Conversations::ConversationPeer *, ::Microsoft::CoreUI::Conversations::ItemID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageConversation_AllocateItemForPeerWithCustomID$@Conversation@Conversations@CoreUI@Microsoft@@AEAAXIIPEAX@Z
    void Microsoft_CoreUI_IExportMessageConversation_AllocateItemForPeerWithCustomID$(unsigned int, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageConversation_EnumerateItems$@Conversation@Conversations@CoreUI@Microsoft@@AEAAXI_N0PEAVConversationItemEnumProc@34@@Z
    void Microsoft_CoreUI_IExportMessageConversation_EnumerateItems$(unsigned int, bool, bool, ::Microsoft::CoreUI::ConversationItemEnumProc *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageConversation_ReserveCustomIDSpace$@Conversation@Conversations@CoreUI@Microsoft@@AEAAXIU?$Ref@UIDSpaceReservation@CoreUI@Microsoft@@@CFlat@@@Z
    void Microsoft_CoreUI_IExportMessageConversation_ReserveCustomIDSpace$(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Microsoft_CoreUI_IExportMessageConversation_SkipBatchingAndFlushNow$@Conversation@Conversations@CoreUI@Microsoft@@AEAAXI@Z
    void Microsoft_CoreUI_IExportMessageConversation_SkipBatchingAndFlushNow$(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAllIDsFreed@Conversation@Conversations@CoreUI@Microsoft@@AEAAXIW4ConversationItemOwner@34@_N@Z
    void NotifyAllIDsFreed(unsigned int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateItemAllocation@Conversation@Conversations@CoreUI@Microsoft@@AEAAXPEAVConversationPeer@234@UItemID@234@@Z
    void PropagateItemAllocation(::Microsoft::CoreUI::Conversations::ConversationPeer *, ::Microsoft::CoreUI::Conversations::ItemID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remote_ConnectionDenied@Conversation@Conversations@CoreUI@Microsoft@@AEAAXIIPEAVString@System@@@Z
    void Remote_ConnectionDenied(unsigned int, unsigned int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remote_FreeItem@Conversation@Conversations@CoreUI@Microsoft@@AEAAXUItemID@234@_N@Z
    void Remote_FreeItem(::Microsoft::CoreUI::Conversations::ItemID, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remote_ItemFreed@Conversation@Conversations@CoreUI@Microsoft@@AEAAXUItemID@234@@Z
    void Remote_ItemFreed(::Microsoft::CoreUI::Conversations::ItemID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remote_PeerDisconnected@Conversation@Conversations@CoreUI@Microsoft@@AEAAXI@Z
    void Remote_PeerDisconnected(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remote_ReserveItem@Conversation@Conversations@CoreUI@Microsoft@@AEAAXUItemID@234@@Z
    void Remote_ReserveItem(::Microsoft::CoreUI::Conversations::ItemID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForDispatch@Conversation@Conversations@CoreUI@Microsoft@@AEAAXXZ
    void WaitForDispatch();
};
} // namespace Microsoft::CoreUI::Conversations
