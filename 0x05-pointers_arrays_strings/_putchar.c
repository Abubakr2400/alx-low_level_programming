#include <unistd.h>
<<<<<<< HEAD
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
=======

/**
 * _putchar -writes the character c to stdout
 * @c: The character tp print
 *
 * Return: on success 1.
 * on error, -1 is returned, and error is set appropriately.
 */

int _putchar (char c)
{
	return (write(1, &c, 1 ));
>>>>>>> 7d6719b8aa737815ffe110f8ffb890c412dc1d72
}
