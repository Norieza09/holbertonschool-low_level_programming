#include "main.h"
/**
 * main- Write a function that draws a straight line in the terminal.
 *@n: the integer
 * Return: Always 0.
 */
void  print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
	_putchar('\n');
	}
	else
	_putchar('\n');
}
