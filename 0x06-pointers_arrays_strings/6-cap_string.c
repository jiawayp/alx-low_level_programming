#include "main.h"

/**
 * cap_string - capitalize all string
 * @s: string array
 * Return: sting array (s)
 */

char *cap_string(char *s)
{
	int i = 0;
	int prev;

	while (s[i] != '\0')
	{
		prev = i - 1;
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (i == 0)
				s[i] = s[i] - 32;
			else if (s[prev] >= 9 && s[prev] <= 10)
				s[i] = s[s] - 32;
			else if (s[prev] >= 32 && s[prev] <= 34)
				s[i] = s[i] - 32;
			else if (s[prev] >= 40 && s[prev] <= 41)
				s[i] = s[i] - 32;
			else if (s[prev] == 46)
				s[i] = s[i] - 32;
			else if (s[prev] == 59)
				s[i] = s[i] - 32;
			else if (s[prev] == 123 || s[prev] == 125)
				s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
