#include "function_pointers.h"
/**
 *print_name - function that prints name
 *@name: the name strings
 *@f: function pointer that returns to char
 *Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
