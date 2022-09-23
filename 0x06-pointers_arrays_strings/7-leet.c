#include "main.h"

/** 
 * leet - function that encode a string
 * @s: string array
 * Return: s
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 97 || s[i] == 65)
			s[i] = '4';
		if (s[i] == 101 || s[i] == 69)
			s[i] = '3';
		if (s[i] == 111 || s[i] == 79)
			s[i] = '0';
		if (s[i] == 116 || s[i] == 84)
			s[i] = '7';
		if (s[i] == 108 || s[i] == 76)
			s[i] = '1';
	}

	return (s);
}
