#include "search_algos.h"
/**
 * recursive_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of array to search in
 * @size: number of elements in array
 * @value: the value to search in
 * Return: -1 if value s not present in array or if array is NULL
 */
int recursive_searching(int *array, size_t size, int value)
{
size_t half = size / 2;
size_t i;
if (array == NULL || size == 0)
return (-1);
printf("Searching in array");
for (i = 0; i < size; i++)
printf("%s %d", (i == 0) ? ":" : ",", array[i]);
printf("\n");
if (half && size % 2 == 0)
half--;
if (value == array[half])
return ((int)half);
if (value < array[half])
return (recursive_searching(array, half, value));
half++;
return (recursive_searching(array + half, size - half, value) + half);
}
/**
 * binary_search - function that calls to binary_search to return
 * the index of the number
 * @array: pointer to the first element of array to search in
 * @size: number of elements in array
 * @value: the value to search in
 * Return: -1 if value s not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
int index;
index = recursive_searching(array, size, value);
if (index >= 0 && array[index] != value)
return (-1);
return (index);
}
