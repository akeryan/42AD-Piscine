#include <stdio.h>

void	 to_lowercase(char *c)
{
	if(*c >= 'A' && *c <= 'Z')
	*c += 32;
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		to_lowercase(&str[i]);
		i++;
	}
	return (str);
}

int main (void)
{
	char str[] = ";ALSKDJF";
	ft_strlowcase(str);
	printf("%s\n", str); 
	return (0);
}
