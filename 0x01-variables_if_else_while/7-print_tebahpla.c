#include <stdio>
/**
 * main -  program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * return: zero if the app ready
 */
int main(void)
{
int ch;
for (ch = 122; ch >= 97; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
