#include <iostream>

#include "Stack.h"

using namespace std;

int main() {
	Stack<int> stI;

	stI.push(2);
	stI.push(1);
	stI.push(10);

	cout << stI.pop() << endl;

	system("pause");
	return 0;
}
