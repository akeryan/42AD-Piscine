#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *src);

int main()
{
	//char *str;

	char s1[] = "   8";

	printf("%s\n", ft_strdup(s1));
	printf("%s\n", strdup(s1)); 
	return (0);
}
