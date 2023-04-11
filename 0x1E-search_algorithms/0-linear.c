#include "search_algos.h"

/**
 * linear_search - Searches a value in an array using a linear search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 * Return: The first index of the value in the array, otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
    if (array == NULL) {  /* Check if array is NULL*/
        return -1;
    }
    for (size_t i = 0; i < size; i++) 
    {
        if (array[i] == value) /* Check if current element matches value */
	{
		return i;  /* Return index of first occurrence of value */
        }
    }
    return -1;  /* Return -1 if value is not found in array */
}
