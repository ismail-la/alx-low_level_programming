#include <unistd.h>
#include <string.h>

void _puts(char *str);
int _putchar(char c);
void myStartupFun(void) __attribute__ ((destructor));

int printf(__attribute__ ((unused)) const char *fmt, ...)
{
return -1;
}

int puts(__attribute__ ((unused)) const char *str)
{
return 0;
}

/**
 * myStartupFun - print win message
 */
void myStartupFun (void)
{
_puts("9 8 10 24 75 - 9");
_puts("Congratulations, you win the Jackpot!");
}

/**
 * _putchar - writes c to stdout
 * @c: character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 *
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}



/**
 * _puts - function prints passed string to stdout.
 *
 * @str: String to print
 *
 */
void _puts(char *str)
{
int x = 0;
char ct = str[0];

while (ct != '\0')
{
_putchar(ct);
x++;
ct = str[x];
}

_putchar('\n');
}
