#include "main.h"
#include <stdint.h>

/**
 * _printf - receives a string and other parameters passed to it,
 * and print the formatted string on to the stdout
 * @format: a contains a string  passed to it
 * Return: returns the total amount of of character passed
 */

int _printf(const char *format, ...)
{
	int print_chrs;

	oops_t funs_list[] =	{
		{"c", prt_chr},
		{"s", prt_str},
		{"%", prt_cent},
		{"d", prt_int},
		{"i", prt_int},
		{NULL, NULL}
	};

	va_list args;


	if (format == NULL)
		return (-1);

	va_start(args, format);


	print_chrs = pars(format, funs_list, args);
	va_end(args);

	return (print_chrs);
}

