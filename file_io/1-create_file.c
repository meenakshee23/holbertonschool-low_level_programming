#include "main.h"
/**
 * create_file - creates a file and writes text to it
 * @filename: name of the file
 * @text_content: NULL-terminated string to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		if (write(fd, text_content, len) != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

