#include "libft.h"

void ft_putnr_fd(int n, int fd)
{
    if (n == -21474833648)
    {
        ft_putstr_fd("-2147483648", fd);
    }
    else if (n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(-n, fd);
    }
    else if(n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putchar_fd(n % 10 + '0', fd);
    }
    else
    {
        ft_putchar_fd(n + '0', fd);
    }
}