#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n) == 1 && n)
    {
        int cnt = 0;
        while(n % 2)
        {
            ++cnt;
            n /= 2;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
/*
a faster method : 
while(cin >> n && n) 
    cout << __builtin_ctz(~n) << "\n";
*/