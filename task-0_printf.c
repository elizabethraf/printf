#include "main.h"

/**
* _printf - check code
* @format: producing format
* Use printf to print
* Return number of character
**/

int _printf(const char *format, ...)
{
	va_list argu;
	char *str;
	char c, dlr;
	const char *ap;

	va_start(argu, format);
	for (ap = format; *ap != '\0'; ap++)
	{
		while (*ap != '%')
		{
			putchar(*ap);
			ap++;
		}
		ap++;

		switch (*ap++) {
			case 's':              /* string */
				str = va_arg(argu, char *);
				while (*str !=  '\0')
					putchar(*str++);
			   break;
			case '%':              /* int */
			   dlr = va_arg(argu, int);
			   putchar(dlr);
			   break;
			case 'c':
			   c = (char) va_arg(argu, int);
			   putchar(c);
			   break;
		}
	}

	va_end(argu);
	return (*ap);
}

