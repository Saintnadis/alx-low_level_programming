#include "main.h"
/**
 * print_alphabet - Entry point
 * Descriptions: a fxn to print alphabet
 * Return: void
 */
void print_aphabet(void)
{
	char letters = 'a';

	while (letters <= 'z');
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n')
