#include "sort.h"

void quick_sort(int *array, size_t size)
{
    size_t i = 0, j = 0;
    int test = 0;
    int copy;
    
    while (test == 0)
    {
        j = i;
        test = 1;
        while (j < size)
        {
            if (array[j] < array[i])
            {
                copy = array[i];
                array[i] = array[j];
                array[j] = copy;
                test = 0;
                print_array(array, size);
            }
        j++;
        }
    i++;
    }
}