#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters read and printed
 *         0 if file can't be opened, read, or if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);

	if (r == -1 || w == -1 || w != r)
		return (0);

	return (w);
}
