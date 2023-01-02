#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    int test = 0; /* test if sorted */
    size_t i = 0;
    int copyValue;

    while (test == 0)
    {
        test = 1;
        i = 0;
        while (i < size - 1)
        {
            if (array[i] > array[i + 1])
            {
                copyValue = array[i];
                array[i] = array[i + 1];
                array[i + 1] = copyValue;
                test = 0;
            }
            i++;
        }
        print_array(array, size);
    }
}