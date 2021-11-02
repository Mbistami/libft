#include "libft.h"
#include <stdio.h>

int main(void){
	printf("%d|", ft_isupper('z')); // returns positive if uppercase.
	printf("%d|", ft_isdigit('5')); // returns positive if digit.
	printf("%d|", ft_isalpha('+'));	// returns positive if alphanumeric.
	printf("%d|", ft_isalnum('2')); // returns positive if number.
	for(int c = 1; c <= 127; ++c) // testing isprint()
   		if (ft_isprint(c)!= 0)
             printf("%c ", c);
}
