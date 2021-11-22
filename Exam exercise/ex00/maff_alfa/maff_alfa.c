/*Assignment name  : maff_alpha
Expected files   : maff_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$*/

#include <unistd.h>
int main()
{
	char a;
	char B;

	a = 97;
	B = 66;

	while (B  != 92 )
	{
		write (1,&a, 1);
		write (1, &B, 1);
		a += 2;
		B += 2;
	}
	write (1, "\n", 1);
}

