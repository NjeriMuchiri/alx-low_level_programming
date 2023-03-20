#include "dog.h"
#include <stdio.h>
/**
 *init_dog - function that  initializes a variable of type struct god
 *struct dog - holds the name, age and owner of the dog
 *@d: pointer of the dog
 *@name: name of the dog
 *@age: dog's age
 *@owner: The dog's owner
 *Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
