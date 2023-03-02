#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;
    if (dstsize > 0)
    {
        while (src[i] && i < (dstsize - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = 0;
    }
    while (src[i])
    {
        i++;
    }
    return (i);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
    char src[] = "Hello, world!";
    char dest[20];
    size_t len = ft_strlcpy(dest, src, sizeof(dest));
    printf("Copied string: %s\n", dest);
    printf("Length of copied string: %zu\n", len);
    return 0;
}
*/