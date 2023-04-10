#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it
 * @filename : the file that we need to read
 * @letters : the number of letter it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int re;
	char *sz;
	int a, b;
	if (!filename)
	{
		return (0);
	}
	re = open(filename, O_RDONLY);
	if (re < 0)
	{
		return (0);
	}
	sz = malloc(sizeof(char) * letters);
	if (!sz)
	{
		return (0);
	}
	a = read(re, sz, letters);
	if (a < 0)
	{
		free(sz);
		return (0);
	}
	sz[a] = '\0';
	close(re);
	b = write(STDOUT_FILENO, sz, a);
		if (b < 0)
		{
			free(sz);
			return (0);
		}
	free(sz);
	return (b);
}
