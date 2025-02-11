//       Copyright Ivan "ukrustacean" Dereviankin 2025.
// Distributed under the Boost Software License, Version 1.0.
//        (See accompanying file LICENSE or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#include "String.hh"

String::String(const char *literal) {
    for (int i = 0; literal[i] != '\0'; i++) Data.Push(literal[i]);
    Data.Push('\0');
}

bool String::operator==(const String &other) const {
    if (Data.Length != other.Data.Length) return false;
    for (int i = 0; Data[i] != '\0'; i++) if (Data[i] != other.Data[i]) return false;
    return true;
}

const char *String::CStr() const {
    return Data.Data;
}
