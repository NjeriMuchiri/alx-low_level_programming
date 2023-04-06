#include "main.h"
/**
 *set_bit - function that sets the value of a bit to 1
 *at a given index
 *@n:pointer of  unsigned long int
 *@index: bit index starting from 0
 *Return: 1 if it worked else -1 if errornous
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;
if (index > 63)
return (-1);
m = 1 << index;
*n = (*n | m);
return (1);
}
