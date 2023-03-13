#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *ptr_dest;
    const char *ptr_src;
    size_t i;

    ptr_dest = dest;
    ptr_src = src;
    i = 0;
    while (i < n)
    {
        ptr_dest[i] = ptr_src[i];
        i++;
    }
    return (dest);
}

/*
#include <stdio.h>
#include <stddef.h>

int main()
{
    char dest [] = "Vai comer";
    char src [] = "VOU COMER";

    ft_memcpy(dest, src, 6);

    printf("Origem: %s\n", src);
    printf("Destino: %s\n", dest);

    return 0;
}*/
