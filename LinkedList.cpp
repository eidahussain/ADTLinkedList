#include "LinkedList.h"


template<class Type>
int LinkedList<Type>::getCount()
{
	return count;
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
	while (current != Null)
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
	while (current != Null)
	{
		if (current->info == data)
			return true;
		current = current->link;

	}

	return false; 

}