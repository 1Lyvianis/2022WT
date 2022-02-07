#include <iostream>
#include <cstdlib>
using namespace std;
typedef long long ll;
//WA if ans is not ll'ed.
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a % 2)
        a += 1;
    if(b % 2)
        b -= 1;
    ll ans = (a + b) * ((b - a) / 2 + 1) / 2;
    printf("%lld", ans);
    return 0;
}