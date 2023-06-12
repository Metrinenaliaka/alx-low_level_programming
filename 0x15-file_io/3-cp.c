#include "main.h"
/**
 * main - main function
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	FILE *file_from, *file_to;
	char buffer[BUFFER_SIZE];
	size_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = fopen(argv[1], "rb");
	if (file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = fopen(argv[2], "wb");
	if (file_to == NULL)
	{
		fclose(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = fread(buffer, 1, sizeof(buffer), file_from)) > 0)
	{
		bytes_written = fwrite(buffer, 1, bytes_read, file_to);
		if (bytes_written != bytes_read)
		{
			fclose(file_from), fclose(file_to);
			dprintf(STDERR_FILENO, "Error: Failed to write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (ferror(file_from) || ferror(file_to))
	{
		fclose(file_from), fclose(file_to);
		dprintf(STDERR_FILENO, "Error: File I/O error occurred\n");
		exit(99);
	}
	fclose(file_from), fclose(file_to);
	return (0);
}
