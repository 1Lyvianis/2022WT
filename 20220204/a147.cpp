#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n) && n != 0)
    {
        for (int i = 1; i < n;i++)
        {
            if(i%7!=0)
            {
                printf("%d ", i);
            }
        }
        putchar('\n');
    }
    return 0;
}