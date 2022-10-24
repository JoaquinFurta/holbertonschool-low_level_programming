#include "main.h"
/**
 * string_nconcat - concatenates two strings with  n bytes of s2
 * @s1: string1
 * @s2: string2
 * @n: bytes of s2 to print
 * Return: Returns NULL if it fails, Returns a pointer if succed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
	{
		s2 = "";
		n = 0;
	}

	while (s2[i++])
		len2++;

	if (n >= len2)
		n = len2;
	i = 0;

	while (s1[i++])
		len1++;

	p = malloc(len1 + n + 1);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < len1; i++)
		p[i] = s1[i];


	for (i = 0; i < n; i++)
		p[i + len1] = s2[i];
	
	p[len1 + n] = '\0';

	return (p);
}
