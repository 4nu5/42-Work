#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;
     
    i = 0;
    while(av[0][i] != '\0' && ac)
    {
        ft_putchar(av[0][i]);
        i++;
    }
    ft_putchar('\n');
}