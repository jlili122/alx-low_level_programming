#include <stdio.h>
/**
 * main - Prints single-digit numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = 0; number < 10; number++)
{
putchar(number + '0');
}
putchar('\n');
return (0);
}