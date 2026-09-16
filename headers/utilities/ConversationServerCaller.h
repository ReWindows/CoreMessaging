#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Conversations {
class ConversationServerCaller {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientConnectionRequested@ConversationServerCaller@Conversations@CoreUI@Microsoft@@SAXPEAVMessageStream@Messaging@34@UHIDENTITY@34@11UGuid@System@@_K@Z
    static void ClientConnectionRequested(WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, ::Microsoft::CoreUI::HIDENTITY, ::Microsoft::CoreUI::HIDENTITY, ::System::Guid, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeItem@ConversationServerCaller@Conversations@CoreUI@Microsoft@@SAXPEAVMessageStream@Messaging@34@UHIDENTITY@34@UItemID@234@_N@Z
    static void FreeItem(WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, ::Microsoft::CoreUI::Conversations::ItemID, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemFreed@ConversationServerCaller@Conversations@CoreUI@Microsoft@@SAXPEAVMessageStream@Messaging@34@UHIDENTITY@34@UItemID@234@@Z
    static void ItemFreed(WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, ::Microsoft::CoreUI::Conversations::ItemID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeerDisconnected@ConversationServerCaller@Conversations@CoreUI@Microsoft@@SAXPEAVMessageStream@Messaging@34@UHIDENTITY@34@I@Z
    static void PeerDisconnected(WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveItem@ConversationServerCaller@Conversations@CoreUI@Microsoft@@SAXPEAVMessageStream@Messaging@34@UHIDENTITY@34@UItemID@234@@Z
    static void ReserveItem(WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, ::Microsoft::CoreUI::Conversations::ItemID);
};
} // namespace Microsoft::CoreUI::Conversations
