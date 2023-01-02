#include "sort.h"

void quick_sort(int *array, size_t size)
{
    size_t i = 0, j = 0;
    int pivot, copy;
    
    while (test == 0)
    {
        test = 1;
        pivot = array[size - i];
        j = 0;
        while (j < (size - 1)/2)
        {
            if (array[j] > pivot)
            {
                copy = array[j];
                array[j] = array[size - j];
                array[size - j] = copy;
            }
            j++;
        }
        print_array(array, size);
        i++;
    }
}