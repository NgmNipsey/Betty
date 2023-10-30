#include "main.h"
#include <stddef.h>

/**
 * read_textfile - function that write text file and
 * print it to POSIX.
 * @filename: Pointer.
 * @letters: sizes.
 *
 * Return: size.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b_read, b_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	b_read = read(fd, buffer, letters);
	if (b_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	b_written = write(STDOUT_FILENO, buffer, b_read);
	if (b_written == -1 || b_written != b_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (b_written);
}
