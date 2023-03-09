#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    size_t total_size;

    total_size = count * size;
    ptr = malloc(total_size);
    if (!ptr)
    {
        return (NULL);
    }
    for (size_t i = 0; i < total_size; i++)
    {
        ((char *)ptr)[i] = 0;
    }
    return (ptr);
}
/*
#include <stdio.h>

int main()
{
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]); // should print 0 0 0 0 0
    }
    printf("\n");

    free(arr);
    return 0;
}
*/