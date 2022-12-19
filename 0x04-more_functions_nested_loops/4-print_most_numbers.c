#include "main.h"

/**
 * print_most_numbers - prints numbers exluding 2 and 4
 *
 * Return: void. no return.
*/

void print_most_numbers(void)
{
int i = 0;

for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
continue;
}
_putchar(i);
}
_putchar('\n');
}
