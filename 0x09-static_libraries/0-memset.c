#include "main.h"

/**
 * _memset - a function that fills a memory with constant bytes
 * @s: locationn ti fill
 * @b: char to fill location with
 * @n: number if bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
