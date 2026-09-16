#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 22 member(s).
class AlpcClientConnection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AlpcClientConnection@@UEAAXXZ
    virtual void AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_ProcessIncoming@AlpcClientConnection@@UEAAXPEAUIAlpcClientConnectionHost@@PEA_N@Z
    virtual void Callback_ProcessIncoming(IAlpcClientConnectionHost *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@AlpcClientConnection@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitToSlurp@AlpcClientConnection@@UEAAXXZ
    virtual void CommitToSlurp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToServer@AlpcClientConnection@@SAJPEBUAlpcConnectionConfig@@PEAX_NKAEBUConnectionParams@@PEAPEAUIAlpcClientConnection@@@Z
    static long ConnectToServer(AlpcConnectionConfig const *, void *, bool, unsigned long, ConnectionParams const &, IAlpcClientConnection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateSlurp@AlpcClientConnection@@UEAA_NPEAUAlpcBuffer@@@Z
    virtual bool EvaluateSlurp(AlpcBuffer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServerProcessID@AlpcClientConnection@@UEAAJPEAK@Z
    virtual long GetServerProcessID(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWaitHandle@AlpcClientConnection@@UEAAPEAXXZ
    virtual void * GetWaitHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSynchronousReply@AlpcClientConnection@@UEAAJPEAUIAlpcClientConnectionHost@@PEAUAlpcBuffer@@@Z
    virtual long HandleSynchronousReply(IAlpcClientConnectionHost *, AlpcBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImpersonateCaller@AlpcClientConnection@@UEAAJXZ
    virtual long ImpersonateCaller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectionComplete@AlpcClientConnection@@QEAAXPEAUIAlpcClientConnectionHost@@_NPEAU_PORT_MESSAGE@@@Z
    void OnConnectionComplete(IAlpcClientConnectionHost *, bool, _PORT_MESSAGE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServerDisconnected@AlpcClientConnection@@QEAAXPEAUIAlpcClientConnectionHost@@@Z
    void OnServerDisconnected(IAlpcClientConnectionHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PendingPortCheck@AlpcClientConnection@@UEAA_NXZ
    virtual bool PendingPortCheck();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingAndWait@AlpcClientConnection@@UEAAJPEAXIIPEA_N1@Z
    virtual long PingAndWait(void *, unsigned int, unsigned int, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostBuffers@AlpcClientConnection@@UEAAJPEAPEAUAlpcBuffer@@G@Z
    virtual long PostBuffers(AlpcBuffer * *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AlpcClientConnection@@UEAAXXZ
    virtual void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendBufferWithReply@AlpcClientConnection@@UEAAJPEAUIAlpcClientConnectionHost@@PEAUAlpcBuffer@@K@Z
    virtual long SendBufferWithReply(IAlpcClientConnectionHost *, AlpcBuffer *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPendingPingResult@AlpcClientConnection@@UEAAJPEAXIPEA_N@Z
    virtual long SetPendingPingResult(void *, unsigned int, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlpcClientConnection@@UEAA@XZ
    virtual ~AlpcClientConnection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClientPort@AlpcClientConnection@@AEAAJPEAU_OBJECT_ATTRIBUTES@@0PEAU_ALPC_PORT_ATTRIBUTES@@PEAX_NKAEBUConnectionParams@@PEAPEAX@Z
    long CreateClientPort(_OBJECT_ATTRIBUTES *, _OBJECT_ATTRIBUTES *, _ALPC_PORT_ATTRIBUTES *, void *, bool, unsigned long, ConnectionParams const &, void * *);
};
