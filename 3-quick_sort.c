#include "sort.h"

/**
 * quick_sort - function that sort using quick methode
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int test = 0;
	int copy;
	int store;
	int change;

	while (array && *array && (i < size - 1))
	{
		j = i;
		copy = array[i];
		change = 0;
		while (j < size)
		{
			if (array[j] < copy)
			{
				test = j;
				copy = array[j];
				change = 1;
			}
			j++;
		}
		if (change == 1)
		{
			store = array[i];
			array[i] = array[test];
			array[test] = store;
			print_array(array, size);
		}
		i++;
	}
}
