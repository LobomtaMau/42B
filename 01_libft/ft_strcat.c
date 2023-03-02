char *ft_strcat(char *dest, const char *src)
{
    char *soma = dest;
    while(*dest)
    {
        dest++;
    }
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (soma);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Vai comer ";
    char str2[] = "Bat4tas!";
    strcat(str1, str2);
    printf("Xanan: %s", str1);
    return 0;
}
*/