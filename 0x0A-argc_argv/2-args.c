#include <stdio.h>
#include "main.h"
/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void)argc;
int i;
 for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}