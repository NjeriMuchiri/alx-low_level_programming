#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of characters and initializes
 *it witha specific character
 *@size: array size
 *@c: stored char
 *Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *carr;
unsigned int i;
if (size == 0)
return (NULL);
carr  = malloc(sizeof(c) * size);
if (carr == NULL)
return (NULL);
for (i = 0; i < size; i++)
carr[i] = c;
return (carr);
}
