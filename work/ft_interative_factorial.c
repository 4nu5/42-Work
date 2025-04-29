#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int sum;
    sum = 1;

    if(nb < 0)
    return(0);

    while(nb > 1)
    {
        sum *= nb;
        nb--;
    }
    return(sum);
}

int	main(void)
{
	printf("Fact = %d\n", ft_iterative_factorial(5));
}