char *ft_strcat(char *src, const char *dest)
{
    char *ptr = dest;

    while (*ptr)
    {
        ptr++;
    }
    while (*src)
    {
        *ptr = *src;
        src++;
        ptr++;
    }
    *ptr = '\0';
    return (src);
}


#include <stdio.h>
#include <stdlib.h>

char *ft_strcat(char *src, const char *dest);

int main(void)
{
    char str1[50] = "Hello";
    char str2[] = " world!";
    printf("Before: %s\n", str1);
    ft_strcat(str1, str2);
    printf("After: %s\n", str1);
    return 0;
}