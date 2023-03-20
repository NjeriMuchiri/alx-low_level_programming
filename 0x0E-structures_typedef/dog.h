#ifndef DOG_H
#define DOG_H
/**
 *my_dog - typedef for struct dog
 */
typedef struct dog my_dog;

/**
 *struct dog - struct that stores some information of a dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 *Description: struct dog holds the name, age and owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
