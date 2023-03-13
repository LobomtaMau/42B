#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char*)s;
    while (n--)
    {
        if (*ptr == (unsigned char)c)
        {
            return (ptr);
        }
        ptr++;
    }
    return (NULL);  
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char	*s1 = "Hello, world!";
	char	*s2 = "The quick brown fox jumps over the lazy dog.";
	char	*s3 = "0123456789";
	char	*s4 = "";
	char	*result;
	
	result = ft_memchr(s1, 'w', strlen(s1));
	if (result != NULL)
		printf("Found 'w' in s1 at position %ld\n", result - s1);
	else
		printf("Did not find 'w' in s1\n");

	result = ft_memchr(s2, 'q', strlen(s2));
	if (result != NULL)
		printf("Found 'q' in s2 at position %ld\n", result - s2);
	else
		printf("Did not find 'q' in s2\n");

	result = ft_memchr(s3, '5', strlen(s3));
	if (result != NULL)
		printf("Found '5' in s3 at position %ld\n", result - s3);
	else
		printf("Did not find '5' in s3\n");

	result = ft_memchr(s4, 'x', strlen(s4));
	if (result != NULL)
		printf("Found 'x' in s4 at position %ld\n", result - s4);
	else
		printf("Did not find 'x' in s4\n");

	return (0);
}
*/