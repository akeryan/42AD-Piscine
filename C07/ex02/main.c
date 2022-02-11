#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **, int, int);

int main(int argc, char **argv)
{
	int t;
	int *tt;
	int **range;
	int s;
	int i;

	i = 0;
	t = 0;
	tt = &t;
	range = &tt;
	//int i = 0;

	(void)argc;
	s = ft_ultimate_range(range, atoi(&argv[1][0]), atoi(&argv[2][0]));
	
	while(i < s){
		printf("%d ", range[0][i]);
		i++;
	}
	printf("\n%d\n", s);

	return (0);
}
