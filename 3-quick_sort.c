#include "sort.h"
/**
*part_middle - finds the pivot of an array
*@arr: the array
*@l: left element
*@r: right element
*
*Return: position of pivot
*/
int part_middle(int *arr, int l, int r)
{
	int pivot = arr[r];
	int temp;
	int i = l - 1;
	int j;


	for (j = l; j <= r - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[r];
	arr[r] = temp;
	return (i + 1);
}

/**
*recursive_sort - sorts an array recursively
*@arr: the array
*@l: left element
*@r: right element
*
*Return: void
*/
void recursive_sort(int *arr, int l, int r)
{
	int pivot;

	if (l < r)
	{
		pivot = part_middle(arr, l, r);
		recursive_sort(arr, l, pivot - 1);
		recursive_sort(arr, pivot + 1, r);
		print_array(arr, r);
	}
}

/**
*quick_sort - sort an array in ascending order via quick sort
*@array: array of integers to be sorted
*@size: size of array
*
*Return: Void
*/
void quick_sort(int *array, size_t size)
{
	int num = size - 1;

	if (array && size > 1)
		recursive_sort(array, 0, num);
}
