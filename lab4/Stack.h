#pragma once

#include <memory>

template <typename T> class Stack {
public:
	Stack() { arr = std::make_unique<int[]>(10); }

	void push(T i) {
		arr[idx++] = i;
	}

	T pop() {
		return arr[idx--];
	}

private:
	int idx = 0;
	std::unique_ptr<T[]> arr;
};
