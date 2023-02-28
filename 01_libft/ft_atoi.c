#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    sign = 1;
    res = 0;
    while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
    i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    while (ft_isdigit(str[i]))
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}
/*
int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return (1);
    }
    return (0);
}
#include <stdio.h>
int main() {
    char str[] = "  +12345as125";
    int num = ft_atoi(str);
    printf("The integer value of '%s' is %d\n", str, num);
    return 0;
}
*/