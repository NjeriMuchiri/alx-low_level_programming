#include "dog.h"
#include <stdio.h>
/**
 *print_dog - function that prints the struct of the dog
 *@d: struct  dog
 *if an element of  d is NULL print nill
 *if d is NULL print nothing
 *Return: no return
 */
void print_dog(struct dog *d)
{
if (d)
{
if (!(d->name))
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %.1f\n", d->age);
if (!(d->owner))
printf("Owner: (nil)\n");
else
printf("Owner: %s\n",d->owner);
}
}
