#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content:a NULL terminated string to write to the file
 * Return: 1 on success -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int wrte, len = 0, file;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0_RDWR);
	wrte = (file, text_content, ind);
	if (file == -1 || wrte == -1)
	{
		return (-1);
	}
	close(file);
	return (-1);
}
