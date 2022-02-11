#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while(s1[i] && s2[i] && (n-- != 0))
	{
		if(s1[i] != s2[i])
			break;
		i++;
	}
			
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);	
}


int main (void)
{
	char str1[] = "Aram Keryan";
	char str2[] = "Aram Karyan";
	printf("%d\n", ft_strncmp(str1, str2,10));
	return (0);
}
