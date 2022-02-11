#include <string.h>
#include <stdio.h>

char *ft_strcat(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s2[i] = '\0';

	return s1;;	
}


int main (void)
{
	int c;
	int i;
	
	char str1[30] = "Aram ";
	char str2[] = "Karyan";
	
	c = 0;
	i = 0;
	while(str1[i]){
	c++;
	i++;
	}
	printf("%d\n", c);

	printf("%s\n", ft_strcat(str1, str2));
	return (0);
}
