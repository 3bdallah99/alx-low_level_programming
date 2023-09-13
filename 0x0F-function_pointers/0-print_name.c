#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - to point to function boda anwar
 * @name: pointer has type char
 * @f: void point
 * return: NONE
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
