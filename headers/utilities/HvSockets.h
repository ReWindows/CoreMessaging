#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI {
class HvSockets {
public:
    class HvClientAdapter;
    class HvConnectedClient;
    class HvServerAdapter;
    class HvSocket;
    class IIoSenderHost;
    class IoReceiver;
    class IoSender;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HvSocket_InitializeHvFunctions@HvSockets@CoreUI@Microsoft@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    int HvSocket_InitializeHvFunctions(_RTL_RUN_ONCE *, void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HvSocket_LookupVmId@HvSockets@CoreUI@Microsoft@@YAXW4HvSocket$VmId@123@PEAU_GUID@@@Z
    void HvSocket_LookupVmId(int$VmId, _GUID *);
};
} // namespace Microsoft::CoreUI
