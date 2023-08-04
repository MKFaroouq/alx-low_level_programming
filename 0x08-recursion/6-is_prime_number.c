#include <stdio.h>
/**
 * check_is_prime - check if the number is prime or not
 * @num: the number which will be checked
 * @index: counter start from two to check number
 * Return: zero if number is not prime
 * one if number is prime
 */
int check_is_prime(int num, int index)
{
if (num % index == 0)
{
return (0);
}
if (index == num / 2)
{
return (1);
}
return (check_is_prime(num, index + 1));
}
/**
 * is_prime_number - return 1 if the number is prime
 * @n: the number will be checked
 * Return: zero if number not prime
 * one if number is prime
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n == 2 || n == 3)
{
return (1);
}
return (check_is_prime(n, 2));
}
