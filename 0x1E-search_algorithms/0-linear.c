#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: If value is not present or the array is NULL, return -1.
 * Otherwise, the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
int i;
if (array == NULL)
return (-1);
for (i = 0; i < (int)size; i++)
{
printf("Value checked array[%u] = [%d]\n", i, array[i]);
if (value == array[i])
return (i);
}
return (-1);
}
