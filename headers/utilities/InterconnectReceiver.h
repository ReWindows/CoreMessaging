#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Threading {
class InterconnectReceiver {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@InterconnectReceiver@Threading@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@InterconnectReceiver@Threading@CoreUI@Microsoft@@SA?AV?$SmartPtr@VInterconnectReceiver@Threading@CoreUI@Microsoft@@@CFlat@@XZ
    static WindissectOpaque Create$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@InterconnectReceiver@Threading@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@InterconnectReceiver@Threading@CoreUI@Microsoft@@QEAAXIUWin32Handle@Support@34@@Z
    void Initialize(unsigned int, ::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@InterconnectReceiver@Threading@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@InterconnectReceiver@Threading@CoreUI@Microsoft@@AEAAXXZ
    void Disconnect();
};
} // namespace Microsoft::CoreUI::Threading
