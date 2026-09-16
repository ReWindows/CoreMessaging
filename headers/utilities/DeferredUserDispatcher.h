#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Dispatch {
class DeferredUserDispatcher {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DeferredUserDispatcher@Dispatch@CoreUI@Microsoft@@CAPEAV1234@XZ
    static WindissectOpaque * Create();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredScheduleDispatchCallback@DeferredUserDispatcher@Dispatch@CoreUI@Microsoft@@CAXPEAX@Z
    static void DeferredScheduleDispatchCallback(void *);
};
} // namespace Microsoft::CoreUI::Dispatch
