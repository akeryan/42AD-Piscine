#include <stdio.h>
#include <stdlib.h>

int ft_iterative_power(int nb, int power);

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_iterative_power(atoi(&argv[1][0]), atoi(&argv[2][0])));

	return (0);
}
