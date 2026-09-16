#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 25 member(s).
class AlpcServerConnection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AlpcServerConnection@@UEAAXXZ
    virtual void AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ProcessIncoming@AlpcServerConnection@@UEAAXPEAUIAlpcServerConnectionHost@@PEA_N@Z
    virtual void Callback_ProcessIncoming(IAlpcServerConnectionHost *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@AlpcServerConnection@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitToSlurp@AlpcServerConnection@@UEAAXXZ
    virtual void CommitToSlurp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateServer@AlpcServerConnection@@SAJPEBUAlpcConnectionConfig@@PEAPEAUIAlpcServerConnection@@@Z
    static long CreateServer(AlpcConnectionConfig const *, IAlpcServerConnection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectClient@AlpcServerConnection@@UEAAJPEAUIAlpcServerConnectionHost@@K@Z
    virtual long DisconnectClient(IAlpcServerConnectionHost *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectClient@AlpcServerConnection@@UEAAJPEAUIAlpcServerConnectionHost@@PEAX@Z
    virtual long DisconnectClient(IAlpcServerConnectionHost *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCapabilityCheck@AlpcServerConnection@@UEAAJPEB_WPEA_N@Z
    virtual long DoCapabilityCheck(wchar_t const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateSlurp@AlpcServerConnection@@UEAA_NPEAUAlpcBuffer@@@Z
    virtual bool EvaluateSlurp(AlpcBuffer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWaitHandle@AlpcServerConnection@@UEAAPEAXXZ
    virtual void * GetWaitHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImpersonateCaller@AlpcServerConnection@@UEAAJXZ
    virtual long ImpersonateCaller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientDisconnected@AlpcServerConnection@@QEAAXPEAUIAlpcServerConnectionHost@@PEAUPortInfo@@@Z
    void OnClientDisconnected(IAlpcServerConnectionHost *, PortInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PendingPortCheck@AlpcServerConnection@@UEAA_NXZ
    virtual bool PendingPortCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingClientAndWait@AlpcServerConnection@@UEAAJPEAX0IIPEA_N1@Z
    virtual long PingClientAndWait(void *, void *, unsigned int, unsigned int, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostBuffersToClient@AlpcServerConnection@@UEAAJPEAXPEAPEAUAlpcBuffer@@G@Z
    virtual long PostBuffersToClient(void *, AlpcBuffer * *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostSynchronousCallResponse@AlpcServerConnection@@UEAAXPEAUAlpcBuffer@@@Z
    virtual void PostSynchronousCallResponse(AlpcBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QuerySessionID@AlpcServerConnection@@UEAAJAEAI@Z
    virtual long QuerySessionID(unsigned int &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AlpcServerConnection@@UEAAXXZ
    virtual void Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPendingPingResult@AlpcServerConnection@@UEAAJPEAXIPEA_N@Z
    virtual long SetPendingPingResult(void *, unsigned int, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlpcServerConnection@@UEAA@XZ
    virtual ~AlpcServerConnection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupConnectedClient@AlpcServerConnection@@AEAAXPEAUPortInfo@@_N@Z
    void CleanupConnectedClient(PortInfo *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClientToken@AlpcServerConnection@@AEAAJPEAPEAX@Z
    long GetClientToken(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleIncomingConnection@AlpcServerConnection@@AEAAXPEAUIAlpcServerConnectionHost@@PEAU_PORT_MESSAGE@@@Z
    void HandleIncomingConnection(IAlpcServerConnectionHost *, _PORT_MESSAGE *);
};
