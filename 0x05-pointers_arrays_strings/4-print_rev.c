#include "main.h"
#include <stdio.h>
/**
 *print_rev - prints string in reverse
 *@s: input string
 *Return: no return
 */
void print_rev(char *s)
{
int count = 0;
while (count >= 0)
{
if (s[count] == '\0')
break;
count++;
}
for (count--; count >= 0; count--)
putchar(s[count]);
putchar('\n');
}
