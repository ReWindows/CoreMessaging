#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI {
class Messaging {
public:
    class AlpcClientSender;
    class AlpcClientState;
    class AlpcClientThunk;
    class AlpcSendMessageAdapter;
    class AlpcSender;
    class AlpcServerThunk;
    class AnonymousStream;
    class CompositePort;
    class Connection;
    class CrossPartitionClientAdapter;
    class CrossPartitionConnectedClient;
    class CrossPartitionMessageAdapter;
    class CrossPartitionReverseConnectionPort;
    class CrossPartitionServerAdapter;
    class CrossProcessReceivePort;
    class CrossProcessReceivePortBase;
    class DeferredMessagePool;
    class EndpointValidationOptions;
    class InterconnectMessageAdapter;
    class LocalMessageAdapter;
    class LocalMessageEnumerator;
    class MessageAdapter;
    class MessageBatchFlusher;
    class MessageBufferEnumerator;
    class MessageEndpoint;
    class MessageInfo;
    class MessageSession;
    class MessageSessionPrivateWrapper;
    class MessageStream;
    class MessagingValidationException;
    class NTSecurity;
    class PendingCrossPartitionClient;
    class ReverseConnectionReceivePort;
    class ReverseConnectionReceivePortBase;
    class SenderInfo;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageSession_AdapterCleanupCallback@Messaging@CoreUI@Microsoft@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    void MessageSession_AdapterCleanupCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageSession_DeferredReleaseCallback@Messaging@CoreUI@Microsoft@@YAXPEAX@Z
    void MessageSession_DeferredReleaseCallback(void *);
};
} // namespace Microsoft::CoreUI
