#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 10 member(s).
namespace Microsoft::CoreUI::Messaging {
class MessagingValidationException {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@MessagingValidationException@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromResult@MessagingValidationException@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VException@System@@@CFlat@@W4MessagingResults@234@@Z
    static WindissectOpaque FromResult(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromResult@MessagingValidationException@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VException@System@@@CFlat@@W4MessagingResults@234@_N@Z
    static WindissectOpaque FromResult(int, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MessagingValidationException@Messaging@CoreUI@Microsoft@@QEAA@PEBUObjectTypeId@CFlat@@UConstructorTagType@5@@Z
    MessagingValidationException(::CFlat::ObjectTypeId const *, ::CFlat::ConstructorTagType);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThrowVirtual$@MessagingValidationException@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ThrowVirtual$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CannotImpersonate@MessagingValidationException@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VException@System@@@CFlat@@XZ
    static WindissectOpaque get_CannotImpersonate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IncorrectThread@MessagingValidationException@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VException@System@@@CFlat@@XZ
    static WindissectOpaque get_IncorrectThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InvalidDestination@MessagingValidationException@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VException@System@@@CFlat@@XZ
    static WindissectOpaque get_InvalidDestination();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InvalidHandle@MessagingValidationException@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VException@System@@@CFlat@@XZ
    static WindissectOpaque get_InvalidHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotInDispatchLoop@MessagingValidationException@Messaging@CoreUI@Microsoft@@SA?AV?$SmartPtr@VException@System@@@CFlat@@XZ
    static WindissectOpaque get_NotInDispatchLoop();
};
} // namespace Microsoft::CoreUI::Messaging
