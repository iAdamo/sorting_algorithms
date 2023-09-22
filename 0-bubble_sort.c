#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of the array
 *
 * Description: Using the Bubble sort algorithm: print the array after each
 * time you swap two elements
 *
 * Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, size_i, temp, flag;

	if (array == NULL || size == 0)
		return;

	size_i = size - 1;
	for (i = 0; i < size; i++)
	{
		flag = 0;
		for (j = 0; j < size_i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
			else
				if (flag++ == size_i)
					return;
		}
		size_i--;
	}
}
