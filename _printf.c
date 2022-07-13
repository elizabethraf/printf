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
	va_list argu;

	if (ap  == NULL || format == NULL)
		return (NULL);

	va_start(argu, format);

	for ((ap = format; *ap != '\0'; ap++)
	{
		if (*ap == '%')
		{
			ap++;
			+;
			switch (*ap)
			{
				case 's':              /* string */
				str = va_arg(argu, char *);
					puts(str);
					ap++;
					break;
					case '%':              /* dolar */
					putchar('%');
					ap++;
					break;
				case 'c':
				c = va_arg(argu, int);
					putchar(c);
					ap++;
					break;
			}
		}
		putchar(*ap);
	*ap = arg_parse(format, argu_list, format_list);
	va_end(argu_list)
		return ('ap');
		}
}
