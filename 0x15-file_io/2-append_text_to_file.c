#include "main.h"
/**
 * _strlen - Returns the length of a string.
 *
 * @s: The string to be measured.
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);

}
int append_text_to_file(const char *filename, char *text_content)
{
	int jv;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	jv = open(filename, O_WRONLY | O_APPEND);
	if (jv == -1)
		return (-1);
	if (len)
		bytes = write(jv, text_content, len);
	close(jv);
	return (bytes == len ? 1 : -1);

}

