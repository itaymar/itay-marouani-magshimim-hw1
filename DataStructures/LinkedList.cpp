#include <iostream>
#include "LinkedList.h"


linkedList* add(linkedList* head, int num)
{
	linkedList* newNode = new linkedList;
	newNode->num = num;
	newNode->next = head;
	return newNode;  
}

linkedList* remove(linkedList* head)
{
	linkedList* newNode = new linkedList;
	newNode = head->next;
	delete(head);
	return newNode;
}