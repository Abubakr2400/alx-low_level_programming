#include "main.h"
<<<<<<< HEAD
/**
*swap_int - swap two integers
*@a: first integer
*@b: second integer
*Return: nothing
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
=======

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
>>>>>>> 7d6719b8aa737815ffe110f8ffb890c412dc1d72
}
