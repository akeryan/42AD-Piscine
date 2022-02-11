#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	
	return (temp);
}


int main()
{
	char dest[] = "123456789";
	char src[] = "abcd";

	ft_strcpy(dest, src);
	write(1, dest, strlen(dest));
	write(1, "\n", 1);

	int i = 0;
	while(dest[i]){
		write(1, &dest[i], 1);
		i++;
	}

	return (0);
}
