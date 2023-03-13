#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *ptr1;
    const unsigned char *ptr2;

    ptr1 = (const unsigned char*)s1;
    ptr2 = (const unsigned char*)s2;
    while (n--)
    {
        if (*ptr1 != *ptr2)
        {
            return ((int)*ptr1 - (int)*ptr2);
        }
        ptr1++;
        ptr2++;
    }
    return (0);
}

/*
int main()
{
    char arr1[] = "Hello, world!";
    char arr2[] = "Hello, worlZ!";
    int result;

    result = ft_memcmp(arr1, arr2, strlen(arr1));
    printf("Comparison result: %d\n", result);

    return 0;
}
*/