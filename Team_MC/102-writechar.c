#include "main.h"
#include <unistd.h>

/**
 * _putchar - outputs character
 * @character: character
 * Return: Return: 1, success; -1, error
 * Description: uses local buffer of 1024 chars to call write
 * as little as possible
 */
int _putchar(char character)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - outputs string
 * @str: pointer to string
 * Return: no. of chars
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
