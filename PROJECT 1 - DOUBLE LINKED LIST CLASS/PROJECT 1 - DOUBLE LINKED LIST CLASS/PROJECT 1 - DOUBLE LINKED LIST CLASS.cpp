// PROJECT 1 - DOUBLE LINKED LIST CLASS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main()
{
    clsDblLinkedList <int> MydblLinkedList;

    if (MydblLinkedList.IsEmpty())
        cout << "\n\nYes List is Empty.\n";
    else
        cout << "\n\nNo List is not Empty.\n";

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Contenet\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAfter(4, 500);

    cout << "\nAfter Insert \n";
    MydblLinkedList.PrintList();

    cout << "\nNumber of items in the linked list = " << MydblLinkedList.Size();

    MydblLinkedList.Reverse();

    cout << "\n\nLinked List Contenet after reverse:\n";
    MydblLinkedList.PrintList();

    clsDblLinkedList <int> ::Node* N;

    N = MydblLinkedList.GetNode(1);

    cout << "\n\nNode Value is: " << N->value;
    cout << "\n\nItem(2) Value is: " << MydblLinkedList.GetItem(2);

    MydblLinkedList.UpdateItem(2, 100);

    cout << "\n\nAfter Updating Item(2): " << "\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAfter(4, 300);

    cout << "\nAfter Insert \n";
    MydblLinkedList.PrintList();



    system("pause>0");

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
