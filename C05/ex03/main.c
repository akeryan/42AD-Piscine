#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power);

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_recursive_power(atoi(&argv[1][0]), atoi(&argv[2][0])));
	return (0);
}
