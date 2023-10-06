#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
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

