#include "main.h"

/**
 * _memcpy - function that fills memory with a constant byte.
 * @dest: the targeted string
 * @src:the string that  will be get
 * @n: the no of bytes to be filled
 * Return: pointer to the memory area
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
