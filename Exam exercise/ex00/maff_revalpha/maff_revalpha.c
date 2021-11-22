/*Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$*/

#include <unistd.h>

int main ()
{
	char z;
	char Y;

	z = 122;
	Y = 89;

	while (Y != 63)
	{
		write (1, &z, 1);
		write (1, &Y, 1);
		z -= 2;
		Y -= 2;
	}
	write(1, "\n", 1);
}

