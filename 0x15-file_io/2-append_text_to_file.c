#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of file
 * @filename: the file name
 * @text_content: the content of the text file
 * Return: 1 on succes and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ap, g, h = 0;

	if (!filename)
	{
		return (-1);
	}
	ap = open(filename, O_WRONLY | O_APPEND);
	if (ap < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[h])
		{
			h++;
		}
		g = write(ap, text_content, h);
		if (g != h)
		{
			return (-1);
		}
	}
	close(ap);
	return (1);
}
