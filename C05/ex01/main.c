#include <stdio.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb);

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_recursive_factorial(atoi(&argv[1][0])));
	return (0);
}
