#include "variadic_functions.h"
/**
 *print_numbers - function that prints numbers followed by a newline
 *@separator: string between numbers
 *@n: number of integers passed to the function
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list print_numbers;
unsigned int i;
va_start(print_numbers, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(print_numbers, int));
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(print_numbers);
}
