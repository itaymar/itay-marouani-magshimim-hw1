#include <iostream>
#include "Queue.h"

void initQueue(Queue* q, unsigned int size)
{
	q->queueArr = new int[size];
	q->maxSize = size;
	q->curSize = 0;
}

void cleanQueue(Queue* q)
{
	for (int i = 0; i < q->curSize; i++)
	{
		q->queueArr[i] = 0;
	}
	delete[] q->queueArr;
}

void incQueue(Queue* s)
{
	s->curSize++;
}
void enqueue(Queue* q, unsigned int newValue)
{
	q->queueArr[q->curSize] = newValue;
	incQueue(q);
}

bool isEmpty(Queue* s)
{
	return (s->curSize == 0);
}

int dequeue(Queue* q)
{
	
	if (isEmpty(q))
	{
		return -1;
	}
	else
	{
		int first = q->queueArr[0];
		for (int i = 0; i < q->curSize - 1; i++)
		{
			q->queueArr[i] = q->queueArr[i + 1];
		}
		q->curSize--;
		q->queueArr[q->curSize] = 0;

		return first;
	}
}

bool isFull(Queue* s)
{
	return (s->curSize == s->maxSize);
}