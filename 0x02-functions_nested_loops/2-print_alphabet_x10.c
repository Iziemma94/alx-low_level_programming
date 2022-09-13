#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * Description:print the alphabet in lowercase x10.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int alphax10;
	char alphax;

	alphax10 = 0;
	while (alphax10 < 10)
	{
		for (alphax = 'a'; alphax <= 'z'; alphax++)

			_putchar (alphax);
		alphax10++;
		_putchar ('\n');
	}
}
