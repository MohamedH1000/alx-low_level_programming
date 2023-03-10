/**
 * _memcpy - cope number of bytes from the memory
 * @dest : the place to have the string copied
 * @src : the place from which we cope the string from
 * @n : number of bytes to copy from the source
 * Return: pointer to the start of the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;
	char *beg = dest;

	while (a < n)
	{
		*dest++ = *src++;
		a++;
	}
	return (beg);
}
