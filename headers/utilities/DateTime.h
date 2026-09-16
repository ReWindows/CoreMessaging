#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 4 member(s).
namespace System {
class DateTime {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromFileTimeUtc@DateTime@System@@SA?AU12@_J@Z
    static ::System::DateTime FromFileTimeUtc(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToFileTimeUtc@DateTime@System@@QEBA_JXZ
    int64_t ToFileTimeUtc() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UtcNow@DateTime@System@@SA?AU12@XZ
    static ::System::DateTime get_UtcNow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Addition$@DateTime@System@@CA?AU12@U12@UTimeSpan@2@@Z
    static ::System::DateTime op_Addition$(::System::DateTime, ::System::TimeSpan);
};
} // namespace System
