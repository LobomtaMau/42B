#include <stddef.h>

char *ft_strcat(char *src, const char *dest)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(*src);
    while (src[i])
    {
        dest = src;
        i++;
        len++;
    }
    
    src = '\0';
    return (src);
}