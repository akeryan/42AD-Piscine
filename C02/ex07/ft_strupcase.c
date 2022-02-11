#include <stdio.h>

void	 to_uppercase(char *c)
{
	if(*c >= 'a' && *c <= 'z')
	*c -= 32;
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		to_uppercase(&str[i]);
		i++;
	}
	return (str);
}

int main (void)
{
	char str[] = "rssdfkshkafh";
	ft_strupcase(str);
	printf("%s\n", str); 
	return (0);
}
