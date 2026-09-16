#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 7 member(s).
namespace Microsoft::CoreUI::Registrar {
class RegistrarPartitionContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@RegistrarPartitionContext@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@RegistrarPartitionContext@Registrar@CoreUI@Microsoft@@SA?AV?$SmartPtr@VRegistrarPartitionContext@Registrar@CoreUI@Microsoft@@@CFlat@@UGuid@System@@@Z
    static WindissectOpaque Create$(::System::Guid);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@RegistrarPartitionContext@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindThread@RegistrarPartitionContext@Registrar@CoreUI@Microsoft@@QEAA?AV?$SmartPtr@VRegistrarThreadContext@Registrar@CoreUI@Microsoft@@@CFlat@@I@Z
    WindissectOpaque FindThread(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@RegistrarPartitionContext@Registrar@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistrarPartitionContext@Registrar@CoreUI@Microsoft@@QEAA@XZ
    ~RegistrarPartitionContext();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@RegistrarPartitionContext@Registrar@CoreUI@Microsoft@@IEAAXUGuid@System@@@Z
    void Init$(::System::Guid);
};
} // namespace Microsoft::CoreUI::Registrar
