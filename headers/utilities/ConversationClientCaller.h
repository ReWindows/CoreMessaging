#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Conversations {
class ConversationClientCaller {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectionAccepted@ConversationClientCaller@Conversations@CoreUI@Microsoft@@SAXPEAVMessageStream@Messaging@34@UHIDENTITY@34@I@Z
    static void ConnectionAccepted(WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectionDenied@ConversationClientCaller@Conversations@CoreUI@Microsoft@@SAXPEAVMessageStream@Messaging@34@UHIDENTITY@34@IIPEAVString@System@@@Z
    static void ConnectionDenied(WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, unsigned int, unsigned int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeItem@ConversationClientCaller@Conversations@CoreUI@Microsoft@@SAXPEAVMessageStream@Messaging@34@UHIDENTITY@34@UItemID@234@_N@Z
    static void FreeItem(WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, ::Microsoft::CoreUI::Conversations::ItemID, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemFreed@ConversationClientCaller@Conversations@CoreUI@Microsoft@@SAXPEAVMessageStream@Messaging@34@UHIDENTITY@34@UItemID@234@@Z
    static void ItemFreed(WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, ::Microsoft::CoreUI::Conversations::ItemID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PeerDisconnected@ConversationClientCaller@Conversations@CoreUI@Microsoft@@SAXPEAVMessageStream@Messaging@34@UHIDENTITY@34@I@Z
    static void PeerDisconnected(WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, unsigned int);
};
} // namespace Microsoft::CoreUI::Conversations
