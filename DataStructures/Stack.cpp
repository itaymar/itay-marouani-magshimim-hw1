#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

void initStack(Stack* s)
{
	s->stack = new linkedList;
	s->stack->next = NULL;
	s->curSize = 0;
}
void push(Stack* s, unsigned int element)
{
	s->stack = add(s->stack, element);
	s->curSize++;
}

bool isEmpty(Stack* s)
{
	return (s->curSize == 0);
}

int pop(Stack* s)
{
	if (isEmpty(s)) 
	{
		return -1;
	}
	else
	{
		int first = s->stack->num; 
		s->stack = remove(s->stack); 
		s->curSize--;

		return first;
	}
}


bool isFull(Stack* s)
{
	return false; // Since there is no max size for the stack, the stack will never be full
}

void cleanStack(Stack* s)
{
	linkedList* curr = s->stack;
	linkedList* temp = s->stack;
	while (curr->next != NULL)
	{
		temp = curr->next;
		curr->num = 0;
		delete(curr);
		curr = temp;
	}
}