#include "main.h"

/**
 * printf_reverse - handles r specifier
 * @args: no. of arguments
 * @printed: printed characters
 * Return: printed characters
 */

int printf_reverse(va_list args, int printed)
{
	char *str = va_arg(args, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		printed++;
	}

	return (printed);
}
