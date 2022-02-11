#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main(void)
{
	char str[] = "sf sldfj kk";
	printf("%lu\n", strlen(str));
	printf("%d\n", ft_strlen(str));
	return (0);
}
