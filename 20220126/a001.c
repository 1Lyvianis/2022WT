#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ori[10000] = "hello, ";
    char arr[100];
    scanf("%s", arr);
    strcat(ori, arr);
    printf("%s", ori);
    return 0;
}