//       Copyright Ivan "ukrustacean" Dereviankin 2025.
// Distributed under the Boost Software License, Version 1.0.
//        (See accompanying file LICENSE or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef STRING_H
#define STRING_H

#include "Vec.hh"

struct String {
    Vec<char> Data;

    String(const char *literal);
    bool operator==(const String &other) const;
    const char *CStr() const;
};

#endif //STRING_H
