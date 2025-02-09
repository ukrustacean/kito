#ifndef VEC_H
#define VEC_H

#include <stdio.h>
#include <stdlib.h>

template <typename T>
struct Vec {
  T* data;
  size_t length, capacity;

  Vec() {
    length = 0;
    capacity = 1;

    data = malloc(sizeof(T) * capacity);
  }

  ~Vec() {
    free(data);
  }

  void push(T val) {
    if (capacity == length) {
      capacity *= 2;
      data = realloc(data, capacity * sizeof(T));
    }

    data[length] = val;
    length += 1;
  }

  T pop() {
    if (length == 0) {
      printf("Error: empty Vec\n");
      exit(-1);
    }

    length -= 1;
    return data[length];
  }

  T& operator[](size_t index) {
    if (index < 0 || index >= length) {
      printf("Error: index out of bounds\n");
      exit(-1);
    }

    return data[index];
  }
};

#endif //VEC_H