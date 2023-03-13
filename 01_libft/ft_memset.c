#include "libft.h"

void *ft_memset(void *ptr, int value, size_t n)
{
    unsigned char *p;

    p = ptr;
    while (n > 0)
    {
        p[n - 1] = value;
        n--;
    }
    return (ptr);

}

/*
#include <stdio.h>

int main()
{
    char str [] = "Vai comer COUVES";

    printf("Antes: %s\n", str);

    ft_memset(str, 'A', 10);

    printf("resultado: %s\n", str);

    return 0;

}
*/