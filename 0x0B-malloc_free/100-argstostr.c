#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all arguments of program
 * @ac: argument count
 * @av: point to pointer to arguments
 * Return: pointer to new string or NULL if failed
 */
char *argstostr(int ac, char **av)
{
	int i, k, n, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
			;
		size += k + 1;
	}
	str = malloc(size + 1);
	if (str == 0)
		return (NULL);
	n = 0;
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			str[n] = av[i][k];
			n++;
		}
		str[n] = '\n';
		n++;
	}
	return (str);
}

