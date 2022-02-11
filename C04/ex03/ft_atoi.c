int ft_atoi(char *str)
{
	unsigned int i;
	unsigned int minus;
	int result;

	i = 0;
	minus = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13) )
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	if(minus % 2 != 0)
		result *= -1;
	return result;
}
