#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdlib.h>
#include <stdio.h>

#include <unistd.h>

#include "holberton.h"
/**
 * append_text_to_file - appends text ot a file.
 *
 * @filename: pointer to the file that recive
 * @text_content: the things that write
 *
 * Return: 1 if is success or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int readf = 0;
	int writef = 0;
	int counter;

	if (filename == NULL)
		return (-1);
	readf = open(filename, O_WRONLY | O_APPEND);
	if (readf == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (counter = 0; text_content[counter]; counter++)
	{
	}
	writef = write(readf, text_content, counter);
	close(readf);
	if (writef == -1)
	{
		return (-1);
	}
	return (1);
}
