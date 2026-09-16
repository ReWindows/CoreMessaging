#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 11 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegisteredConversationServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RegisteredConversationServer@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectPendingClient@RegisteredConversationServer@Registrar@CoreUI@Microsoft@@QEAA_NI@Z
    bool ConnectPendingClient(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@RegisteredConversationServer@Registrar@CoreUI@Microsoft@@SA?AW4MessagingResults@Messaging@34@UIntPtr@System@@PEAVRegisteredConversation@234@PEAVRegistrarThreadContext@234@URoutingInfo@34@UHIDENTITY@34@U?$Ref@V?$SmartPtr@VRegisteredConversationServer@Registrar@CoreUI@Microsoft@@@CFlat@@@CFlat@@@Z
    static int Create(::System::IntPtr, ::Microsoft::CoreUI::Registrar::RegisteredConversation *, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::Microsoft::CoreUI::RoutingInfo, ::Microsoft::CoreUI::HIDENTITY, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RegisteredConversationServer@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@RegisteredConversationServer@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClientConnection@RegisteredConversationServer@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VConversationClientConnectionInfo@Registrar@CoreUI@Microsoft@@@CFlat@@I@Z
    WindissectOpaque FindClientConnection(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPendingClientConnection@RegisteredConversationServer@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VConversationClientConnectionInfo@Registrar@CoreUI@Microsoft@@@CFlat@@I@Z
    WindissectOpaque FindPendingClientConnection(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAndDisposeClientConnection@RegisteredConversationServer@Registrar@CoreUI@Microsoft@@QEAAXPEAVConversationClientConnectionInfo@234@@Z
    void RemoveAndDisposeClientConnection(::Microsoft::CoreUI::Registrar::ConversationClientConnectionInfo *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegisteredConversationServer@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~RegisteredConversationServer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@RegisteredConversationServer@Registrar@CoreUI@Microsoft@@IEAAXUIntPtr@System@@PEAVRegisteredConversation@234@PEAVRegistrarThreadContext@234@UConversationPeerInfo@Conversations@34@@Z
    void Init$(::System::IntPtr, ::Microsoft::CoreUI::Registrar::RegisteredConversation *, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@RegisteredConversationServer@Registrar@CoreUI@Microsoft@@CA?AV?$SmartPtr@VRegisteredConversationServer@Registrar@CoreUI@Microsoft@@@CFlat@@UIntPtr@System@@PEAVRegisteredConversation@234@PEAVRegistrarThreadContext@234@UConversationPeerInfo@Conversations@34@@Z
    static WindissectOpaque Create$(::System::IntPtr, ::Microsoft::CoreUI::Registrar::RegisteredConversation *, ::Microsoft::CoreUI::Registrar::RegistrarThreadContext *, ::Microsoft::CoreUI::Conversations::ConversationPeerInfo);
};
} // namespace Microsoft::CoreUI::Registrar
