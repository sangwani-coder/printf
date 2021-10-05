#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * struct convert - defines a struct for sumbols and functions
 *
 * @sym: The operator
 * @f: the function associated to symbol
 */

typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} convert_t;

/*Main functions*/
int parser(const char *format, convert_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_num(va_list);
#endif
