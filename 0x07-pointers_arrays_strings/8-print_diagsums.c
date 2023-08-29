#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @d: input
 * @size: input
 * Return: Always 0 (Success)
 */


void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int x = 0;

for (x = 0; x < size; x++)
{
sum1 += a[x * size + x];
sum2 += a[x * size + (size - 1 - x)];
}
printf("%d, %d\n", sum1, sum2);

}
