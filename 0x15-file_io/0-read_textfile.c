#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t jv;
	ssize_t s;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (jv == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(jv, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(jv);
	return (s);
}
