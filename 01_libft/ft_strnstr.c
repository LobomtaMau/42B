#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len;
    size_t i;
    size_t j;

    if (*needle == '\0')
    {
        return ((char *)haystack);
    }
    needle_len = ft_strlen(needle);
    i = 0;
    while (i < len && haystack[i])
    {
        j = 0;
        while (i + j < len && haystack[i + j] == needle[j])
        {
            if (j == needle_len - 1)
            {
                return ((char *)&haystack[i]);
            }
            j++;
        }
        i++;
    }
    return (NULL);
}

/*Serve para procurar uma palavra no meio da string com uma qtd max de chars

#include "libft.h"
#include <stdio.h>

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

int	main(void)
{
	const char	*haystack = "O Rato roeu a rolha da garrafa do Rei da Rússia.";
	const char	*needle = "Rei";
	char		*result;

	result = ft_strnstr(haystack, needle, 44);
	if (result)
		printf("'%s' was found in '%s' at position %ld.\n", needle, haystack, result - haystack);
	else
		printf("'%s' was not found in '%s'.\n", needle, haystack);

	return (0);
}
*/