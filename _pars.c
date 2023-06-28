#include "main.h"

/**
 * pars - receives strings and other parameters passed to it,
 * and prints it to the stdout
 * @format: contains string of characters passed to it
 * @funs_list: an array of functions
 * @args: number of argument passed
 * Return: the total amount of characters passed
 */

int pars(const char *format, oops_t funs_list[], va_list args)
{
	int sn, ca, rad_val, print_chrs;

	print_chrs = 0;
	sn = 0;
	do {
		if (format[sn] == '%')
		{
		ca = 0;
		do {
			if (format[sn + 1] == funs_list[ca].sys[0])
			{
				rad_val = funs_list[ca].fin(args);
				if (rad_val == -1)
					return (-1);
				print_chrs += rad_val;
				break;
			} ca++;
		} while (funs_list[ca].sys != NULL);
	if (funs_list[ca].sys == NULL && format[sn + 1] != ' ')
	{
		if (format[sn + 1] != '\0')
		{
			_putchr(format[sn]);
			_putchr(format[sn + 1]);
			print_chrs += 2;
		}
		else
			return (-1);
	} sn++;
		}
		else
	{
		_putchr(format[sn]);
		print_chrs++;
	} sn++;

	} while (format[sn] != '\0');

	return (print_chrs);
}
