#include "variadic_functions.h"
/**
 *print_strings - function that prints strings followed by a new line
 *@separator: string between strings
 *@n - number of strings passed to the function
 *Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list letters;
unsigned int i;
char *str;
va_start(letters, n);
for (i = 0; i < n; i++)
{
str = va_arg(letters, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (i < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(letters);
}
