#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace Microsoft::CoreUI::Services {
class ThreadEndpointCaller {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LocalPingAndWait@ThreadEndpointCaller@Services@CoreUI@Microsoft@@SAXPEAVMessageSession@Messaging@34@UHENDPOINT@34@W4RegistrarClientId@Registrar@34@IUIntPtr@System@@IUWin32Handle@Support@34@@Z
    static void LocalPingAndWait(WindissectOpaque *, ::Microsoft::CoreUI::HENDPOINT, int, unsigned int, ::System::IntPtr, unsigned int, ::Microsoft::CoreUI::Support::Win32Handle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyHIDENTITYFreed@ThreadEndpointCaller@Services@CoreUI@Microsoft@@SAXPEAVMessageSession@Messaging@34@UHENDPOINT@34@URoutingInfo@34@@Z
    static void NotifyHIDENTITYFreed(WindissectOpaque *, ::Microsoft::CoreUI::HENDPOINT, ::Microsoft::CoreUI::RoutingInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLocalConnectionCreated@ThreadEndpointCaller@Services@CoreUI@Microsoft@@SAXPEAVMessageSession@Messaging@34@UHENDPOINT@34@W4RegistrarClientId@Registrar@34@III@Z
    static void NotifyLocalConnectionCreated(WindissectOpaque *, ::Microsoft::CoreUI::HENDPOINT, int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLocalConnectionDisposed@ThreadEndpointCaller@Services@CoreUI@Microsoft@@SAXPEAVMessageSession@Messaging@34@UHENDPOINT@34@W4RegistrarClientId@Registrar@34@I@Z
    static void NotifyLocalConnectionDisposed(WindissectOpaque *, ::Microsoft::CoreUI::HENDPOINT, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveHIDENTITY@ThreadEndpointCaller@Services@CoreUI@Microsoft@@SAXPEAVMessageSession@Messaging@34@UHENDPOINT@34@UHIDENTITY@34@@Z
    static void ReserveHIDENTITY(WindissectOpaque *, ::Microsoft::CoreUI::HENDPOINT, ::Microsoft::CoreUI::HIDENTITY);
};
} // namespace Microsoft::CoreUI::Services
