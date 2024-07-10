#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_name - printing a name
 * @name: printing this name
 * @f: pointer that points the function
 *
 *
 */

void print_name(char *name, void (*f)(char *))

{
	if (name != NULL && f != NULL)
		f(name);
}
