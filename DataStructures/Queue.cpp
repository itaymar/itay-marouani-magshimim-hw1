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
	delete(q);
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
		for (int i = 0; i < q->curSize - 1; i++)
		{
			q->queueArr[i] = q->queueArr[i + 1];
		}
		q->curSize--;
		q->queueArr[q->curSize] = 0;

		if (isEmpty(q))
		{
			return -1;
		}
		else
		{
			return q->queueArr[0];
		}
	}
}

bool isFull(Queue* s)
{
	return (s->curSize == s->maxSize);
}