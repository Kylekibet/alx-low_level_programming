#include "main.h"

/**
  * read_textfile - reads a text file and outputs to stdout
  * @filename: file to read
  * @letters: letters to read
  * Return: the number of letters.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	buffer = malloc(sizeof(buffer) * letters);

	if (filename == NULL || buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
