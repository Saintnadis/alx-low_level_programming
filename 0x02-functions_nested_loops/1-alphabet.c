#include "main.h"
/**
 * print_alphabet - Entry point
 * Descriptions: a fxn to print alphabet
 * Return: void
 */
void print_aphabet(void)
{
	char letters;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letters);
	}
	_putchar('\n');
