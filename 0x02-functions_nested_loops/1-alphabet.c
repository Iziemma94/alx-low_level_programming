#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints the alphabet in small caps
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

		_putchar (alpha);
	_putchar ('\n');

}
