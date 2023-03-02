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
