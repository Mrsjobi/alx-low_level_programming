#include "main.h"

/**
 * _memcpy - a function that copies memory ares
 * @dest: memory area destination to copy
 * @src: memory area source to cop from
 * @n: number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
