#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegistrarSessionContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RegistrarSessionContext@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@RegistrarSessionContext@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VRegistrarSessionContext@Registrar@CoreUI@Microsoft@@@CFlat@@PEAVRegistrarPartitionContext@234@I@Z
    static WindissectOpaque Create$(::Microsoft::CoreUI::Registrar::RegistrarPartitionContext *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RegistrarSessionContext@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RegistrarSessionContext@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RegistrarSessionContext@Registrar@CoreUI@Microsoft@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@5@@Z
    RegistrarSessionContext(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistrarSessionContext@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~RegistrarSessionContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@RegistrarSessionContext@Registrar@CoreUI@Microsoft@@IEAAXPEAVRegistrarPartitionContext@234@I@Z
    void Init$(::Microsoft::CoreUI::Registrar::RegistrarPartitionContext *, unsigned int);
};
} // namespace Microsoft::CoreUI::Registrar
