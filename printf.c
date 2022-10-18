#include "main.h"
/**
 * _printf- writes paramenters to output
 * @format: represent a format specifier
 *
 * Return: returns the size val in int form
 */
int _printf(const char *format, ...)
{
	st_fmt st_format[] = {
		{"c", func_char},
		{"s", func_string},
		{"d", func_digit},
		{"i", func_digit},
		{"%", func_percent},
		{"b", func_binary_convert},
		{"u", func_unsig_int},
		{"o", func_octal_convert},
		{"x", func_hex_Lowcase_convert},
		{"X", func_hex_Upcase_convert},
		{"S", func_stringUppercase},
		{"r", func_revstr},
		{"R", func_rot13},
		{NULL, NULL}};

	va_list args;
	int i = 0;

	va_start(args, format);
	i  =	get_match_func(format, args, st_format);
	va_end(args);
	return (i);
}
