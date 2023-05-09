#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: to add content or The string
 * to add to the fille.
 * Return: 1 if the file exists
 *        -1 If the file does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byte_w, N_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (N_len = 0; text_content[N_len];)
			N_len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	byte_w = write(fd, text_content, N_len);

	if (fd == -1 || byte_w == -1)
		return (-1);

	close(fd);

	return (1);
}
