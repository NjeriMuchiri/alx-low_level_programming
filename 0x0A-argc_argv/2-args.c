#include <stdio.h>
/**
 *main - prints all the arguments it receives
 *@argc: numberof  the command line arguments
 *@argv: array containing the program command line arguments passed 
 *Return: 0 - success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
