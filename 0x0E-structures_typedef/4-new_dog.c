#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - function that creates a new dog
 *@name: dog's name
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: struct dog 
 *otherwise NULL if function fails 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
int i, lname, lowner;
new_dog = malloc(sizeof(*new_dog));
if (new_dog == NULL || !(name) || !(owner))
{
free(new_dog);
return (NULL);
}
for (lname = 0; name[lname]; lname++)
;
for (lowner = 0; owner[lowner]; lowner++)
;
new_dog->name = malloc(lname + 1);
new_dog->owner = malloc(lowner + 1);
if (!(new_dog->name) || !(new_dog->owner))
{
free(new_dog->owner);
free(new_dog->name);
free(new_dog);
return (NULL);
}
for (i = 0; i < lname; i++)
new_dog->name[i] = name[i];
new_dog->name[i] = '\0';
new_dog->age = age;
for (i = 0; i < lowner; i++)
new_dog->owner[i] = owner[i];
new_dog->owner[i] = '\0';
return (new_dog);
}
