#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two string
 *@s1: string one
 *@s2: string two
 *Return: a pointer to the newly allocated space in memory otherwise NULL
 */
char  *str_concat(char *s1, char *s2)
{
char *strbind;
unsigned int i, j, k, limit;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
strbind = malloc(sizeof(char) * (i + j + 1));
if (strbind == NULL)
{
free(strbind);
return (NULL);
}
for (k = 0; k < i; k++)
strbind[k] = s1[k];
limit = j;
for (j = 0; j <= limit; k++, j++)
strbind[k] = s2[j];
return (strbind);
}
