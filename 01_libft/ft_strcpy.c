char *ft_strcpy(char *dest, const char *src)
{
    unsigned int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/*
#include <stdio.h>
int main(void)
{
    char src[] = "Eu sou o";
    char dest[20] = "My name is TOY";
    ft_strcpy(dest, src);
    printf("XANAN: %s\n", dest);
    return 0;
}
*/