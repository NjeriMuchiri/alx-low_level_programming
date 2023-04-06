#include "main.h"
/**
 *clear_bit - sets the value to a 0at a given index.
 *@n: pointer unsigned long int
 *@index: bit index starting from 0.
 *Return: 1 otherwise 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int cl;
if (index > 63)
return (-1);
cl = 1 << index;
if (*n & cl)
*n ^= cl;
return (1);
}
