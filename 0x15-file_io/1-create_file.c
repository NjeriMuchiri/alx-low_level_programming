#include "main.h"
/**
 *create_file - function that creates a file
 *@filename: name of the file
 *@text_content: NULL
 *Return: 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
int file_data;
int nletters;
int rdwr;
if (!filename)
return (-1);
file_data = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file_data == -1)
return (-1);
if (!text_content)
text_content = "";
for (nletters = 0; text_content[nletters]; nletters++)
;
rdwr = write(file_data, text_content, nletters);
if (rdwr == -1)
return (-1);
close(file_data);
return (1);
}
