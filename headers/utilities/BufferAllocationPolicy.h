#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Buffering {
class BufferAllocationPolicy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@BufferAllocationPolicy@Buffering@CoreUI@Microsoft@@SA?AV?$SmartPtr@VBufferAllocationPolicy@Buffering@CoreUI@Microsoft@@@CFlat@@PEAV?$Array$2@UBufferPolicyEntry@Buffering@CoreUI@Microsoft@@$00@6@IIII_NI@Z
    static WindissectOpaque Create$(::CFlat::Array$2<::Microsoft::CoreUI::Buffering::BufferPolicyEntry, 1> *, unsigned int, unsigned int, unsigned int, unsigned int, bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@BufferAllocationPolicy@Buffering@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
};
} // namespace Microsoft::CoreUI::Buffering
