#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n, cnt = 0,temp;
    scanf("%d", &n);
    for (int i = 1; i <= n;i++)
    {
        scanf("%d", &temp);
        cnt += i * temp;
    }
    printf("%d\n", cnt);
    return 0;
}