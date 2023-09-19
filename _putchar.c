#include <stdio.h>
#include <main.h>
#include <unistd.h>
/**
 * _putchar - writes the char to stdio
 * @c: the char
 * Return: On Success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
