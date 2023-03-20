#ifndef DOG_H
#define DOG_H
/**
 *my_dog - Typedef for struct dog
 */
typedef struct dog
/**                                                                                                           
 *struct dog - typedef for the  dog holding the name, age and owner
 *@name: name of the dog
 *@float: age of the dog
 *@owner: dog's owner
 *Description: struct called "dog" that stores it's mae, age and owner
 */
{
char *name;
float age;
char *owner;
}my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
