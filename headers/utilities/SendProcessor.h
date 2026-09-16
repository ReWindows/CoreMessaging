#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreMessaging.dll by Windissect. 5 member(s).
namespace CoreMessaging::Calling {
class SendProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalSend@SendProcessor@Calling@CoreMessaging@@QEAAJPEAXIPEAD@Z
    long MarshalSend(void *, unsigned int, char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBX@Z
    void MarshalArray(int *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z
    void MarshalStringArray(int *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z
    long PrepareArray(void const *, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z
    long ReadParameterSize(char * *, int, unsigned int, unsigned int, unsigned int, unsigned int *);
};
} // namespace CoreMessaging::Calling
