#include "main.h"

/**
 * create_file - to Creates a file.
 * @filename: pointer to name of the file to create.
 * @text_content: pointer to a string to write to the file.
 * or content writed in the file.
 * Return: 1 if it success, Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, N_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (N_len = 0; text_content[N_len];)
			N_len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/*file opened with permissions set to 0600which corresponds to rw-------.*/
	wr = write(fd, text_content, len);


	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);
	return (1);
}
