#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    writte (fd, &c, 1);
}