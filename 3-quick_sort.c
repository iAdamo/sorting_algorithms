#include "sort.h"

/**
 * swap - swap two integers
 * @arr: array of integers
 * @a: first integer
 * @b: second integer
 * Return: Nothing
*/
void swap(int *arr, int a, int b)
{
	int temp;

	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

/**
 * quick_sort - function that sorts an array of integers.
 * @array: array of integers
 * @size: size of array
 *
 * Description: In ascending order, print the array after each time you swap
 * two elements
 * Implement the `Lomuto` partition scheme.
 * The pivot should always be the last element of the partition being sorted.
 *
 * Return: Nothing
*/
void quick_sort(int *array, size_t size)
{
	size_t i, j, k;
	int pivot;

	if (array == NULL || size == 0)
		return;

	pivot = size - 1;

	for (i = 0; i < size - 1; i++)
	{
		for (j = pivot; j > i; j--)
		{
			if (array[i] > array[j])
			{
				swap(array, i, j);
				for (k = i + 1; k < j; k++)
				{
					if (array[k] > array[j])
					{
						swap(array, k, j);
						quick_sort(array, j);
					}
				}
			}
		}
	}
	print_array(array, size);
}
