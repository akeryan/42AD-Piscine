#include <stdio.h>

int is_print(char c)
{
	if(c >= 32 && c <= 127)
		return (1);
	return (0);
}

int ft_str_is_printable(char *str)
{
	int i;

	if(!*str)
		return (1);

	i = 0;
	while(str[i])
	{
		if(is_print(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int main (void)
{
	char str[] = "\n";
	printf("%d\n", ft_str_is_printable(str)); 
	return (0);
}
