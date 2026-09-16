#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegisteredConversationClient {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RegisteredConversationClient@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@RegisteredConversationClient@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VRegisteredConversationClient@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVRegisteredConversation@234@PEAVRegistrarThreadContext@234@UIntPtr@System@@2IPEAVEagerConversationClientSettings@234@@Z
    static WindissectOpaque Create$(::Microsoft::CoreUI::Registrar::RegisteredConversation *, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::System::IntPtr, ::System::IntPtr, unsigned int, ::Microsoft::CoreUI::Registrar::EagerConversationClientSettings *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RegisteredConversationClient@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@RegisteredConversationClient@Registrar@CoreUI@Microsoft@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAndClearEagerSettings@RegisteredConversationClient@Registrar@CoreUI@Microsoft@@QEAA?AW4MessagingResults@Messaging@34@PEAVString@System@@W4ConversationItemOwner@34@W4ConversationServerStyle@34@W4ConversationConnectionMode@34@@Z
    int ValidateAndClearEagerSettings(::System::String *, int, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegisteredConversationClient@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~RegisteredConversationClient();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@RegisteredConversationClient@Registrar@CoreUI@Microsoft@@IEAAXPEAVRegisteredConversation@234@PEAVRegistrarThreadContext@234@UIntPtr@System@@2IPEAVEagerConversationClientSettings@234@@Z
    void Init$(::Microsoft::CoreUI::Registrar::RegisteredConversation *, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::System::IntPtr, ::System::IntPtr, unsigned int, ::Microsoft::CoreUI::Registrar::EagerConversationClientSettings *);
};
} // namespace Microsoft::CoreUI::Registrar
