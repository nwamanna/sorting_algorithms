#include "sort.h"
void counting_sort(int *array, size_t size)
{
	if (array && size > 1)
	{
		size_t i;
		int j;
		size_t idx = 0;
		int *count;
		int max = array[0];

		for (i = 0; i < size; i++)
		{
			if (array[i] > max)
				max = array[i];
		}
		count = (int *)malloc((max + 1) * sizeof(int));
		if (count)
		{
			for (j = 0; j <= max; j++)
				count[j] = 0;

			for (i = 0; i < size; i++)
			{
				if (array[i] <= max)
					count[array[i]]++;
			}
			print_array(count, max);
			for (j = 0; j <= max; j++)
				printf("%d", count[j]);
		
			for (j = 0; j <= max; j++)
			{
				while (count[j] > 0)
				{
					array[idx++] = j;
					count[j]--;
				}
			}
			free(count);
		}
	}
}
