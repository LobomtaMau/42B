#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (*s1 && *s2 && n > 0)
    {
        if (*s1 != *s2)
        {
            return ((unsigned char)*s1 - (unsigned char)*s2);
        }
        s1++;
        s2++;
        n--;
    }
    if (n == 0)
    {
        return (0);
    }
    else
    {
        return ((unsigned char)*s1 - (unsigned char)*s2);
    }
}

#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *str1 = "Hello";
    char *str2 = "Hello, world!";
    char *str3 = "Hell";
    int result1 = ft_strncmp(str1, str2, 5);
    int result2 = ft_strncmp(str1, str3, 5);
    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    return (0);
}