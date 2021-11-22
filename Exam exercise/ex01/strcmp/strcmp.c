/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);*/

#include <stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;

	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}
int main()
{
	char s1[4];
	char *s2;

	s2 = "abc";
	ft_strcpy(s1,s2);
	printf("%s", s1);
}


