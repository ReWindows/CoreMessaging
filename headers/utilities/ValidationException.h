#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 9 member(s).
namespace Microsoft::CoreUI {
class ValidationException {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@ValidationException@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHResult@ValidationException@CoreUI@Microsoft@@SAHG@Z
    static int GetHResult(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowVirtual$@ValidationException@CoreUI@Microsoft@@UEAAXXZ
    virtual void ThrowVirtual$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ArgumentInvalid@ValidationException@CoreUI@Microsoft@@SA?AV?$SmartPtr@VValidationException@CoreUI@Microsoft@@@CFlat@@XZ
    static WindissectOpaque get_ArgumentInvalid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ArgumentNull@ValidationException@CoreUI@Microsoft@@SA?AV?$SmartPtr@VValidationException@CoreUI@Microsoft@@@CFlat@@XZ
    static WindissectOpaque get_ArgumentNull();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InvalidOperation@ValidationException@CoreUI@Microsoft@@SA?AV?$SmartPtr@VValidationException@CoreUI@Microsoft@@@CFlat@@XZ
    static WindissectOpaque get_InvalidOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotImplemented@ValidationException@CoreUI@Microsoft@@SA?AV?$SmartPtr@VValidationException@CoreUI@Microsoft@@@CFlat@@XZ
    static WindissectOpaque get_NotImplemented();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@ValidationException@CoreUI@Microsoft@@IEAAXGPEAVString@System@@@Z
    void Init$(unsigned short, ::System::String *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@ValidationException@CoreUI@Microsoft@@CA?AV?$SmartPtr@VValidationException@CoreUI@Microsoft@@@CFlat@@W4ValidationException$GeneralErrors@23@@Z
    static WindissectOpaque Create$(int$GeneralErrors);
};
} // namespace Microsoft::CoreUI
