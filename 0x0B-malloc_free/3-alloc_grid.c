#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - retuns a pointer to a 2 dimensional array of integers
 *@width: width of the array
 *@height: height of the array
 *Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
int **gridequals;
int i, j;
if (width < 1 || height < 1)
return (NULL);
gridequals = malloc(height * sizeof(int *));
if (gridequals == NULL)
{
free(gridequals);
return (NULL);
}
for (i = 0; i < height; i++)
{
gridequals[i] = malloc(width * sizeof(int));
if (gridequals[i] == NULL)
{
for (i--; i >= 0; i--)
free(gridequals[i]);
free(gridequals);
return (NULL);
}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
gridequals[i][j] = 0;
return (gridequals);
}
