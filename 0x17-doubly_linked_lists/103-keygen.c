#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  The entry point of program
 * Generates and prints keygens for the crackme5.
 * executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char keygen[7], *_Codes;
	int _Len = strlen(argv[1]), x, tmp;

	_Codes = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (_Len ^ 59) & 63;
	keygen[0] = _Codes[tmp];

	tmp = 0;
	for (x = 0; x < _Len; x++)
		tmp += argv[1][x];
	keygen[1] = _Codes[(tmp ^ 79) & 63];

	tmp = 1;
	for (x = 0; x < _Len; x++)
		tmp *= argv[1][x];
	keygen[2] = _Codes[(tmp ^ 85) & 63];

	tmp = 0;
	for (x = 0; x < _Len; x++)
	{
		if (argv[1][x] > tmp)
			tmp = argv[1][x];
	}
	srand(tmp ^ 14);
	keygen[3] = _Codes[rand() & 63];

	tmp = 0;
	for (x = 0; x < _Len; x++)
		tmp += (argv[1][x] * argv[1][x]);
	keygen[4] = _Codes[(tmp ^ 239) & 63];

	for (x = 0; x < argv[1][0]; x++)
		tmp = rand();
	keygen[5] = _Codes[(tmp ^ 229) & 63];

	keygen[6] = '\0';
	printf("%s", keygen);
	return (0);
}
