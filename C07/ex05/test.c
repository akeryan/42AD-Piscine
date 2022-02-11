#include <stdio.h>
#include <stdlib.h>

char *ft_strflip(char *ptr)
{
	int count;
	int i;
	char temp;
	int num;

	count = 0;
	while (ptr[count] != '\0')
		count++;
	i = 0;
	num = count;
	while (i < num/2)
	{
		temp = ptr[i];
		ptr[i] = ptr[num - i - 1];
		ptr[num - i - 1] = temp;
		i++;
	}
	return (ptr);
}


char *my_putnbr(unsigned int nb)
{
	int count;
	int nb2;
	char *ptr;
	char c;
	int i;

	count = 1;
	nb2 = nb;
	while (nb2 / 10 != 0)
	{
		count++;
		nb2 /= 10;
	}
	ptr = (char*)malloc(sizeof(*ptr)*(count + 1));
	i = 0;
	while (i < count)
	{
		c = nb % 10 + 48;
		ptr[i] = c;
		i++;
		nb /= 10;
	}
	ptr = ft_strflip(ptr);
	return (ptr);
}

int main()
{
	printf("%s\n", my_putnbr(123456789));
	return (0);
}


