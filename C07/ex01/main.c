#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(int argc, char **argv)
{
	int i = 0;
	int size;

	(void)argc;
	int *arr = ft_range(atoi(&argv[1][0]), atoi(&argv[2][0]));
	size = sizeof(arr)/sizeof(arr[0]);
	while(i < 10){
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}
