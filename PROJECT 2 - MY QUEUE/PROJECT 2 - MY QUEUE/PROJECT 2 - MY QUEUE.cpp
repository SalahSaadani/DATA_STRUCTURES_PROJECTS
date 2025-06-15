// PROJECT 2 - MY QUEUE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsMyQueue.h"
using namespace std;

int main()
{
    clsMyQueue<int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(40);
    MyQueue.push(60);
    MyQueue.push(80);
    MyQueue.push(100);

    cout << "\n Queue: \n";
    MyQueue.Print();

    cout << "\nQueue Size: " << MyQueue.Size() << endl;
    cout << "\nQueue Front: " << MyQueue.front() << endl;
    cout << "\nQueue Back: " << MyQueue.back() << endl;

    MyQueue.pop();
    cout << "\n\nQueue after pop() : \n";
    MyQueue.Print();

    cout << "\nItem(3) : " << MyQueue.GetItem(3) << endl;

    MyQueue.Reverse();
    cout << "\nQueue After Reverse () : \n";
    MyQueue.Print();

    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after updating item(2) to 600 : \n";
    MyQueue.Print();

    MyQueue.InsertAfter(3, 83);
    cout << "\n\nQueue after Inserting 83 after item(3)  : \n";
    MyQueue.Print();

    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000  at front : \n";
    MyQueue.Print();

    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000  at back : \n";
    MyQueue.Print();

    MyQueue.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueue.Print();

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
