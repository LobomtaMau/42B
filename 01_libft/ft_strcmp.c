int ft_strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return ((unsigned char) *s1 - (unsigned char) *s2);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *s1 = "Vai";
    char *s2 = "vai";
    char *s3 = "Passear";
    char *s4 = "Vai";
    int result1 = ft_strcmp(s1, s2);
    int result2 = ft_strcmp(s1, s3);
    int result3 = ft_strcmp(s1, s4);
    printf("result1: %d\n", result1);
    printf("result2: %d\n", result2);
    printf("result2: %d\n", result3);
    return 0;
}
*/