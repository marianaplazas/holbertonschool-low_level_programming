#include <unistd.h>
/** _putchar - writes the character c to standard out
 *
 * @c: the character to print
 *
 * Return: On succes 1.
 * On error -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
