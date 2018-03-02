#include <iostream>

#include "Stack.h"

using namespace std;

int main() {
	Stack<int> stcInt;
	Stack<char> stcChar;

	// Stack int
	cout << "\t Int:" << endl;

	stcInt.push(1);
	stcInt.push(2);
	stcInt.push(3);
	// stc.push(4);

	cout << "Pop:" << endl;
	cout << stcInt.pop() << endl;
	cout << stcInt.pop() << endl;
	cout << stcInt.pop() << endl;
	// cout << stc.pop() << endl;



	///////////////////////////////////////////


	// Stack char
	cout << "\t Char:" << endl;
	
	stcChar.push(76);
	stcChar.push(123);
	stcChar.push(88);

	cout << "Pop:" << endl;
	cout << stcChar.pop() << endl;
	cout << stcChar.pop() << endl;
	cout << stcChar.pop() << endl;

	system("pause");
	return 0;
}
