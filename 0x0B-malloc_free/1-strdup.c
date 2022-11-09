#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * with a copy of the string
 * @str: string to have as a copy
 * Return: pointer to duplicated string or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		;
	s = malloc(i + 1);
	if (s == 0 || s == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		;
	{
		s[i] = *(str + i);
	}
	s[i] = *(str + i);
	return (s);
}
