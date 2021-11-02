#include "libft.h"

int main(void){
	// printf("%d|", ft_isupper('z')); // returns positive if uppercase.
	// printf("%d|", ft_isdigit('5')); // returns positive if digit.
	// printf("%d|", ft_isalpha('+'));	// returns positive if alphanumeric.
	// printf("%d|", ft_isalnum('2')); // returns positive if number.
	// for(int c = 1; c <= 127; ++c) // testing isprint()
   	// 	if (ft_isprint(c)!= 0)
    //          printf("%c ", c);
	// printf("%d", ft_strlen("ssss\0ssss"));
	char string[10] = "33tas";
	// printf("%s",string);
	//char *p = memset(string, 'a', 2);
	// char *p1 = ft_memset(string, 'a', 2);
	// printf("\n%s | %s", p, p1);

	//printf("%s", ft_bzero(string, 5));

	char stringDest[10] = "data1";

	printf("%s | %s | %s", ft_memcpy(string, stringDest, 2), stringDest, string);
}
