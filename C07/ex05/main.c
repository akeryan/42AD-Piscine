#include <stdio.h>
#include <string.h>

char *ft_split(char *, char *);
int calc_size(char *, char *);
int is_there(char, char *);

int main()
{
	char **ptr;
	char s1[] = "the sun is shining";
	char s2[] = "n ";
	
	ptr = ft_split(s1, s2);	
	return (0);
}

