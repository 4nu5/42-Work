#include <stdio.h>

int ft_sqrt(int nb)
{
    long i;

    i = 0;

    if(nb <= 0)
        return(0);

    while(i * i < nb)
        i++;

    if(i * i == nb)
        return(i);
    else
        return(0);
}

int	main(void)
{
	printf("Square Root of 0: %d\n", ft_sqrt(0));
} 