#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename : the file name
 * @text_content : the content of the text file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int re, a, b = 0;

	if (!filename)
	{
		return (-1);
	}
	re = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (re < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[b])
		{
			b++;
		}
		a = write(re, text_content, b);
		if (a != b)
		{
			return (-1);
		}
	}
		close(re);

		return (1);
}
