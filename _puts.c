#include "main.h"

int _puts(char *str)
{
	for (; *str; str++)
			_putchar(*str);
}
