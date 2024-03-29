#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on sucess -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, result;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		result = write(file, text_content, strlen(text_content));
		if (result == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
