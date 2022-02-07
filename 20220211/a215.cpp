#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    while(cin>>a>>b)
    {
        int cnt = 1,tot = a;
        while(tot <= b)
        {
            tot += a + cnt;
            ++cnt;
        }
        cout << cnt << '\n';
    }
    return 0;
}