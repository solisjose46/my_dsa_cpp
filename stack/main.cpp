#include <iostream>
#include "Stack.cpp"

using namespace std;

/**
 * This main cpp tests Stack and Node
 * run with valgrind to verify no memory leaks
 *
 * Create exe with: make
 * Run with: valgrind --leak-check=yes ./runMe
 * 
 * Jose Salazar 1/23/22
 *
 * **/

int main(){

	Stack<int> myStack;

	myStack.push(1);
	myStack.push(2);
	myStack.push(3);

	myStack.printStack();

	cout << "pop!: " << myStack.pop() << endl;

	cout << "peek!: " << myStack.peek() << endl;

	cout << "should be 2 1" << endl;

	myStack.printStack();

	return 0;
}
