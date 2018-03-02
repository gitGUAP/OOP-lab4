#pragma once

#include <memory>
#include <stdexcept>

template <typename T> class Stack {
public:
  Stack() { arr = std::make_unique<T[]>(size); }

  void push(T i) {
    if (idx == size) {
      throw std::runtime_error("stack overflow");
    }

    arr[idx++] = i;
  }

  T pop() {
    if (idx == 0) {
      throw std::runtime_error("stack empty");
    }

    return arr[--idx];
  }

private:
  size_t idx = 0;
  size_t size = 3;
  std::unique_ptr<T[]> arr;
};
