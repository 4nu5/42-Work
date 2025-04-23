#include <stdio.h>

char *ft_lowercase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] = str[i] + 32;
        i++;
    }
    return(str);
}

char *ft_strcapitalize(char *str)
{   
    int j;

    ft_lowercase(str);

    if(str[0] >= 'a' && str[0] <= 'z')
    str[0] -= 32;
    
    j = 1;
    while(str[j])
    {
        if(!((str[j - 1] >= 'a' && str[j - 1] <= 'z')
        || (str[j - 1] >= 'A' && str[j - 1] <= 'Z')
        || (str[j - 1] >= '0' && str[j - 1] <= '9')))
        {
            if(str[j] >= 'a' && str[j] <= 'z')
            str[j] -= 32;
        }
        j++;
    }
    return(str);
}

int	main(void)
{
	char	str[] = "suck dick Faggot";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strcapitalize(str));
}