// PROJECT 3 - MY STACK.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsMyStack.h"
using namespace std;

int main()
{
	clsMyStack<int> MyStack;

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);

	cout << "\nStack :\n";
	MyStack.Print();

	cout << "\nStack Size : " << MyStack.Size() << endl;
	cout << "\nStack Top : " << MyStack.Top() << endl;
	cout << "\nStack Bottom : " << MyStack.Bottom() << endl;

	MyStack.pop();
	cout << "\nStack after pop():\n";
	MyStack.Print();

	cout << "\n\nThe Item(3) in the Stack : " << MyStack.GetItem(3) << endl;

	MyStack.Reverse();
	cout << "\n\nStack after Reverse :\n";
	MyStack.Print();

	MyStack.UpdateItem(2, 68);
	cout << "\n\nStack after Updating Item(2) to 68 :\n";
	MyStack.Print();

	MyStack.InsertAfter(2, 342);
	cout << "\n\nStack after inserting  342  after Item(2) :\n";
	MyStack.Print();

	MyStack.InsertAtFront(1000);
	cout << "\n\nStack after inserting  1000 at front :\n";
	MyStack.Print();

	MyStack.InsertAtBack(2000);
	cout << "\n\nStack after inserting  2000 at back :\n";
	MyStack.Print();

	MyStack.Clear();
	cout << "\n\nStack after Clear :\n";
	MyStack.Print();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
