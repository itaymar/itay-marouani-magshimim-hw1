#include <iostream>
#include "Utils.h"

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	int j = size - 1;
	int temp = 0;

	for (i = 0; i < j; i++)
	{
		temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
		j--;

	}
}

int* reverse10()
{
	int* array = new int[10];
	std::cout << "Enter 10 numbers: ";

	for (int i = 0; i < 10; ++i) 
	{
		std::cin >> array[i];
	}
	reverse(array, 10);

	return array;
}