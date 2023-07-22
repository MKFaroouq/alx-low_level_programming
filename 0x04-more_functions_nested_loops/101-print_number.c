#include "main.h"

/**
 * print_number - func prints an intger .
 *
 * @n: The ineger to be printed.
 *
 * Return:Always 0
 */

void print_number (int n )
{
	unsigned int i = n;

	/*first check if its negative*/
	if (n < 0) 
	{
		_putchar(45);
		i = -i ;
	}
	
	/*print the first few digits*/
	if ( i / 10 )
	{
		print_number(i / 10);
	}
	/*print the last digits*/
	_putchar(i % 10 + '0')'
}	
