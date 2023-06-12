#include "main.h"
/**
 * read_textfile -  reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rbytes, wbytes;
	FILE *f;
	char *fbuffer;

	if (filename == NULL)
		return (0);
	f = fopen(filename, "r");
	if (f == NULL)
	{
		return (0);
	}
	fbuffer = (char *)malloc((letters + 1) * sizeof(char));
	if (fbuffer == NULL)
	{
		fclose(f);
		return (0);
	}
	rbytes = fread(fbuffer, sizeof(char), letters, f);
	if (rbytes <= 0)
	{
		free(fbuffer);
		fclose(f);
		return (0);
	}
	wbytes = write(STDOUT_FILENO, fbuffer, rbytes);
	if (wbytes != rbytes)
	{
		free(fbuffer);
		fclose(f);
		return (0);
	}
	free(fbuffer);
	fclose(f);
	return (wbytes);
}
