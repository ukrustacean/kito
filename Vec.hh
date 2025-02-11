//       Copyright Ivan "ukrustacean" Dereviankin 2025.
// Distributed under the Boost Software License, Version 1.0.
//        (See accompanying file LICENSE or copy at
//          https://www.boost.org/LICENSE_1_0.txt)

#ifndef VEC_H
#define VEC_H

#include <stdio.h>
#include <stdlib.h>

template <typename T>
struct Vec {
  T* Data;
  size_t Length, Capacity;

  Vec() {
    Length = 0;
    Capacity = 1;

    Data = (T*)malloc(sizeof(T) * Capacity);
  }

  ~Vec() {
    free(Data);
  }

  void Push(T val) {
    if (Capacity == Length) {
      Capacity *= 2;
      Data = (T*)realloc(Data, Capacity * sizeof(T));
    }

    Data[Length] = val;
    Length += 1;
  }

  T Pop() {
    if (Length == 0) {
      printf("Error: empty Vec\n");
      exit(-1);
    }

    Length -= 1;
    return Data[Length];
  }

  T& operator[](size_t index) const {
    if (Length <= index) {
      printf("Error: index out of bounds\n");
      exit(-1);
    }

    return Data[index];
  }
};

#endif //VEC_H