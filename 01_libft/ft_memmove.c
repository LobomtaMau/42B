#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *p_dest;
    const char *p_src;
    size_t len;

    p_dest = dest;
    p_src = src;
    len = 0;
    if (p_dest < p_src)
    {
        len = n;
        while (len > 0)
        {
            len--;
            p_dest[len] = p_src[len];
        }
    }
    else
    {
        len = 0;
        while (len < n)
        {
            p_dest[len] = p_src[len];
            len++;
        }
    }
    return (dest);
}

/*
#include <stdio.h>

int main()
{
    char dest [] = "VAI COMER VAI";
    char src [] = "-3ai comer";

    ft_memmove(dest, src, 5);

    printf("origem: %s\n", src);
    printf("destino: %s\n", dest);

    return 0;
}
*/