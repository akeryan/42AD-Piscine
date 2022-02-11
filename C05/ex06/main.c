#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_is_prime(int);

int main(int argc, char **argv)
{
	int n;

	(void)argc;
	n = atoi(&argv[1][0]);
	printf("%d\n", ft_is_prime(n));
	return (0);
}
