#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 8 member(s).
namespace Microsoft::CoreUI::Messaging {
class AlpcSender {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@AlpcSender@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectionComplete@AlpcSender@Messaging@CoreUI@Microsoft@@QEAAX_N@Z
    void ConnectionComplete(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@AlpcSender@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingAndWait@AlpcSender@Messaging@CoreUI@Microsoft@@QEAA?AW4MessagingResults@234@PEAXIIU?$Ref@_N@CFlat@@@Z
    int PingAndWait(void *, unsigned int, unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostPendingBuffers@AlpcSender@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void PostPendingBuffers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetirePendingBufferSets@AlpcSender@Messaging@CoreUI@Microsoft@@QEAAXXZ
    void RetirePendingBufferSets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Adapter$FastReturn$@AlpcSender@Messaging@CoreUI@Microsoft@@QEAAPEAVAlpcSendMessageAdapter@234@XZ
    WindissectOpaque * get_Adapter$FastReturn$();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlpcSender@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~AlpcSender();
};
} // namespace Microsoft::CoreUI::Messaging
