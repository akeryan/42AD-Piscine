#include <string.h>
#include <stdio.h>

int check_rest(char *str, char *to_find)
{
	int i;
	i = 0;
	
	while(to_find[i] != '\0')
	{
		if(str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}
	
		

char *ft_strstr(char *str, char *to_find)
{
	int i;

	if(to_find[0] == '\0')
		return str;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		   if(check_rest(&str[i], to_find) == 1)
			   return (&str[i]);			
		i++;
	}

	return (0);
}


int main(void)
{
	char a;
	char str1[] = "Aram Keryan";
	char str2[] = "rya";

	a = *ft_strstr(str1, str2);

	printf("%c\n", a);

	return (0);
}
