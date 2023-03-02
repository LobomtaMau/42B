<<<<<<< HEAD
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
=======
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
>>>>>>> 748214c974fa08149685c6f2e0ae7cfd38e7c41e
