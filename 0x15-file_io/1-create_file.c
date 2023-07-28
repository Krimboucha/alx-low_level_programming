#include "main.h"

/**
 * read_textfile - reads from file and print it
 * @filename: the name of file
 * @character: nos of letter
 * Return: the number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t character)
{
	int fd;
	int i, y;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * character);
	if (!buffer)
		return (0);
	i = read(fd, buffer, character);
	if (i < 0)
	{
		free(buffer);
		printf("File name not found");
		return (0);
	}
	buffer[i] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, buffer, i);
	if (y < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (y);
}
