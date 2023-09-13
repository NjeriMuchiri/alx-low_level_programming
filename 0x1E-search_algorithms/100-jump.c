#include "search_algos.h"
/**
 * jump_search - funtion that searches for a value in an array of
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: -1 If value is not present or the array is NULL.
 * Otherwise, the first index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
int index, m, k, prev;
if (array == NULL || size == 0)
return (-1);
m = (int)sqrt((double)size);
k = 0;
prev = index = 0;
do
{
printf("Value checked array[%d] = [%d]\n", index, array[index]);
if (array[index] == value)
return (index);
k++;
prev = index;
index = k * m;
} while (index < (int)size && array[index] < value);
printf("Value found between indexes [%d] and [%d]\n", prev, index);
for (; prev <= index && prev < (int)size; prev++)
{
printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);
}
return (-1);
}
