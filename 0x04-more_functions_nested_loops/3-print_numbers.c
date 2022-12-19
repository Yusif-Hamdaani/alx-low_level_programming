#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Return: always 0.
*/
void print_numbers(void);
{
int c;

c = 0;
while (c < 10)
{
_putchar (c + '0');
c++;
}
_putchar('\n');
}
