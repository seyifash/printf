#include "main.h"

/**
 * print_cent - prints character % to stdout
 * @args: variadic parameter
 *
 * Return: number of character printed
 */

int print_cent(va_list args)
{
	(void)arg;

	write(1, "%", 1);

	return (1);
}
