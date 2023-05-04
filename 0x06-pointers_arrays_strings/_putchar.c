#include <unistd.h>

/**
 * _putchar - Write the characters c to stdout
 * @c: char to be printed
 * Return: 1 on Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
