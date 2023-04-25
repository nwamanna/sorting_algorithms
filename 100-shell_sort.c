#include "sort.h"
/**
*shell_sort - sorts an array via shell sort
*@array: array to be sorted
*@size: size of array
*
*Return: void
*/
void shell_sort(int *array, size_t size)
{
	if (array && size > 1)
	{
		int interval = 1;
		int limit = size / 3;

		while (interval < limit)
			interval = interval * 3 + 1;
		while (interval > 0)
		{
			size_t i;
			int key, j;

			for (i = interval; i < size; i++)
			{
				key = array[i];
				j = i;

				while (j >= interval && array[j - interval] > key)
				{
					array[j] = array[j - interval];
					j -= interval;
				}
				array[j] = key;
			}
			interval = (interval - 1) / 3;
			print_array(array, size);
		}
	}
}
