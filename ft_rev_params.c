#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i; 
    int j;
    int last;

    i = 1;
    last = ac - 1;
    while(i < ac)
    {
        j = 0;
        while(av[last][j])
        {
            ft_putchar(av[last][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
        last--;
    }
}