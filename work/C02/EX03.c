#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int p;
    
    p = 0;
    while(str[p] != '\0')
    {
        if(!((str[p] >= '0' && str[p] <= '9')))
        return(0);
        p++;
    }
    return(1);
}

int	main(void)
{
	char	*str1 = "124535464";
	char	*str2 = "Testndo";

	printf("%s is alpha? %d\n", str1, ft_str_is_numeric(str1));	
	printf("%s is alpha? %d\n", str2, ft_str_is_numeric(str2));	
}