#include <stdio.h>
/**
 * main - entry point
 * Return: eachtime 0 (Success)
 */

int main(void)
{
int ones = 0;
int tens = 0;
int hundreds = 0;
for (hundreds = 0; hundreds <= 9; hundreds++)
{
for (tens = 0; tens <= 9; tens++)
{
for (ones = 0; ones <= 9; ones++)
{
if ((ones > tens) && (tens > hundreds))
{
putchar(hundreds + 48);
putchar(tens + 48);
putchar(ones + 48);
if (ones + tens + hundreds != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
