#include <fcntl.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes;

	if (ac != 3)
		return (1);

	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
		return (1);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
		return (1);

	while ((bytes = read(fd_from, buffer, 1024)) > 0)
		write(fd_to, buffer, bytes);

	close(fd_from);
	close(fd_to);
	return (0);
}
