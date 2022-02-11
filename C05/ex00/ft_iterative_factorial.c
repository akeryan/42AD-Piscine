#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb){
	int result;

	result = 1;

	if (nb < 0)
		return (0);

	if (nb == 1 || nb == 0)
		return (1);

	while(nb > 1)
	{
		result *= nb;
		nb--;
	}
	return result;
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_iterative_factorial(atoi(&argv[1][0])));

	return (0);
}
