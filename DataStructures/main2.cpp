#include <iostream>
#include "Stack.h"
#include "Utils.h"


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
	int* array = reverse10();

	std::cout << " " << array[0] << std::endl;
	std::cout << " " << array[1] << std::endl;
	std::cout << " " << array[2] << std::endl;
	std::cout << " " << array[3] << std::endl;
	std::cout << " " << array[4] << std::endl;
	std::cout << " " << array[5] << std::endl;
	std::cout << " " << array[6] << std::endl;
	std::cout << " " << array[7] << std::endl;
	std::cout << " " << array[8] << std::endl;
	std::cout << " " << array[9] << std::endl;

}