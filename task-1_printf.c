#include "main.h"

/**
* _printf - check code
* @format: producing format
* Return: number NULL
**/
int _printf(const char *format, ...)
{
	char *str;
    const char *ap;

    va_list argu;

    va_start(argu, format);

    for (ap = format; *ap != '\0'; ap++)
    {
        if (*ap == 'i')
        {
            ap++;
            switch (*ap)
            {
                case 'd':              /* string */
                str = va_arg(argu, char *);
                    puts(str);
                    ap++;
                    break;
                    case 'i':              /* dolar */
                    putchar('i');
                    ap++;
                    break;
            }
        }
        putchar(*ap);
    }

    va_end(argu);
    return (*ap);
}
