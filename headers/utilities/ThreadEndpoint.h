#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI::Services {
class ThreadEndpoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnMessageCore@ThreadEndpoint@Services@CoreUI@Microsoft@@UEAAXUBufferInfo@Support@34@@Z
    virtual void Callback_OnMessageCore(::Microsoft::CoreUI::Support::BufferInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ThreadEndpoint@Services@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ThreadEndpoint@Services@CoreUI@Microsoft@@SA?AV?$SmartPtr@VThreadEndpoint@Services@CoreUI@Microsoft@@@CFlat@@PEAVObject@System@@PEAVThreadContext@Dispatch@34@UHIDENTITY@34@@Z
    static WindissectOpaque Create$(::System::Object *, WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ThreadEndpoint@Services@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendNotifyLocalConnectionCreated@ThreadEndpoint@Services@CoreUI@Microsoft@@SAXPEAVConnection@Messaging@34@@Z
    static void SendNotifyLocalConnectionCreated(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendNotifyLocalConnectionDisposed@ThreadEndpoint@Services@CoreUI@Microsoft@@SAXPEAVConnection@Messaging@34@@Z
    static void SendNotifyLocalConnectionDisposed(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalPingAndWait@ThreadEndpoint@Services@CoreUI@Microsoft@@AEAAXW4RegistrarClientId@Registrar@34@IUIntPtr@System@@IUWin32Handle@Support@34@@Z
    void LocalPingAndWait(int, unsigned int, ::System::IntPtr, unsigned int, ::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyHIDENTITYFreed@ThreadEndpoint@Services@CoreUI@Microsoft@@AEAAXURoutingInfo@34@@Z
    void NotifyHIDENTITYFreed(::Microsoft::CoreUI::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLocalConnectionCreated@ThreadEndpoint@Services@CoreUI@Microsoft@@AEAAXW4RegistrarClientId@Registrar@34@III@Z
    void NotifyLocalConnectionCreated(int, unsigned int, unsigned int, unsigned int);
};
} // namespace Microsoft::CoreUI::Services
