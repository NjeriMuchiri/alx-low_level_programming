#include "main.h"
#include <stdlib.h>
/**
 *malloc - function that allocates memory using malloc
 *@b: amount of bytes
 *Returns: a pointer to the allocated memory
 *if malloc fails, the status value to to 98
 */
void *malloc_checked(unsigned int b)
{
char *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
