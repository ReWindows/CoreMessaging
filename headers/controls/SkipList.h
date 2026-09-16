#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 15 member(s).
namespace Microsoft::CoreUI::Support {
class SkipList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearReferenceFields$@SkipList@Support@CoreUI@Microsoft@@UEAAXXZ
    virtual void ClearReferenceFields$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@SkipList@Support@CoreUI@Microsoft@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDispose@SkipList@Support@CoreUI@Microsoft@@UEAAXXZ
    virtual void OnDispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@SkipList@Support@CoreUI@Microsoft@@QEAA_NPEAVObject@System@@@Z
    bool Remove(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFirstItem@SkipList@Support@CoreUI@Microsoft@@QEAA_NXZ
    bool RemoveFirstItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FirstItem$FastReturn$@SkipList@Support@CoreUI@Microsoft@@QEAAPEAVObject@System@@XZ
    ::System::Object * get_FirstItem$FastReturn$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEmpty@SkipList@Support@CoreUI@Microsoft@@QEAA_NXZ
    bool get_IsEmpty();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SkipList@Support@CoreUI@Microsoft@@QEAA@XZ
    ~SkipList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@SkipList@Support@CoreUI@Microsoft@@IEAAXU?$FastInterfacePtr@V?$IComparer$1@V?$SmartPtr@VObject@System@@@CFlat@@@Generic@Collections@System@@@CFlat@@W4SkipMode@234@PEAVRandom@System@@_N@Z
    void Init$(WindissectOpaque, int, ::System::Random *, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseNodeHeight@SkipList@Support@CoreUI@Microsoft@@AEAAHXZ
    int ChooseNodeHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareValues@SkipList@Support@CoreUI@Microsoft@@AEAAHPEAVObject@System@@0@Z
    int CompareValues(::System::Object *, ::System::Object *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultRandomNumberGenerator@SkipList@Support@CoreUI@Microsoft@@CA?AV?$SmartPtr@VRandom@System@@@CFlat@@XZ
    static WindissectOpaque GetDefaultRandomNumberGenerator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareSearchUpdateVector@SkipList@Support@CoreUI@Microsoft@@AEAAHPEAVObject@System@@W4SkipList$SearchMode@234@@Z
    int PrepareSearchUpdateVector(::System::Object *, int$SearchMode);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeArrays@SkipList@Support@CoreUI@Microsoft@@AEAAXH@Z
    void ResizeArrays(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimListHeight@SkipList@Support@CoreUI@Microsoft@@AEAAXXZ
    void TrimListHeight();
};
} // namespace Microsoft::CoreUI::Support
