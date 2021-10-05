#include "main.h"

/**
 * print_char - prints character
 * @list: list of parameters
 * Return: amount of characters printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints a string
 * @list: list of parameters
 * Return: Amount of characters printed
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
 * print_percent - prints the percent symbol
 * @list: list or parameters
 * Return: number of characters printed
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_int - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_int(va_list list)
{
	int num_length;

	num_length = print_num(list);
	return (num_length);
}
