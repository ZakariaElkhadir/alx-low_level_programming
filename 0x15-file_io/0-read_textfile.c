#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int jv;
	char buf[read_buf_size * 8];
	ssize_t bytes;

	if (!filename || !letters)
		return (0);
	jv = open(filename, O_RDONLY);
	if (jv == -1)
		return (0);
	bytes = read(jv, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(jv);
	return (bytes);
}
