#include <unistd.h>
#include "main.h"

/**
 *_putchar - writes the character c to stdout 
 *
 *Return:  1 (Success)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}


