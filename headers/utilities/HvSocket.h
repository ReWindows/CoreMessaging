#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::HvSockets {
class HvSocket {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@HvSocket@HvSockets@CoreUI@Microsoft@@QEAAXXZ
    void Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectEx@HvSocket@HvSockets@CoreUI@Microsoft@@QEAA_NW4HvSocket$VmId@234@PEAUGuid@System@@PEAXUWin32Event@Support@34@U?$Ref@_N@CFlat@@@Z
    bool ConnectEx(int$VmId, ::System::Guid *, void *, ::Microsoft::CoreUI::Support::Win32Event, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@HvSocket@HvSockets@CoreUI@Microsoft@@SA?AU1234@_N@Z
    static WindissectOpaque Create(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAcceptExClientVmId@HvSocket@HvSockets@CoreUI@Microsoft@@SAXPEAXIU?$Ref@UGuid@System@@@CFlat@@@Z
    static void GetAcceptExClientVmId(void *, unsigned int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIoResult@HvSocket@HvSockets@CoreUI@Microsoft@@QEAA_NPEAX_NU?$Ref@I@CFlat@@@Z
    bool GetIoResult(void *, bool, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeWinSockets@HvSocket@HvSockets@CoreUI@Microsoft@@SAXXZ
    static void InitializeWinSockets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendSynchronous@HvSocket@HvSockets@CoreUI@Microsoft@@QEAAXUWin32Event@Support@34@PEAXI@Z
    void SendSynchronous(::Microsoft::CoreUI::Support::Win32Event, void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeWinSockets@HvSocket@HvSockets@CoreUI@Microsoft@@SAXXZ
    static void UninitializeWinSockets();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAsyncOperation@HvSocket@HvSockets@CoreUI@Microsoft@@AEAA_N_NPEAXI1UWin32Event@Support@34@IU?$Ref@_N@CFlat@@@Z
    bool StartAsyncOperation(bool, void *, unsigned int, void *, ::Microsoft::CoreUI::Support::Win32Event, unsigned int, WindissectOpaque);
};
} // namespace Microsoft::CoreUI::HvSockets
