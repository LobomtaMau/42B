#include "libft.h"

void ft_strclr(char *s)
{
    size_t i;

    if (s)
    {
        i = 0;
        while (s[i])
        {
            s[i] = '\0';
            i++;
        }
    }
}

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[6] = "Hello";
    
    printf("Before: %s\n", str);
    ft_strclr(str);
    printf("After: %s\n", str);
    
    return 0;
}