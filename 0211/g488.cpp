#include <iostream>
#include <cstdlib>
int covid101(int index);
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", covid101(n));
    return 0;
}
int covid101(int index)
{
    if(index == 1)
    {
        return 1;
    }
    else
    {
        return covid101(index - 1) + index * index - index + 1;
    }
}