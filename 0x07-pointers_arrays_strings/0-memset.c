/**
 * _memset - fill number of bytes of memory
 * @s : point to start in memory area
 * @b : constant bytes to full with
 * @n : number of the bytes to fill in
 * Return: pointer to beginning of memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *beg = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (beg);
}
