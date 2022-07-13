#include "main.h"

/**
* _printf - check code
* @format: producing format
* _printf:use printf to print
* Return: number of characters printed
**/
int _printf(const char *format, ...)
{
	char *ap;
	unsinged int = argu_list;

	argu_list format_list[]
	{
		{"c", func_char},
		{"s", printf_string},
		{"%", printf_percetage},
		{"d", printf_decimal},
		{"i", printf_integer},
		{"b", printf_binary},
		{"u", printf_unsigned_int},
		{"0", printf_octal},
		{"x", printf_hexidecimal},
		{"X", print_hex_Uppercase},
		{"S", print_string_Uppercase},
		{"p", printf_integer},
		{"r", printf_string},
		{"R", printf_rot13},
		{NULL, NULL}

		};
	va_list argu_list;

	if ( ap  == NULL || format == NULL)
			return (NULL);

	va_start(argu_list, format);
	*ap = arg_parse(format, argu_list, format_list);
	va_end(argu_list)
		return ('ap');
}
