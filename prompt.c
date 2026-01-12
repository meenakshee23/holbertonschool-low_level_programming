#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *line = NULL;
	size_t len = 0;

	printf("$");
	getline(&line, &len, stdin);
	printf("%s", line);

	free(line);
	return (0);
}

