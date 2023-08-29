#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int num;
int x, y, z;

x = 0;
while (s[x] != '\0')
{
z = 0;
for (y = 0; accept[y] != '\0'; y++)
{
if (s[x] == accept[y])
{
z = 1;
}
}
y = 0;
if (z == 0)
break;
num++;
x++;
}
return (x);
}
