#include "holberton.h"
/**
 * read_textfile - reads a text file
 * 
 * @filename: pointer to the text that recive
 * @letters: structure of size

 * Return: the file to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = 0; 
	int readf = 0;
	int writef = 0;
	int closef = 0;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	readf = read(file, buff, letters);
	if (readf== -1)
		return (0);
	writef = write(STDOUT_FILENO, buff, readf);
	if (writef == -1)
		return (0);
	closef = close(file);
	if (closef == -1)
		return (0);
	free(buff);
	return (readf);
}
