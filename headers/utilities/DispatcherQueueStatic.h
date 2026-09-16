#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace Windows::System {
class DispatcherQueueStatic {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DispatcherQueueStatic@System@Windows@@QEAA@XZ
    DispatcherQueueStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentThread@DispatcherQueueStatic@System@Windows@@UEAAJPEAPEAUIDispatcherQueue@23@@Z
    virtual long GetForCurrentThread(::Windows::System::IDispatcherQueue * *);
};
} // namespace Windows::System
