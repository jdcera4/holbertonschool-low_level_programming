#include "search_algos.h"
/**
 * binary_search - lineal seacrh algorithm binary
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * 
 **/

int binary_search(int *array, size_t size, int value)
{
    	size_t i,  low = 0, high = size - 1, mid;

	if (!array)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
