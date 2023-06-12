#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: name of the file to create
 * @text_content:a NULL terminated string to write to the file
 * Return: 1 on success -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int len, file;
	ssize_t wbytes;

	if (filename == NULL)
		return (-1);
	file = fopen(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}
	len = strlen(text_content);
	if (text_content != NULL)
	{
		wbytes = write(file, text_content, len);
		if (wbytes == -1)
		{
			fclose(file);
			return (-1);
		}
	}
	fclose(file);
	return (1);
}
