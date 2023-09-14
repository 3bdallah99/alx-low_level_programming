#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - to print no of arr , size action
 * @array: the integer to print
 * @size: goood
 * @action: to know
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
