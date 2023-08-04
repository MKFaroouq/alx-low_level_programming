#include <stdio.h>
#include "main.h"
/**
 * _find_sqrt - find the sqrt of number
 * @num: the number
 * @root: the root of number
 * Return: sqrt of a number
 */
int _find_sqrt(int num, int root)
{
if (root * root == num)
{
return (root);
}
else if (root * root > num)
{
return (-1);
}
return (_find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 1)
{
return (1);
}
return (_find_sqrt(n, 1));
}
