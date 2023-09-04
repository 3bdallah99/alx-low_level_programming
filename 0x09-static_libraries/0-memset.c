#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory char
 * @b: constant
 * @n: no of bytes to be changed
 *
 * Return: changed array with new value for n
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}