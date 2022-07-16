#include "main.h"

void _puts(char *str)
{
	for (; *str; str++)
			_putchar(*str);
}
