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

}