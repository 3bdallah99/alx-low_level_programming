#include <stdio.h>
/**
 * main - main func
 * Description: app can find size of almost numirce data type
 * Return: will return 0 if succesd
 */
int main(void)
{
char c;
short int s;
int i;
long int l;
long long int ll;
float f;
double d;
long double ld;
printf("The size of char is %lu bytes.\n", sizeof(c));
printf("The size of short int is %lu bytes.\n", sizeof(s));
printf("The size of int is %lu bytes.\n", sizeof(i));
printf("The size of long int is %lu bytes.\n", sizeof(l));
printf("The size of long long int is %lu bytes.\n", sizeof(ll));
printf("The size of float is %lu bytes.\n", sizeof(f));
printf("The size of double is %lu bytes.\n", sizeof(d));
printf("The size of long double is %lu bytes.\n", sizeof(ld));

return (0);
}
