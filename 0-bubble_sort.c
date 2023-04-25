#include "sort.h"
/**
*bubble_sort - sorts an arr of int in asc order via the Bubble algorithm
*@array: array of integers to be sorted
*@size: size of array
*
*Return: Void
*/
void bubble_sort(int *array, size_t size)
{
	if (array && size > 1)
	{
		size_t i, j;
		int store;

		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					store = array[j];
					array[j] = array[j + 1];
					array[j + 1] = store;
					print_array(array, size);
				}
			}
		}
	}
}
