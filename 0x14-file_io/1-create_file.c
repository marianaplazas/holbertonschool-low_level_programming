#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdlib.h>
#include <stdio.h>

#include <unistd.h>

#include "holberton.h"
/**
 * create_file - create a file 
 *
 * @filename: pointer to the file that recive
 * @text_content: the things that cotain the file
 *
 * Return: -1 or 1 if is success
 */
int create_file(const char *filename, char *text_content)
{
	int newf = 0;
	int len; 
	int writef = 0;

	if (filename == NULL)
		return (-1);
	newf= open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (newf == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(newf);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
	{
	}
	writef = write(new_file, text_content, len);
	if (close(newf) == -1)
		return (-1);
	return (writef == -1 ? -1 : 1);
}
