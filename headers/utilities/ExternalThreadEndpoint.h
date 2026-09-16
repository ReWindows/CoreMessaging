#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Microsoft::CoreUI::Services {
class ExternalThreadEndpoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ExternalThreadEndpoint@Services@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ExternalThreadEndpoint@Services@CoreUI@Microsoft@@SA?AV?$SmartPtr@VExternalThreadEndpoint@Services@CoreUI@Microsoft@@@CFlat@@PEAVObject@System@@PEAVThreadContext@Dispatch@34@UHIDENTITY@34@PEAVExportEndpointHandler@34@@Z
    static WindissectOpaque Create$(::System::Object *, WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY, ::Microsoft::CoreUI::ExportEndpointHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ExternalThreadEndpoint@Services@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ExternalThreadEndpoint@Services@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
};
} // namespace Microsoft::CoreUI::Services
