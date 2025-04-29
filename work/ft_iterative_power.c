#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int sum;

    sum = 1;

    if(power < 0)
        return(0);
    
    if(power == 0)
    return(1);

    while(power > 0)
    {
        sum *= nb;
        power--;
    }
    return(sum);
}

int	main(void)
{
	printf("Power = %d\n", ft_iterative_power(2, 2));
}