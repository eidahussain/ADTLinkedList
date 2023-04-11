#pragma once

#include <iostream>
using namespace std; 

template <class Type>
struct nodeType
{
	Type info; // data 

	nodeType<Type>* link; // pointer to the next node

};

template <class Type>
class LinkedList
{
private: 
	nodeType<Type>* first; 
	int count=0; // how many elements we have 

public:
	int getCount();

	bool insertAt(Type data, int index);

	void insertAtEnd(Type data);

	void insertAtStart(Type data); 

	bool deleteAt(int index);

	bool deleteLast();

	bool deleteFirst(); 

	bool deleteNode(Type data); 

	bool exists(Type data);

	void printList();

	int countData(Type data); 

	void replaceData(Type originalData, Type newData); 
	
	LinkedList();
};


