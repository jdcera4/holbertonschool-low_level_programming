#include "search_algos.h"
/**
 * linear_search - lineal seacrh algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * 
 **/
int linear_search(int *array, size_t size, int value)
{
    size_t idx = 0;
    if (array == NULL)
    {
        return (-1);
    }
    for (idx = 0; idx < size; idx++)
    {
        printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
        if (array[idx] == value)
        {
            return (idx);
        }
    }
    return (-1);
}
