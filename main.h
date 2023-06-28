#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>
#include <stddef.h>


/**
 * struct oops - defines the structure of the functions 
 * and other parameter (symbols)
 * @sys: is the opeators of the struct
 * @f: the function of the struct
 */

struct oops
{
	char *sys;
	int (*fin)(va_list);
};
typedef struct oops oops_t;


int _putchr(char z);
int _printf(const char *format, ...);
void _vprintf(const char *format, va_list args);
int pars(const char *format, oops_t funs_list[], va_list args);
int prt_chr(va_list);
int prt_str(va_list args);
int prt_cent(va_list);
int prt_unsgined_num(unsigned int zn);
int prt_num(va_list);
int prt_int(va_list);

#endif
