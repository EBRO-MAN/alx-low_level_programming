#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * gc: The character to print
 * Returns: On sucess 1.
 * On error, -1 is returned, and erno is set appropriately.
 */

int _putchar(char c)

{

        return (write(1, &c, 1));

}
