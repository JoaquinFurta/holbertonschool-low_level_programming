#include "main.h"
/**
 * rev_string - xd
 * @s : des
 */
void rev_string(char *s)
{
	int i;
	int contador;
	char var;

	contador = 0;

	for (i = 0 ; s[i] != '\0'; i++)
		contador++;
	i = 0;
	contador--;
	while (contador > i)
	{
		var = s[contador];
		s[contador] = s[i];
		s[i] = var;
		i--;
		contador++;
	}
}
