#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 10 member(s).
namespace Microsoft::CoreUI::HvSockets {
class IoSender {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@IoSender@HvSockets@CoreUI@Microsoft@@QEAAXXZ
    void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@IoSender@HvSockets@CoreUI@Microsoft@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@IoSender@HvSockets@CoreUI@Microsoft@@QEAAXU?$FastInterfacePtr@VIIoSenderHost@HvSockets@CoreUI@Microsoft@@@CFlat@@@Z
    void Initialize(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IoSender@HvSockets@CoreUI@Microsoft@@QEAA@AEBU0123@@Z
    IoSender(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Send@IoSender@HvSockets@CoreUI@Microsoft@@QEAA_NPEAVBufferSet@Buffering@34@@Z
    bool Send(::Microsoft::CoreUI::Buffering::BufferSet *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IoSender@HvSockets@CoreUI@Microsoft@@QEAA@XZ
    ~IoSender();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWriteIoCompletion@IoSender@HvSockets@CoreUI@Microsoft@@AEAA_NU?$Ref@_N@CFlat@@@Z
    bool HandleWriteIoCompletion(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOverlapped@IoSender@HvSockets@CoreUI@Microsoft@@AEAAXXZ
    void InitializeOverlapped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSendIoPending@IoSender@HvSockets@CoreUI@Microsoft@@AEAAXW4WaitStatus@Dispatch@34@UWin32Handle@Support@34@@Z
    void OnSendIoPending(int, ::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartIoSend@IoSender@HvSockets@CoreUI@Microsoft@@AEAA_NXZ
    bool StartIoSend();
};
} // namespace Microsoft::CoreUI::HvSockets
