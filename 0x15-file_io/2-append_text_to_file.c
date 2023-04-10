#include "main.h"
/**
 *append_text_to_file - function that appends text to end of a file
 *@filename: name of a file
 *@text_content: content added
 *Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_data;
int nletters;
int rdwr;
if (!filename)
return (-1);
file_data = open(filename, O_WRONLY | O_APPEND);
if (file_data == -1)
return (-1);
if (text_content)
{
for (nletters = 0; text_content[nletters]; nletters++)
;
rdwr = write(file_data, text_content, nletters);
if (rdwr == -1)
return (-1);
}
close(file_data);
return (1);
}
