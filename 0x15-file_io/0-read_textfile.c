#include "main.h"

/**
 * read_textfile - read textfile
 * @filename: the filename
 * @letters: number of letters in file
 * Return: the actual number of letters it could read and print
*/



ssize_t read_textfile(const char *filename, size_t letters)
{
	char *BUFFER;
	ssize_t opn, w, t;

	opn = open(filename, O_RDONLY);
	if (opn == -1)
	{
		return (0);
	}

	BUFFER = malloc(sizeof(char) * letters);
	t = read(opn, BUFFER, letters);
	w = write(STDOUT_FILENO, BUFFER, t);

	free(BUFFER);
	close(opn);
	return (w);
}
