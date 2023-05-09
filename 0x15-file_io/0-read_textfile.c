#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-  reads a text file and prints it to stdout
 * @filename: text file or filename being read.
 * @letters: number of letters to be read
 * Return: w- numbers of letters printed,
 *        It fails, returns 0. or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, wr, rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(fd);
	return (wr);
}
