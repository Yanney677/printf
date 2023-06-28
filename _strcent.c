#include "main.h"

/**
 * prt_str - prints a string on to the stdout
 * @args: the number of arguments
 * Return: return the total number of character passed
 */

int prt_str(va_list args)
{
	int mee;
	const char *see;

	see = va_arg(args, const char *);
	if (see == NULL)
	see = "(null)";
	mee = 0;

	do {
		_putchr(see[mee]);
		mee++;
	}

	while (see[mee] != '\0');

	return (mee);
}

/**
 * prt_cent - prints % symbol to the stdout
 * @args: the number of arguments passed
 * Return: returns the number of argument passed
 */

int prt_cent(__attribute__((unused)) va_list args)
{
	_putchr('%');
	return (1);
}

/**
 * prt_int - prints an integer to the stdout
 * prt_num - prints numbers
 * @args: the number of arguments passed
 * Return: returns the number of argument passed
 */

int prt_int(va_list args)
{
	int ar;

	ar = prt_num(args);
	return (ar);
}
