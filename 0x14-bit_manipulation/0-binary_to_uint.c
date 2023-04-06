#include "main.h"
/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: string of 0 and 1
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int unsi;
int len, baseTwo;
if(!b)
return 0;
unsi = 0;
for (len = 0; b[len] != '\0'; len++)
;
for (len--, baseTwo = 1; len >= 0; len--, baseTwo *=2)
{
if (b[len] != '0' && b[len] != '1')
{
return (0);
}
if (b[len] & 1)
{
unsi += baseTwo;
}
}
return (unsi);
}
