#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * _printf - receive the main string and all arguments
 * to print a formated string
 * @format: string containing all the desired characters
 * Return: the number of characters printed (without the null byte)
 */

int _printf(const char *format, ...)
{
	int printed_chars;

	convert_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{"u", unsigned_int},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL},
	};
	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(arg_list, format);
	/*call parser function*/
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
