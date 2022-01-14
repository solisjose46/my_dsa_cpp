#include <iostream>
#include "SLL.cpp"

using namespace std;

/**
 * This main cpp tests SLL and Node
 * run with valgrind to verify no memory leaks
 *
 * Create exe with: make
 * Run with: valgrind --leak-check=yes ./runMe
 * 
 * Jose Salazar 1/14/22
 *
 * **/

int main(){

	SLL<int> myList;

	myList.insert(8);
	myList.insert(7);
	myList.insert(9);
	myList.insert(33);
	myList.insert(69);

	cout << "size: " << myList.getSize() << endl;

	myList.printList();

	if(myList.find(8)){
		cout << "8 found" << endl; 
	}
	else{
		cout << "8 not found" << endl;
	}

	if(myList.find(13)){
		cout << "13 found" << endl; 
	}
	else{
		cout << "13 not found" << endl;
	}

	myList.remove(33);

	myList.printList();

	return 0;
}
