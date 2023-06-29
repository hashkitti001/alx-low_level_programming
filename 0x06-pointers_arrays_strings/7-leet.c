#include <stdio.h>

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";
	int i, j;

	while (*ptr != '\0')
	{
		i = 0;
		while (leet_chars[i] != '\0')
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_replacements[i];
				break;
			}
			i++;
		}
		ptr++;
	}

	return str;
}
