/*Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/

#include <unistd.h>

int	main (int argc, char **argv)
{
	int count;
	int j;

	j = 0;
	count = 1;

	if (argc > 1)
	{
		while (argv[1][j] != '\0')
		{
			if (argv[1][j] >= 65 && argv[1][j] <= 90)
			{
				count = (argv[1][j] - 64);
			}
			else if (argv[1][j] >= 97 && argv[1][j] <= 122)
			{
				count = (argv[1][j] - 96);
			}
			while (count > 0)
			{
				write (1, &argv[1][j], 1);
				count--;
			}
			j++;
			count = 1;
		}
		write(1, "\n", 1);
		return(0);
	}
}
