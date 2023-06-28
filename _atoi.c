#include "main.h"

/**
 * prt_num - prints a number passed to the stdout
 * @args: number of argument
 * Return: the total number of argument passed
 */

int prt_num(va_list args)
{
	int maker;
	int fetch;
	int val_len;
	unsigned int nos;

	maker = va_arg(args, int);
	fetch = 1;
	val_len = 0;

	if (maker < 0)
	{
		val_len += _putchr('-');
		nos = maker * -1;
	}
	else
		nos = maker;

	do {
		fetch *= 10;
	} while (nos / fetch > 9);

	do {
		val_len += _putchr(nos / fetch + '0');
		nos %= fetch;
		fetch /= 10;
	} while (fetch != 0);

	return (val_len);
}

/**
 * prt_unsigned_num - prints an unsigned number
 * @zn: unsigned integer
 * Return: returns the total number of unsigned integer passed
 */

int prt_unsigned_num(unsigned int zn)
{
	int fetch;
	int val_len;
	unsigned int nos;

	fetch = 1;
	val_len = 0;

	nos = zn;

	do {
		fetch *= 10;
	} while (nos / fetch > 9);

	do {
		val_len += _putchr(nos / fetch + '0');
		nos %= fetch;
		fetch /= 10;
	} while (fetch != 0);

	return (val_len);
}

/**
 * prt_chr - prints character
 * @args: the number of arguments
 * Return: return the total number of character passed
 */

int prt_chr(va_list args)
{
	char mars;

	mars = va_arg(args, int);
	_putchr(mars);
	return (1);
}
