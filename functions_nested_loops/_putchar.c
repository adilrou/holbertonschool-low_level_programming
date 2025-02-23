#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to point
 *
 * return: 1 en cas de succÃs, -1 en cas d'erreur (et errno est difini)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
