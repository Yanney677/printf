#include <unistd.h>
#include <stdio.h>

/**
 * _putchr - write a character to the  stdout
 * @z: character
 *
 * Return: always 1 on success, otherwise -1 on error
 */
int _putchr(char z)
{
	return (write(1, &z, 1));
}
