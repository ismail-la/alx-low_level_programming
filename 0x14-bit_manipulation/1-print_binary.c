#include "main.h"

/**
 * print_binary - function that prints the binary equivalent
 * of a decimal number
 * @n: unsigned long int number to print
 *
 * Return: no return
 */
void print_binary(unsigned long int n)
{
int i;
int len_cont = 0;
unsigned long int mask_curr;

for (i = 63; i >= 0; i--)
{
mask_curr = n >> i;

if (mask_curr & 1)
{
_putchar('1');
len_cont++;
}
else if (len_cont)
_putchar('0');
}
if (!len_cont)
_putchar('0');
}
