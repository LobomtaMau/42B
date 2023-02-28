#include <stddef.h>

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

int main(void) {
    char str[] = "Hello, world!";
    size_t len = ft_strlen(str);
    printf("The length of the string is %zu\n", len);
    return 0;
}
