#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 10 member(s).
namespace System::Text {
class StringBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@StringBuilder@Text@System@@QEAA?AV?$SmartPtr@VStringBuilder@Text@System@@@CFlat@@PEAVString@3@@Z
    WindissectOpaque Append(::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@StringBuilder@Text@System@@QEAA?AV?$SmartPtr@VStringBuilder@Text@System@@@CFlat@@_S@Z
    WindissectOpaque Append(char16_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@StringBuilder@Text@System@@QEAA?AV?$SmartPtr@VStringBuilder@Text@System@@@CFlat@@PEAVString@3@HH@Z
    WindissectOpaque Append(::System::String *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@StringBuilder@Text@System@@SA?AV?$SmartPtr@VStringBuilder@Text@System@@@CFlat@@XZ
    static WindissectOpaque Create$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@StringBuilder@Text@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@StringBuilder@Text@System@@QEAA?AV?$SmartPtr@VStringBuilder@Text@System@@@CFlat@@HPEAVString@3@@Z
    WindissectOpaque Insert(int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@StringBuilder@Text@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque ToString();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCapacityForAppend@StringBuilder@Text@System@@AEAAXH@Z
    void EnsureCapacityForAppend(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@StringBuilder@Text@System@@AEAAXHH@Z
    void Init$(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SplitForInsert@StringBuilder@Text@System@@AEAAXHH@Z
    void SplitForInsert(int, int);
};
} // namespace System::Text
