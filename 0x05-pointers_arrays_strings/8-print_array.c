#include "main.h"
#include <stdio.h>
/**
 *print_array - prints the n elements of an array followed by a newline
 *@a: Array
 *@n: number of elements
 */
void print_array(int *a, int n)
{
int i = 0;
for (; i < n; i++)
{
printf("%d", *(a + i));
if (i != (n - 1))
printf(", ");
}
printf("\n");
}
