#include <stdlib.h>
#include <string.h>
/**
 *strtow - a function that splits a string into words.
 *@str: string
 *Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, k, l, len, count = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (str[i])
		if (str[i++] != ' ' && (i == 1 || str[i - 2] == ' '))
			count++;
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		if (str[i++] != ' ' && (i == 1 || str[i - 2] == ' '))
		{
			k = i;
			while (str[k] && str[k++] != ' ')
				len = k - i;
			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
				return (NULL);
			for (l = 0; l < len; l++)
				words[j][l] = str[i + l - 1];
			words[j++][len] = '\0';
		}
	words[j] = NULL;
	return (words);
}
