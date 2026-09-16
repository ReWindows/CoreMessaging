#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Registrar {
class EagerConversationClientSettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@EagerConversationClientSettings@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VEagerConversationClientSettings@Registrar@CoreUI@Microsoft@@@CFlat@@UEagerConversationConfiguration@234@W4ConversationConnectionMode@34@@Z
    static WindissectOpaque Create$(::Microsoft::CoreUI::Registrar::EagerConversationConfiguration, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@EagerConversationClientSettings@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
};
} // namespace Microsoft::CoreUI::Registrar
