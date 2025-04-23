int ft_str_is_printable(char *str)
{
    int j;
    
    j = 0;
    if(str[j] != '\0')
    {
        if(!((str[j] >= 32 && str[j] <= 126)))
        return(0);
        j++;
    }
    return(1);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str1 = "\0";
	char	*str2 = "Abcfgf";

	printf("%s is printable? %d\n", str1, ft_str_is_printable(str1));	
	printf("%s is printable? %d\n", str2, ft_str_is_printable(str2));
}*/