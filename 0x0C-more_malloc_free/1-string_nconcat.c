#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*string_nconcat - function that concatenates two strings.
*@s1: string 1
*@s2: string 2
*@n: size of malloc memory
*Return: pointer to the malloc memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int sizeS1;
	unsigned int sizeS2;
	unsigned int x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	sizeS1 = strlen(s1);
	sizeS2 = strlen(s2);

	if (n > sizeS2)
		n = sizeS2;
	t = malloc(sizeS1 + n + 1);

	if (t == NULL)
		return (NULL);

	for (x = 0; x < (sizeS1 + n); x++)
		if (x < sizeS1)
		{
			t[x] = s1[x];
		}
		else
		{
			t[x] = s2[x - sizeS1];
		}
	*(t + x) = '\0';
	return (t);
}
