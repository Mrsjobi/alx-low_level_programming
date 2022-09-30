#include "main.h"

/**
 * _strspn - a function that gets the lenght of a prefix substring.
 * @s: an input string
 * @accept: an input character to locate into string s
 * Return: retuens pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
