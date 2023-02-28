#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = "  -12345";
    int num = atoi(str);
    printf("The integer value of '%s' is %d\n", str, num);
    return 0;
}