#include "main.h"
/**
 * _isdigit.c - to check for a digit (0 through 9)
 *
 * @c: input char alphapet
 *
 * Return - 1 or 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
