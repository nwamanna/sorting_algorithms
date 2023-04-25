#include "sort.h"
/**
*selection_sort - sort an array of int in asc order via the Selection algothm
*@array: array of integers
*@size: size of array
*
*Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int store;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		if (min_index != i)
		{
			store = array[i];
			array[i] = array[min_index];
			array[min_index] = store;
			print_array(array, size);
		}
	}
}
