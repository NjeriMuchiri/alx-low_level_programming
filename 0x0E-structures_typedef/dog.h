#ifndef DOG_H
#define DOG_H
/**
 *struct dog - holds the name, age and owner of my_dog
 *my_dog - Typedef for struct dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 *Description: struct dog holds the name, age and owner of the dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
