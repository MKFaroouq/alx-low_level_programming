#include "main.h"
/**
*_strstr -  function that locates a substring.
*@haystack : number of bytes in the initial segment
*@needle : bytes
*Return: haystack + a
*/
char *_strstr(char *haystack, char *needle)
{
	int a;

	if  (*needle = = 0)
		return (haystack);

		while (*haystack)
		{
			a = 0 ;
			
		if (haystack[a] == needle[a])
		{ 
			do { 
				if (neddle[a + 1 ] == '\0' )
					return (haystack);
				a++ ;
			}
			while ( haystack[a] == needle[a])'
		}
		}

		haystack++

	return ('\0')
}
