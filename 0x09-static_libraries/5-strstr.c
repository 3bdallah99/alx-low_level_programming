#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
unsigned int x = 0, y = 0;

while (haystack[x])
{
while (needle[y] && (haystack[x] == needle[0]))
{
if (haystack[x + y] == needle[y])
y++;
else
break;
}
if (needle[y])
{
x++;
y = 0;
}
else
return (haystack + x);
}
return (0);
}
