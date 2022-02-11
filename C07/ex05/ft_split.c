#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *s1, char *s2)
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
	s1[i] = '\0';
	return (s1);
}

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

int is_there(char c, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(*dest) * (i + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char **super(char *str, char *charset, int size)
{
	int i;
	int j;
	char **arr;
	char *temp;

	arr = malloc(sizeof(char *) * (size + 1));
	if (arr == 0)
		return (0);

	i = 0;
	j = 0;
	while ((str[i] != '\0') && (is_there(str[i], charset) == 0))
	{
		i++;
	}
	while (str[i] != '\0')
	{
		printf("%c\n", str[i]);
		while ((str[i] != '\0') && (is_there(str[i], charset) == 1))
			i++;
		if(str[i] != '\0')
			temp = &str[i];
		while ((str[i] != '\0') && (is_there(str[i], charset) == 0))
			i++;
		if (str[i] != '\0')
		{
			arr[j] = temp;
			j++;
		}
	}
	return (arr);
}

int calc_size(char *str, char *charset)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while ((str[i] != '\0') && (is_there(str[i], charset) == 0))
	{
		i++;
	}
	while (str[i] != '\0')
	{
		printf("%c\n", str[i]);
		while ((str[i] != '\0') && (is_there(str[i], charset) == 1))
			i++;
		while ((str[i] != '\0') && (is_there(str[i], charset) == 0))
			i++;
		if (str[i] != '\0')
			size++;		
	}
	return (size);
}


char **ft_split(char *str, char *charset)
{
	int size;
	char **ptr;
	
	size = calc_size(str, charset);
	ptr = super(str, charset, size);
	return (ptr);
}
