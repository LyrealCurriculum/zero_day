#include "main.h"

/**
 * printf_unsigned - handles u specifier
 * @num: no. of arguments
 * @printed: printed characters
 * Return: printed characters
 */

int printf_unsigned(unsigned int num, int printed)
{
	int digits = 0;
	unsigned int temp = num;

	do {
		digits++;
		temp /= 10;
	} while (temp != 0);

	if (num == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		char unsigned_str[11];
		int i = 0;

		while (num != 0)
		{
			unsigned_str[i] = (num % 10) + '0';
			num /= 10;
			i++;
		}
		for (i = digits - 1; i >= 0; i--)
		{
			_putchar(unsigned_str[i]);
			printed++;
		}
	}
	return (printed);
}

/**
 * printf_octal - handles o specifier
 * @num: no. of arguments
 * @printed: printed characters
 * Return: printed characters
 */

int printf_octal(unsigned int num, int printed)
{
	int oct[100], i = 0, j;

	while (num != 0)
	{
		int remainder = num % 8;

		oct[i] = 48 + remainder;
		i++;
		num /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(oct[j]);
			printed++;
		}
	}
	return (printed);
}

/**
 * _x - handles x & X specifiers
 * @num: no. of arguments
 * @printed: printed characters
 * @uppercase: uppercase equivalent
 * Return: printed characters
 */

int _x(unsigned int num, int printed, int uppercase)
{
	int hex[100], i = 0, j;

	while (num != 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
		{
			hex[i] = 48 + remainder;
		}
		else
		{
			if (uppercase)
			{
				hex[i] = 65 + (remainder - 10);
			}
			else
			{
				hex[i] = 97 + (remainder - 10);
			}
		}
		i++;
		num /= 16;
	}
	if (i == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(hex[j]);
			printed++;
		}
	}
	return (printed);
}
