#include <unistd.h>

void ft_print_comb2(void)
{
    int i;
    int b; 
    char numero;

    i = 0;
    numero = '0';

    while (i <= 98)
    {
        b = i +1;
        while (b <= 99)
        {
            write(1 , &i + '0', 1);
            write(1 , &b + '0', 1);
            b++;
        }i++;
    }
}

int main (void)
{
    ft_print_comb2();
    return(0);
}