#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int main(){
    int foo[10];
    for (int i = 0; i < 3;i++)
    {
        scanf("%d", &foo[i]);
    }
    sort(foo, foo + 3);
    int a = foo[0], b = foo[1], c = foo[2];
    printf("%d %d %d\n", a, b, c);
    if(a + b <= c)
    {
        printf("No\n");
    }
    else if(a * a + b * b > c * c)
    {
        printf("Acute\n");
    }
    else if(a * a + b * b < c * c)
    {
        printf("Obtuse\n");
    }
    else
        printf("Right\n");

    return 0;
}