#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    
    i = 0;
    while(src[i] != 0 && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return(dest);
}

int	main(void)
{
	char	dest[] = "shit";
	char	src[] = "fuck";
	int n;
	
	n = 1;
	printf("dest before: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("dest after : %s\n", dest);
}
