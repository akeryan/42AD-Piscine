#include <stdio.h>

int		is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	if (!*str)
		return (1);
	i = 0;
	while (str[i])
	{
		if (is_lower(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char str[] = "sdfghsdg";

	printf("%d\n", ft_str_is_alpha(str)); 
	return (0);
}
