#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print numbers 0 to 9 on one line
 * Return: 0
 */
int main(void)
{
int c;

for (c = 0; c < 9; ++c)
putchar(c);

putchar('\n');

return (0);
}

