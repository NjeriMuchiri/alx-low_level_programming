#include "main.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly located space in memory
 *@str: copy of string
 *Return: a pointer to the duplicated string otherwise null 
 */
char *_strdup(char *str)
{
char *strdown;
unsigned int i, j;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
strdown = (char *)malloc(sizeof(char) * (i + 1));
if (strdown == NULL)
return  (NULL);
for (j = 0; j <= i; j++)
strdown[j] = str[j];
return (strdown);
}
