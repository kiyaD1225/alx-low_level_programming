#include "holberton.h"
/**
 * print_alphabet_x10 -repeats the print_alphabet 10times.
 *return: Nothing.
 */
void print_alphabet_x10(void)
{
	int 1;
	char c;
	for(1=0;1<10;++1)
	{
		for(c='a';c<='z';c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
