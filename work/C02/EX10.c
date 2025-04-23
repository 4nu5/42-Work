#include <stdio.h>

unsigned int ft_length(char *str)
{
    int i;

    i = 0;
    while(str[i])
    i++;
    return(i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int j;

    j = 0;
    if(size > 0)
    {
        while(src[j] != '\0' && j < size - 1)
        {
            dest[j] = src[j];
            j++;
        }
        dest[j] = '\0';
    }
    return(ft_length(src));
}

int	main(void)
{
	char	src[] = "FUCKING SHIT";
	char	dest[11];
	int	n = 5;

	printf("src: %s\nlength returned: %d\ndest: %s\n", src, ft_strlcpy(dest, src, n), dest);
}