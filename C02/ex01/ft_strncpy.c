#include <unistd.h>
#include <string.h>
#include <stdio.h>
	
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n )
	{
		if(!src[i])
		{
			while(i < n)
			{
				dest[i] = '\0';
				i++;
			}
			return (dest);
		}
		dest[i] = src[i];
		i++;
	}

	return(dest);
}



int main(void)
{
	char dest[3] = "123";
	char src[] = "abcdefgh";

	ft_strncpy(dest, src, strlen(src));
	printf("%s\n", dest);

	return (0);
}
