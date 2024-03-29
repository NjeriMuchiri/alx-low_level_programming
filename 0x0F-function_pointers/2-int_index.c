#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array: array of integers
 *@size: number of elements int the array
 *@cmp: pointer to the function to be used to compare values
 *Return: the index of the first element for which the cmp function
 *does not return 0
 *otherwise return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp)
{
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
if (cmp(array[i]))
return (i);
}
return (-1);
}
