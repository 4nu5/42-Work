#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_check_base(char *base)
{
    int length;
    int i;

    length = 0;
    while(base[length])
    {
        if(base[length] == '+' || base[length] == '-')
            return(0);
        i = 0;
        while(i < length)
        {
            if(base[i] == base[length])
            return(0);
            i++;
        }
        length++;
    }
    if(length < 2)
        return(0);
    return(length);
}

void ft_putnbr_base(int nbr, char *base)
{
    int length;
    int i;

    i = 1;
    length = ft_check_base(base);
    if(length == 0)
        return ;
    if(nbr < 0)
    {
        ft_putchar('-');
        i *= -1;
    }
    if(nbr <= -length || nbr >= length)
        ft_putnbr_base(i * (nbr / length), base);
    write(1, &base[i * (nbr % length)], 1);
}

int main(void)
{
    int nbr = 0;
    char base1[] = "01";
    ft_putnbr_base(nbr, base1);
    write(1, "\n", 1);
}