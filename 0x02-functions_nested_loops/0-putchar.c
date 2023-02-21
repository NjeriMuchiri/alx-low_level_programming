#include <unistd.h>
#include "main.h"
/**
 *main - Prints _putchar 
 *
 *Return: Always 0 (Success)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}


