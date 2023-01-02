#include "sort.h"

/**
 * selection_sort - sort an array using selection type of sorting
 * @array: the array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	size_t k = 0;
	int testValue;

	while (i < size)
	{
		testValue = array[i];
		j = i;
		k = 0;
		while (j < size)
		{
			if (array[j] < testValue)
			{
				k = j;
				testValue = array[j];
			}
			j++;
		}
		/* when at the end */
		if (k != 0)
		{
			j = array[i];
			array[i] = array[k];
			array[k] = j;
			print_array(array, size);
		}
		i++;
	}
}
