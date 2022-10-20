#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: Returns NULL if it fails, Returns a pointer if succed
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[i++])
		len1++;
	i = 0;

	while (s2[i++])
		len2++;

	p = malloc(len1 + len2);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (i = 0; i < len2; i++)
		p[i + len1] = s2[i];

	return (p);
}
