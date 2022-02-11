#include "ft_stock_str.h"


struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main()
{
	char *strs[] = {"yvlJTURo7ayxG8EbCZo7rFWu8f7PsVYe", "JWI69SmOzQRkvKn"};
	struct s_stock_str *hive = ft_strs_to_tab(2, strs);
	ft_show_tab(hive);
	return (0);
	
}
		
