#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: 0 (success)
 */
void print_chessboard(char (*a)[8])
{
int x = 0;
int y = 0;

for (x = 0; x < 8; x++)
{
for (y = 0; y < 8; y++)
{
_putchar(a[x][y]);
}
_putchar('\n');
}
}
