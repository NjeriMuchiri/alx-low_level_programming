#include "main.h"
/**
 *read_textfile - function that reads a text file and prints it
 *it to the standard output
 *@filename: filename
 *@letters: number of letters that it should read and print
 *Return: numbers of letters printed.Fails, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_data;
ssize_t nrd, nwr;
char *buff;
if (!filename)
return (0);
file_data = open(filename, O_RDONLY);
if (file_data == -1)
return (0);
buff = malloc(sizeof(char) * (letters));
if (!buff)
return (0);
nrd = read(file_data, buff, letters);
nwr = write(STDOUT_FILENO, buff, nrd);
close(file_data);
free(buff);
return (nwr);
}
