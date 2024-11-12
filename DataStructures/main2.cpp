#include <iostream>
#include "Stack.h"


int main()
{
	Stack* stack = new Stack;
	initStack(stack);
	push(stack, 5);
	std::cout << "first in queue: " << stack->stack->num << std::endl;
	push(stack, 7);
	std::cout << "first in queue: " << stack->stack->num << std::endl;
	pop(stack);
	std::cout << "first in queue: " << stack->stack->num << std::endl;
}