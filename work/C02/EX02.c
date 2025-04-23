#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int p;
    
    p = 0;
    while(str[p] != '\0')
    {
        if(!((str[p] >= 'a' && str[p] <= 'z')
        || str[p] >= 'A' && str[p] <='Z'))
        return(0);
        p++;
    }
    return(1);
}

int	main(void)
{
	char	*str1 = "T stndo";
	char	*str2 = "Testndo";

	printf("%s is alpha? %d\n", str1, ft_str_is_alpha(str1));	
	printf("%s is alpha? %d\n", str2, ft_str_is_alpha(str2));	
}