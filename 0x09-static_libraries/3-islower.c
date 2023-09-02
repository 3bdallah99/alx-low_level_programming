#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: checks input of function
 * Discription: function that checks for lowercase character.
 *
 * Return: no return
*/

int _islower(int c)
{
return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
