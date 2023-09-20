#include "main.h"
<<<<<<< HEAD
/**
* _strcpy - Copy paste string
*@dest: destination
*@src: source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int inc = 0;
while (*(src + inc) != '\0')
{
*(dest + inc) = *(src + inc);
inc++;
}
*(dest + inc) = '\0';
return (dest);
}

=======

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
>>>>>>> 7d6719b8aa737815ffe110f8ffb890c412dc1d72
