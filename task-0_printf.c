#include "main.h"

/**
* _printf - check code
* @format: producing format
* Use printf to print
* Return number of character
**/

int _printf(const char *format, ...)
{
	char *str;
 	char c;
	const char *ap;

	va_list argu;
	va_start(argu, format);
	for (ap = format; *ap != '\0'; ap++)
	{
		if (*ap == '%')
		{
			ap++;
			switch (*ap) {
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
	}

	va_end(argu);
	return (*ap);
}

