#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdo
 * @filename: name of the file that is to be read
 * @letters: number of letters to be read and printed
 * Return: number of letters to be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t nr, nw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	nr = read(file_d, buffer, letters);
	close(file_d);
	if (nr == -1)
	{
		free(buffer);
		return (0);
	}
	nw = write(STDOUT_FILENO, buffer, nr);
	free(buffer);
	if (nr != nw)
		return (0);
	return (nw);
}
