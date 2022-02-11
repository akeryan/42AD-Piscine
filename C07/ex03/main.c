#include <stdio.h>
#include <string.h>
char *ft_strjoin(int, char **, char *);

int main(void) {
	char *text[3];
	char *ptr;
	text[0] = "Test";
	text[1] = "of";
	text[2] = "function";
	ptr = ft_strjoin(3, text, "");
	
	printf("%s\n", ptr);
	printf("%lu\n", strlen(ptr));
	return 0;
}
