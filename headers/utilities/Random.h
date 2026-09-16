#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 10 member(s).
namespace System {
class Random {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete$@Random@System@@UEAAXXZ
    virtual void Delete$();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@Random@System@@UEAAHXZ
    virtual int Next();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@Random@System@@UEAAHH@Z
    virtual int Next(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Next@Random@System@@UEAAHHH@Z
    virtual int Next(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextBytes@Random@System@@UEAAXPEAV?$Array$2@E$00@CFlat@@@Z
    virtual void NextBytes(::CFlat::Array$2<unsigned char, 1> *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextDouble@Random@System@@UEAANXZ
    virtual double NextDouble();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Sample@Random@System@@UEAANXZ
    virtual double Sample();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init$@Random@System@@IEAAXH@Z
    void Init$(int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSampleForLargeRange@Random@System@@AEAANXZ
    double GetSampleForLargeRange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalSample@Random@System@@AEAAHXZ
    int InternalSample();
};
} // namespace System
