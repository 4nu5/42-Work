#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    while(i < ac)
    {
        j = 0;
        while(av[i][j])
        {
            ft_putchar(av[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }

}