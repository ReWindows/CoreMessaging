#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Messaging {
class MessageBufferEnumerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@MessageBufferEnumerator@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VMessageBufferEnumerator@Messaging@CoreUI@Microsoft@@@CFlat@@XZ
    static WindissectOpaque Create$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@MessageBufferEnumerator@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@MessageBufferEnumerator@Messaging@CoreUI@Microsoft@@QEAA_NXZ
    bool MoveNext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@MessageBufferEnumerator@Messaging@CoreUI@Microsoft@@QEAA?AUBufferInfo@Support@34@XZ
    ::Microsoft::CoreUI::Support::BufferInfo get_Current();
};
} // namespace Microsoft::CoreUI::Messaging
