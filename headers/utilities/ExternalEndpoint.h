#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 8 member(s).
namespace Microsoft::CoreUI {
class ExternalEndpoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Callback_OnMessageCore@ExternalEndpoint@CoreUI@Microsoft@@UEAAXUBufferInfo@Support@23@@Z
    virtual void Callback_OnMessageCore(::Microsoft::CoreUI::Support::BufferInfo);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@ExternalEndpoint@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ExternalEndpoint@CoreUI@Microsoft@@SA?AV?$SmartPtr@VExternalEndpoint@CoreUI@Microsoft@@@CFlat@@PEAVObject@System@@PEAVThreadContext@Dispatch@23@PEAVExportEndpointHandler@23@PEAVCrossProcessReceivePortBase@Messaging@23@@Z
    static WindissectOpaque Create$(::System::Object *, WindissectOpaque *, ::Microsoft::CoreUI::ExportEndpointHandler *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ExternalEndpoint@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@ExternalEndpoint@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallbackContext@ExternalEndpoint@CoreUI@Microsoft@@QEAA?AUIntPtr@System@@XZ
    ::System::IntPtr get_CallbackContext();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExternalEndpoint@CoreUI@Microsoft@@QEAA@XZ
    ~ExternalEndpoint();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@ExternalEndpoint@CoreUI@Microsoft@@IEAAXPEAVObject@System@@PEAVThreadContext@Dispatch@23@PEAVExportEndpointHandler@23@PEAVCrossProcessReceivePortBase@Messaging@23@UHIDENTITY@23@@Z
    void Init$(::System::Object *, WindissectOpaque *, ::Microsoft::CoreUI::ExportEndpointHandler *, WindissectOpaque *, ::Microsoft::CoreUI::HIDENTITY);
};
} // namespace Microsoft::CoreUI
