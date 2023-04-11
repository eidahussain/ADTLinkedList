#include "LinkedList.h"


template<class Type>
int LinkedList<Type>::getCount()
{
	return count;
}

template<class Type>
bool LinkedList<Type>::insertAt(Type data, int index)
{   
	//0. Validate the index 

	if (index > count - 1 || index < 0)
		return false;

	//1. create the new node 

	nodeType <Type> *newNode = new nodeType <Type> ();
	newNode->info = data;

	//2. navigate to the index 
	int navIndex = 0;
	nodeType<int>* current = first;
	while (navIndex != index)
	{
		current = current->link;
		navIndex++;
	}

	//3. Change the pointers 
	newNode->link = current->link;
	current->link = newNode;

	//4. increment the count 
	count++;

	return true;
}

template<class Type>
void LinkedList<Type>::insertAtStart(Type data)
{
  // 1. create the new node
 
	nodeType <Type> *newNode = new nodeType <Type>();
	newNode->info = data;

  // 2. make the new node point to first 

	newNode->link = first;

  // 3. make first point to the new node 
	first = newNode;

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
int LinkedList<Type>::countData(Type data)
{
	int count = 0;
	nodeType<Type>* current = first;
	while (current != NULL)
	{
		if (current->info == data)
			count++;
		current = current->link;

	}
	return count;
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

