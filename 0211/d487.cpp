#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n) == 1)
    {
        int cnt = n;
        if(n == 0)
        {
            printf("0! = 1 = 1\n");
            continue;
        }
        printf("%d! = %d ",n,n);
        for (int i = n - 1; i >= 1;i--)
        {
            printf("* %d ", i);
            cnt *= i;
        }
        printf("= %d\n", cnt);
    }
    return 0;
}