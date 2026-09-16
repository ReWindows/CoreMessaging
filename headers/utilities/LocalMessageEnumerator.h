#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 6 member(s).
namespace Microsoft::CoreUI::Messaging {
class LocalMessageEnumerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@LocalMessageEnumerator@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@LocalMessageEnumerator@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@LocalMessageEnumerator@Messaging@CoreUI@Microsoft@@QEAA_NXZ
    bool MoveNext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@LocalMessageEnumerator@Messaging@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LocalMessageEnumerator@Messaging@CoreUI@Microsoft@@QEAA@XZ
    ~LocalMessageEnumerator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@LocalMessageEnumerator@Messaging@CoreUI@Microsoft@@IEAAXPEAVMessageStream@234@@Z
    void Init$(WindissectOpaque *);
};
} // namespace Microsoft::CoreUI::Messaging
