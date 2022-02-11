#include "ft_stock_str.h"
#include <unistd.h>


struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);
void ft_putnbr(int);

int main()
{
	char *strs[] = {"W9Y5S8StXv"};
	struct s_stock_str *hive = ft_strs_to_tab(1, strs);
	ft_show_tab(hive);
	ft_putnbr(10);
	return (0);
	
}
		
