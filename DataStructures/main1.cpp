#include <iostream>
#include "Queue.h"

int main()
{
	Queue *queue = new Queue;
	initQueue(queue, 4);
	if (isEmpty(queue))
	{
		std::cout << "Queue is empty!";
	}
	enqueue(queue, 1);
	enqueue(queue, 2);
	std::cout << "first in queue: " << queue->queueArr[0] << std::endl;
	std::cout << "second in queue: " << queue->queueArr[1] << std::endl;
	enqueue(queue, 3);
	enqueue(queue, 4);
	
	if (isFull(queue))
	{
		std::cout << "Queue is full!";
	}
	dequeue(queue);
	std::cout << "first in queue: " << queue->queueArr[0] << std::endl;
	if (isFull(queue))
	{
		std::cout << "Queue is full!";
	}

	cleanQueue(queue);
}