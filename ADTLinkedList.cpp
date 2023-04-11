// ADTLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "LinkedList.h"


int main()
{
    std::cout << "Hello World!\n";

    LinkedList<int> ls1; 
    ls1.insertAtStart(3);
    ls1.insertAtStart(7);
    ls1.insertAtStart(5);
   

   // ls1.printList();

   // cout <<"Number of elements =" << ls1.getCount() << endl;

    cout << ls1.countData(12) << endl;
}
