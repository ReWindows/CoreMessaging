#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 34 member(s).
namespace System {
class String {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@String@System@@SAHPEAV12@0W4StringComparison@2@@Z
    static int Compare(::System::String *, ::System::String *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Concat@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEAV12@000@Z
    static WindissectOpaque Concat(::System::String *, ::System::String *, ::System::String *, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Concat@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEAV12@00@Z
    static WindissectOpaque Concat(::System::String *, ::System::String *, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Concat@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEAV12@0@Z
    static WindissectOpaque Concat(::System::String *, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@String@System@@QEAAXHPEAV?$Array$2@_S$00@CFlat@@HH@Z
    void CopyTo(int, ::CFlat::Array$2<char16_t, 1> *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEA_S@Z
    static WindissectOpaque Create$(char16_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEAV?$Array$2@_S$00@4@HH@Z
    static WindissectOpaque Create$(::CFlat::Array$2<char16_t, 1> *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEA_WHH@Z
    static WindissectOpaque Create$(wchar_t *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEA_SHH@Z
    static WindissectOpaque Create$(char16_t *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEAC@Z
    static WindissectOpaque Create$(signed char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEACHH@Z
    static WindissectOpaque Create$(signed char *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEA_W@Z
    static WindissectOpaque Create$(wchar_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@String@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@String@System@@SA_NPEAV12@0@Z
    static bool Equals(::System::String *, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@String@System@@UEAA_NPEAVObject@2@@Z
    virtual bool Equals(::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FastAllocateString@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@H@Z
    static WindissectOpaque FastAllocateString(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEAV12@PEAVObject@2@@Z
    static WindissectOpaque Format(::System::String *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEAV12@PEAVObject@2@11@Z
    static WindissectOpaque Format(::System::String *, ::System::Object *, ::System::Object *, ::System::Object *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEAV12@PEAV?$Array$2@V?$SmartPtr@VObject@System@@@CFlat@@$00@4@@Z
    static WindissectOpaque Format(::System::String *, ::CFlat::Array$2<WindissectOpaque, 1> *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Format@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@PEAV12@PEAVObject@2@1@Z
    static WindissectOpaque Format(::System::String *, ::System::Object *, ::System::Object *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@String@System@@UEAAHXZ
    virtual int GetHashCode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNullOrEmpty@String@System@@SA_NPEAV12@@Z
    static bool IsNullOrEmpty(::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartsWith@String@System@@QEAA_NPEAV12@W4StringComparison@2@@Z
    bool StartsWith(::System::String *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Substring@String@System@@QEAA?AV?$SmartPtr@VString@System@@@CFlat@@HH@Z
    WindissectOpaque Substring(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@String@System@@UEAA?AV?$SmartPtr@VString@System@@@CFlat@@XZ
    virtual WindissectOpaque ToString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateUninitialized@String@System@@SA?AV?$SmartPtr@VString@System@@@CFlat@@H@Z
    static WindissectOpaque _CreateUninitialized(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Chars@String@System@@QEAA_SH@Z
    char16_t get_Chars(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?op_Inequality@String@System@@SA_NPEAV12@0@Z
    static bool op_Inequality(::System::String *, ::System::String *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareOrdinalHelper@String@System@@CAHPEAV12@0@Z
    static int CompareOrdinalHelper(::System::String *, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create$@String@System@@CA?AV?$SmartPtr@VString@System@@@CFlat@@H@Z
    static WindissectOpaque Create$(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EqualsHelper@String@System@@CA_NPEAV12@0@Z
    static bool EqualsHelper(::System::String *, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillStringChecked@String@System@@CAXPEAV12@H0@Z
    static void FillStringChecked(::System::String *, int, ::System::String *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalSubString@String@System@@AEAA?AV?$SmartPtr@VString@System@@@CFlat@@HH@Z
    WindissectOpaque InternalSubString(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartsWithOrdinalHelper@String@System@@CA_NPEAV12@0@Z
    static bool StartsWithOrdinalHelper(::System::String *, ::System::String *);
};
} // namespace System
