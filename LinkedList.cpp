#include "LinkedList.h"


template<class Type>
int LinkedList<Type>::getCount()
{
	return count;
}

template<class Type>
void LinkedList<Type>::insertAtStart(Type data)
{
  // 1. create the new node
 
	nodeType <Type> newNode;
	newNode.info = data;

  // 2. make the new node point to first 

	newNode.link = first;

  // 3. make first point to the new node 
	first = &newNode;

  // 4. Increment the count  
	count++;

}

template<class Type>
LinkedList<Type>::LinkedList()
{
	count = 0;

	first = NULL; 
}

template<class Type>
void LinkedList<Type>::printList()
{
	// print all the nodes 
	nodeType<Type>* current = first;
	while (current != NULL)
	{
		cout << current->info << endl;
		current = current->link;

	}

}

template<class Type>
bool LinkedList<Type>::exists(Type data)
{
	// traverse until u find the data, or return false; 
	/*nodeType<Type>* current = first;
	while (current->info != data)
	{
		current = current->link;

	}

	if (current->info = data)
		return true;
	else

	return false;*/

	nodeType<Type>* current = first;
	while (current != NULL)
	{
		if (current->info == data)
			return true;
		current = current->link;

	}

	return false; 

}

template class LinkedList <int>;// fix for link problem 

