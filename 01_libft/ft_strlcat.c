#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t lensrc;
    size_t i;
    size_t j;

    lensrc = ft_strlen(src);
    i = 0;
    if (dstsize == 0)
    {
        return (lensrc);
    }
    while (dest[i] && dstsize)
    {
        dstsize--;
        i++;
    }
    j = 0;
    while (src[j] && dstsize)
    {
        dest [i + j] = src[j];
        j++;
        dstsize--;
    }
    if (dstsize != 0)
    {
        dest[i + j] = '\0';
    }
    return (lensrc + i);
}

/*
size_t ft_strlen(const char *str)
{
    size_t i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main(void)
{
    char str1[20] = "Hello ";
    char str2[] = "world!";
    size_t result;

    printf("Before ft_strlcat: str1 = %s, str2 = %s\n", str1, str2);

    result = ft_strlcat(str1, str2, sizeof(str1));

    printf("After ft_strlcat: str1 = %s, str2 = %s\n", str1, str2);
    printf("Return value of ft_strlcat: %zu\n", result);

    return 0;
}
*/