#include "main.h"
/**
 * print_number - prints an intger .
 *
 * On: The ineger to be printed.
 *
*/

void print_number (int n )
	unsigned int num = n;

	/*first check if its negative*/
	if (n < 0) 
	{
		_putchar('-');
		num = -num ;
	}
	
	/*print the first few digits*/
	if ((bum / 10) > 0 )
		print_number(num/10);

	/*print the last digits*/
	_putchar((num % 10 ) + 48 );	
