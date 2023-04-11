#include "main.h"
/**
 * main - Entry point
 * @argc : the number of arguments passed to the function
 * @argv : an array of argument passed to the function
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int cpr, cpw, a, b, c;
	char sz[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cpr = open(argv[1], O_RDONLY);
		if (cpr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	cpw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((a = read(cpr, sz, BUFSIZ)) > 0)
	{
		if (cpw < 0 || write(cpw, sz, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(cpr);
			exit(99);
		}
	}
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	b = close(cpr);
	c = close(cpw);
	if (b < 0 || c < 0)
	{
		if (b < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cpr);
		}
		if (c < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cpw);
		}
		exit(100);
	}
	return (0);
}
